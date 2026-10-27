import os
import xml.etree.ElementTree as ET

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import AppendEnvironmentVariable, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node


def generate_launch_description():
    pkg = get_package_share_directory("sauvc_world")
    auv_pkg = get_package_share_directory("auv_sims")

    existing_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(auv_pkg, "launch", "test_blueROV.launch.py")
        ),
        # Provisional qualification practice: shallow end, facing along +X.
        launch_arguments={
            'spawn_robot': 'false',
            'x': '-24.4',
            'y': '0',
            'z': '-0.65',
        }.items(),
    )
    
    # Direct ROS control uses the six Gazebo thruster systems, without the
    # upstream model's optional ArduPilot plugin and its SITL dependency.
    sauvc_share = get_package_share_directory('sauvc_world')
    robot_model = ET.parse(os.path.join(
        sauvc_share, 'models', 'robot', 'model.sdf'
    ))
    for parent in robot_model.iter():
        for plugin in list(parent.findall('plugin')):
            print(plugin.get('filename'))
            if plugin.get('filename') == 'libArduPilotPlugin.so':
                print("Remove plugin")
                parent.remove(plugin)

    spawn_robot = Node(
        package="ros_gz_sim",
        executable="create",
        arguments=[
            "-world", "oceans_waves",
            '-string', ET.tostring(robot_model.getroot(), encoding='unicode'),
            "-name", "sauvc_robot",
            "-x", "-24.4",
            "-y", "0",
            "-z", "-0.65",
        ],
        output='screen',
    )

    spawn_gate = Node(
        package="ros_gz_sim",
        executable="create",
        arguments=[
            "-world", "oceans_waves",
            "-file", os.path.join(pkg, "models", "gate", "model.sdf"),
            "-name", "sauvc_gate",
            # 10 m from the shallow wall at x=-25; 2027 layout is pending.
            "-x", "-15",
            "-y", "0",
            "-z", "-0.75",
        ],
        output="screen",
    )
    spawn_pool = Node(
        package="ros_gz_sim",
        executable="create",
        arguments=[
            "-world", "oceans_waves",
            "-file", os.path.join(
                pkg, "models", "pool", "poolWalls.sdf"
            ),
            "-name", "pool_walls",
            "-x", "0",
            "-y", "0",
            "-z", "0",
        ],
        output="screen",
    )

    return LaunchDescription([
        AppendEnvironmentVariable(
            'GZ_SIM_RESOURCE_PATH', os.path.join(pkg, 'models')),
        existing_sim,
        spawn_robot,
        spawn_gate,
        spawn_pool,
    ])
