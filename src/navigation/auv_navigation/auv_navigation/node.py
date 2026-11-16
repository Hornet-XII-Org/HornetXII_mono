"""ROS IO for a restartable waypoint mission; camera processing stays external."""
import json
import math
import time

import rclpy
from rclpy.clock import Clock, ClockType
from rclpy.node import Node
from rclpy.qos import DurabilityPolicy, QoSProfile, qos_profile_sensor_data
from geometry_msgs.msg import Pose as PoseMsg, PoseStamped
from nav_msgs.msg import Odometry, Path
from std_msgs.msg import String
from std_srvs.srv import Trigger

from .mission import Executor, Gate, Pose, Waypoint, qualification


def pose_message(pose):
    msg = PoseMsg()
    msg.position.x, msg.position.y, msg.position.z = pose.x, pose.y, pose.z
    msg.orientation.z, msg.orientation.w = math.sin(pose.yaw/2), math.cos(pose.yaw/2)
    return msg


class WaypointExecutor(Node):
    def __init__(self):
        super().__init__('waypoint_executor')
        defaults = {
            'state_topic': '/model/bluerov2/odometry', 'reference_topic': '/reference',
            'controller_command_topic': '/auv_controls/thruster1/cmd_thrust',
            'frame_id': 'map', 'mission': 'qualification', 'autostart': False,
            'gate_pose': [-15.0, 0.0, -0.55, 0.0], 'gate_width': 1.5, 'gate_height': 1.0,
            'vehicle_length': 0.6, 'vehicle_width': 0.5, 'vehicle_height': 0.4,
            'clearance_margin': 0.1, 'approach_distance': 1.5, 'exit_distance': 1.0,
            'waypoints': [0.0, 0.0, -0.55, 0.0],
            'position_tolerance': 0.12, 'yaw_tolerance': 0.10,
            'speed_tolerance': 0.08, 'yaw_speed_tolerance': 0.08,
            'settle_time': 0.7, 'waypoint_timeout': 120.0,
            'linear_speed': 0.2, 'yaw_rate': 0.35, 'max_reference_lead': 0.35,
            'state_timeout': 1.0, 'max_stamp_age': 0.5, 'max_tilt': 0.35,
            # Conservative practice envelope, not a surveyed floor model.
            'bounds_min': [-24.6, -12.0, -1.05], 'bounds_max': [24.6, 12.0, -0.25],
        }
        for name, value in defaults.items():
            self.declare_parameter(name, value)
        self.p = {key: self.get_parameter(key).value for key in defaults}
        self.mission = Executor(**{key: self.p[key] for key in (
            'position_tolerance', 'yaw_tolerance', 'speed_tolerance', 'yaw_speed_tolerance',
            'settle_time', 'waypoint_timeout', 'linear_speed', 'yaw_rate', 'max_reference_lead')})
        p = self.p
        self.gate = Gate(Pose(*p['gate_pose']), width=p['gate_width'], height=p['gate_height'],
                         vehicle_length=p['vehicle_length'], vehicle_width=p['vehicle_width'],
                         vehicle_height=p['vehicle_height'], margin=p['clearance_margin'])
        if p['mission'] not in ('qualification', 'waypoints'):
            raise ValueError('mission must be qualification or waypoints')
        if len(p['waypoints']) % 4 or not p['waypoints']:
            raise ValueError('waypoints must contain groups of x, y, z, yaw')
        if (len(p['bounds_min']) != 3 or len(p['bounds_max']) != 3
                or not all(math.isfinite(a) and math.isfinite(b) and a < b
                           for a, b in zip(p['bounds_min'], p['bounds_max']))):
            raise ValueError('bounds_min/max must define finite increasing XYZ bounds')
        if not all(math.isfinite(p[k]) and p[k] > 0 for k in ('state_timeout', 'max_stamp_age', 'max_tilt')):
            raise ValueError('State timeout, stamp age and tilt limit must be positive')
        self.pose = None
        self.speed = self.yaw_speed = 0.0
        self.received = self.stamp = None
        self.last_sample_stamp = None
        self.input_error = ''
        self.autostart_pending = p['autostart']
        self.last_status = ''
        self.last_status_wall = 0.0
        self.reference_pub = self.create_publisher(PoseMsg, p['reference_topic'], 10)
        retained = QoSProfile(depth=1, durability=DurabilityPolicy.TRANSIENT_LOCAL)
        self.status_pub = self.create_publisher(String, '/navigation/status', retained)
        self.path_pub = self.create_publisher(Path, '/navigation/path', retained)
        self.create_subscription(Odometry, p['state_topic'], self.odometry, qos_profile_sensor_data)
        self.create_service(Trigger, '~/start', self.start)
        self.create_service(Trigger, '~/cancel', self.cancel)
        # Wall time detects an absent/paused simulator even when ROS time stops.
        self.create_timer(0.05, self.update, clock=Clock(clock_type=ClockType.STEADY_TIME))
        self.get_logger().info('Waiting for state. Call /waypoint_executor/start to begin.')

    def now_seconds(self):
        return self.get_clock().now().nanoseconds*1e-9

    def odometry(self, msg):
        q = msg.pose.pose.orientation
        xyz = msg.pose.pose.position
        t = msg.twist.twist
        values = (xyz.x, xyz.y, xyz.z, q.x, q.y, q.z, q.w,
                  t.linear.x, t.linear.y, t.linear.z, t.angular.x, t.angular.y, t.angular.z)
        stamp = msg.header.stamp.sec+msg.header.stamp.nanosec*1e-9
        norm = math.sqrt(q.x*q.x+q.y*q.y+q.z*q.z+q.w*q.w)
        error = ''
        if msg.header.frame_id != self.p['frame_id']:
            error = f"Expected state frame {self.p['frame_id']}, received {msg.header.frame_id}"
        elif not all(math.isfinite(v) for v in values) or not 0.99 < norm < 1.01:
            error = 'Invalid odometry values or quaternion'
        elif self.last_sample_stamp is not None and stamp < self.last_sample_stamp:
            error = 'Odometry timestamp moved backwards'
        self.last_sample_stamp = stamp
        if error:
            self.input_error = error
            if self.mission.state == 'RUNNING':
                self.mission.stop('FAILED', error, None)
            return
        roll = math.atan2(2*(q.w*q.x+q.y*q.z), 1-2*(q.x*q.x+q.y*q.y))
        pitch = math.asin(max(-1.0, min(1.0, 2*(q.w*q.y-q.z*q.x))))
        if max(abs(roll), abs(pitch)) > self.p['max_tilt']:
            self.input_error = 'Vehicle tilt exceeds planar-controller limit'
            if self.mission.state == 'RUNNING':
                self.mission.stop('FAILED', self.input_error, None)
            return
        yaw = math.atan2(2*(q.w*q.z+q.x*q.y), 1-2*(q.y*q.y+q.z*q.z))
        self.pose = Pose(xyz.x, xyz.y, xyz.z, yaw)
        self.speed = math.sqrt(t.linear.x*t.linear.x+t.linear.y*t.linear.y+t.linear.z*t.linear.z)
        self.yaw_speed = t.angular.z
        self.received, self.stamp = time.monotonic(), stamp
        self.input_error = ''

    def state_error(self):
        if self.input_error:
            return self.input_error
        if self.received is None or time.monotonic()-self.received > self.p['state_timeout']:
            return 'Odometry absent or stopped (wall-time watchdog)'
        age = self.now_seconds()-self.stamp
        if age < -0.05 or age > self.p['max_stamp_age']:
            return 'Odometry acquisition timestamp is stale or in another clock domain'
        state_publishers = self.count_publishers(self.p['state_topic'])
        if state_publishers == 0:
            return 'Odometry publisher unavailable'
        if state_publishers > 1:
            return 'Expected exactly one odometry publisher; stop duplicate simulation bridges'
        if self.count_publishers(self.p['controller_command_topic']) != 1:
            return 'Expected exactly one thruster controller; stop other controllers or start one'
        if self.count_publishers(self.p['reference_topic']) != 1:
            return 'Another pose-reference publisher is active'
        return ''

    def envelope_error(self, pose, allow_surface=False):
        upper = list(self.p['bounds_max'])
        if allow_surface:
            # The positively buoyant simulator may wait at the surface before
            # start. Only the initial DIVE may enter from above the cruise band.
            upper[2] = 0.1
        if any(not a <= v <= b for a, v, b in zip(self.p['bounds_min'],
                                                (pose.x, pose.y, pose.z), upper)):
            return 'Pose is outside the configured practice envelope'
        return self.gate.clearance_error(pose) if self.p['mission'] == 'qualification' else ''

    def start(self, request, response):
        del request
        try:
            error = self.state_error()
            if error:
                raise ValueError(error)
            if self.p['mission'] == 'qualification':
                waypoints = qualification(self.pose, self.gate, self.p['approach_distance'], self.p['exit_distance'])
            else:
                v = self.p['waypoints']
                waypoints = [Waypoint(f'WAYPOINT_{i//4+1}', Pose(*v[i:i+4])) for i in range(0, len(v), 4)]
            error = self.envelope_error(self.pose, allow_surface=self.p['mission'] == 'qualification')
            if error:
                raise ValueError(error)
            for pose in [w.pose for w in waypoints]:
                if self.envelope_error(pose):
                    raise ValueError(self.envelope_error(pose))
            self.mission.start(waypoints, self.pose, self.now_seconds())
            self.autostart_pending = False
            self.publish_path(waypoints)
            response.success, response.message = True, 'Mission started'
        except ValueError as error:
            response.success, response.message = False, str(error)
        return response

    def cancel(self, request, response):
        del request
        self.autostart_pending = False
        self.mission.stop('CANCELED', 'Canceled by operator', self.pose if not self.state_error() else None)
        response.success, response.message = True, 'Canceled; holding current pose if state is valid'
        return response

    def publish_path(self, waypoints):
        path = Path()
        path.header.frame_id, path.header.stamp = self.p['frame_id'], self.get_clock().now().to_msg()
        for pose in [self.pose]+[w.pose for w in waypoints]:
            stamped = PoseStamped()
            stamped.header = path.header
            stamped.pose = pose_message(pose)
            path.poses.append(stamped)
        self.path_pub.publish(path)

    def update(self):
        error = self.state_error()
        if self.autostart_pending and not error:
            self.autostart_pending = False
            response = self.start(None, Trigger.Response())
            if not response.success:
                self.mission.stop('FAILED', response.message, None)
        if self.mission.state == 'RUNNING':
            error = error or self.envelope_error(self.pose, allow_surface=self.mission.phase == 'DIVE')
            if error:
                self.mission.stop('FAILED', error, self.pose if not self.state_error() else None)
            else:
                self.mission.tick(self.pose, self.speed, self.yaw_speed, self.now_seconds())
        if self.mission.reference is not None and not error:
            self.reference_pub.publish(pose_message(self.mission.reference))
        status = json.dumps({
            'state': self.mission.state, 'phase': self.mission.phase,
            'waypoint_index': self.mission.index, 'waypoint_count': len(self.mission.waypoints),
            'reason': self.mission.reason, 'input_error': error,
        }, sort_keys=True)
        if status != self.last_status or time.monotonic()-self.last_status_wall > 1.0:
            self.status_pub.publish(String(data=status))
            if status != self.last_status:
                self.get_logger().info(status)
            self.last_status, self.last_status_wall = status, time.monotonic()


def main(args=None):
    rclpy.init(args=args)
    node = WaypointExecutor()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()
