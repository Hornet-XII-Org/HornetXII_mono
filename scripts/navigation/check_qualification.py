"""Repeatable isolated Gazebo physics check, with optional injected ROS failures.

Run through the sourced ROS workspace; see src/navigation/README.md. Camera
sensors and visuals are omitted for a GPU-free test, while the robot physics,
pool collisions, gate collisions, real controller and mission nodes are used.
"""
import argparse
import csv
import json
import math
import os
from pathlib import Path
import signal
import subprocess
import tempfile
import time
import uuid
import xml.etree.ElementTree as ET

import rclpy
from nav_msgs.msg import Odometry
from rclpy.qos import qos_profile_sensor_data
from std_msgs.msg import Float64, String
from std_srvs.srv import Trigger


def physics_world(root, destination, start):
    tree = ET.parse(root / 'src/dave/models/dave_worlds/worlds/dave_ocean_waves.world')
    # The DAVE world is SDF 1.4. Nested robot joints need modern axis semantics,
    # matching the robot spawned separately by ros_gz_sim/create in the GUI run.
    tree.getroot().set('version', '1.9')
    world = tree.getroot().find('world')
    for element in list(world):
        if (element.tag in ('include', 'gui', 'light', 'scene')
                or (element.tag == 'plugin' and any(name in element.get('name', '')
                    for name in ('Sensors', 'Doppler', 'SceneBroadcaster')))):
            world.remove(element)
    world.find('physics/real_time_factor').text = '3.0'
    poses = {'robot': f'{start[0]} {start[1]} {start[2]} 0 0 {start[3]}',
             'gate': '-15 0 -0.55 0 0 0', 'pool': '0 0 0 0 0 0'}
    for kind, text in poses.items():
        filename = 'poolWalls.sdf' if kind == 'pool' else 'model.sdf'
        model = ET.parse(root / 'src/simulation/sauvc_world/models' / kind / filename).getroot().find('model')
        pose = model.find('pose')
        if pose is None:
            pose = ET.SubElement(model, 'pose')
        pose.text = text
        for link in model.findall('link'):
            for element in list(link):
                if element.tag in ('visual', 'sensor'):
                    link.remove(element)
        world.append(model)
    tree.write(destination)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--scenario', choices=('complete', 'cancel', 'stale-state', 'duplicate-state'), default='complete')
    parser.add_argument('--start', nargs=4, type=float, default=[-24.4, 0.2, -0.65, 0.1], metavar=('X', 'Y', 'Z', 'YAW'))
    parser.add_argument('--timeout', type=float, default=180)
    parser.add_argument('--output', type=Path)
    args = parser.parse_args()
    root = Path(__file__).resolve().parents[2]
    output = args.output or Path(tempfile.mkdtemp(prefix='hornet-qualification-'))
    output = output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    env = os.environ.copy()
    env.update(ROS_DOMAIN_ID='147' if env.get('ROS_DOMAIN_ID') == '146' else '146',
               GZ_PARTITION=f'hornet_navigation_{uuid.uuid4().hex}',
               ROS_LOG_DIR=str(output / 'ros'), PYTHONUNBUFFERED='1')
    os.environ.update(env)
    print(f'Isolated ROS domain {env["ROS_DOMAIN_ID"]}; logs: {output}', flush=True)
    physics_world(root, output / 'physics.world', args.start)
    processes, files = [], []

    def run(name, command):
        log = (output / f'{name}.log').open('w')
        files.append(log)
        process = subprocess.Popen(command, env=env, stdout=log, stderr=subprocess.STDOUT, start_new_session=True)
        processes.append(process)
        return process

    try:
        run('gazebo', ['gz', 'sim', '-r', '-s', str(output / 'physics.world')])
        topics = ['/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock',
                  '/model/bluerov2/odometry@nav_msgs/msg/Odometry[gz.msgs.Odometry']
        remaps = []
        for index in range(1, 7):
            topic = f'/model/bluerov2/joint/thruster{index}_joint/cmd_thrust'
            topics.append(f'{topic}@std_msgs/msg/Float64]gz.msgs.Double')
            remaps.extend(['-r', f'{topic}:=/auv_controls/thruster{index}/cmd_thrust'])
        bridge = run('bridge', ['ros2', 'run', 'ros_gz_bridge', 'parameter_bridge', *topics, '--ros-args', *remaps])
        rclpy.init()
        node = rclpy.create_node('qualification_check')
        sample, status, thrust, phases = {}, {}, {}, []
        trajectory = (output / 'trajectory.csv').open('w')
        files.append(trajectory)
        writer = csv.writer(trajectory)
        writer.writerow(['sim_time', 'x', 'y', 'z', 'yaw', 'phase'])

        def odometry(message):
            p, q = message.pose.pose.position, message.pose.pose.orientation
            stamp = message.header.stamp.sec + message.header.stamp.nanosec*1e-9
            yaw = math.atan2(2*(q.w*q.z+q.x*q.y), 1-2*(q.y*q.y+q.z*q.z))
            sample.update(sim_time=stamp, x=p.x, y=p.y, z=p.z, yaw=yaw)
            writer.writerow([stamp, p.x, p.y, p.z, yaw, status.get('phase', '')])

        def report(message):
            status.update(json.loads(message.data))
            if not phases or phases[-1] != status['phase']:
                phases.append(status['phase'])
                print(json.dumps({'phase': status, 'pose': sample}), flush=True)

        node.create_subscription(Odometry, '/model/bluerov2/odometry', odometry, qos_profile_sensor_data)
        node.create_subscription(String, '/navigation/status', report, 10)
        for index in range(1, 7):
            node.create_subscription(Float64, f'/auv_controls/thruster{index}/cmd_thrust',
                                     lambda msg, i=index: thrust.update({i: msg.data}), 10)
        deadline = time.monotonic()+20
        while not sample and time.monotonic() < deadline:
            rclpy.spin_once(node, timeout_sec=0.1)
        if not sample:
            raise RuntimeError('No simulator odometry; see gazebo.log and bridge.log')
        mission_process = run('mission', ['ros2', 'launch', 'auv_navigation', 'qualification.launch.py', 'autostart:=true'])
        cancel = node.create_client(Trigger, '/waypoint_executor/cancel')
        injected = None
        duplicate_publisher = None
        deadline = time.monotonic()+args.timeout
        while time.monotonic() < deadline:
            rclpy.spin_once(node, timeout_sec=0.05)
            if mission_process.poll() is not None:
                raise RuntimeError('Navigation launch exited; see mission.log')
            if not injected and status.get('phase') == 'APPROACH' and sample['x'] > -24.0:
                if args.scenario == 'cancel' and cancel.service_is_ready():
                    cancel.call_async(Trigger.Request())
                    injected = time.monotonic()
                elif args.scenario == 'stale-state':
                    os.killpg(bridge.pid, signal.SIGINT)
                    injected = time.monotonic()
                elif args.scenario == 'duplicate-state':
                    duplicate_publisher = node.create_publisher(Odometry, '/model/bluerov2/odometry', 10)
                    injected = time.monotonic()
            terminal = status.get('state')
            if args.scenario == 'complete' and terminal in ('COMPLETE', 'FAILED'):
                assert terminal == 'COMPLETE', status
                break
            if injected and time.monotonic()-injected > 2:
                if args.scenario == 'cancel':
                    assert terminal == 'CANCELED', status
                else:
                    assert terminal == 'FAILED', status
                    assert len(thrust) == 6 and all(abs(v) < 1e-8 for v in thrust.values()), thrust
                    expected = 'Odometry' if args.scenario == 'stale-state' else 'publisher'
                    assert expected in status['reason'], status
                break
            if terminal == 'FAILED':
                if not injected:
                    raise RuntimeError(f'Mission failed: {status}')
        else:
            raise RuntimeError(f'Test timed out: {status}; pose={sample}')
        result = {'scenario': args.scenario, 'status': status, 'pose': sample, 'phases': phases}
        (output / 'result.json').write_text(json.dumps(result, indent=2))
        print(json.dumps(result), flush=True)
        del duplicate_publisher
        node.destroy_node()
    finally:
        for process in reversed(processes):
            if process.poll() is None:
                os.killpg(process.pid, signal.SIGINT)
        deadline = time.monotonic()+5
        for process in reversed(processes):
            try:
                process.wait(timeout=max(0.1, deadline-time.monotonic()))
            except subprocess.TimeoutExpired:
                os.killpg(process.pid, signal.SIGKILL)
                process.wait()
        for file in files:
            file.close()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
