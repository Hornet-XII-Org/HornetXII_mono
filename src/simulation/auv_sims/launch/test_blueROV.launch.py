"""Launch BlueROV with direct ROS thruster control, without ArduSub SITL."""

import os
import xml.etree.ElementTree as ET

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    sim_share = get_package_share_directory('auv_sims')
    robot_share = get_package_share_directory('dave_robot_models')
    dave_share = get_package_share_directory('dave_demos')

    # Direct ROS control uses the six Gazebo thruster systems, without the
    # upstream model's optional ArduPilot plugin and its SITL dependency.
    model = ET.parse(os.path.join(
        robot_share, 'description', 'bluerov2', 'model.sdf'))
    for parent in model.iter():
        for plugin in list(parent.findall('plugin')):
            if plugin.get('filename') == 'libArduPilotPlugin.so':
                parent.remove(plugin)

    world = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            dave_share, 'launch', 'dave_world.launch.py')),
        launch_arguments={'world_name': 'dave_ocean_waves'}.items(),
    )
    spawn_robot = Node(
        package='ros_gz_sim', executable='create',
        arguments=[
            '-world', 'oceans_waves', '-name', 'bluerov2',
            '-string', ET.tostring(model.getroot(), encoding='unicode'),
            '-x', LaunchConfiguration('x'), '-y', LaunchConfiguration('y'),
            '-z', LaunchConfiguration('z'),
        ],
        output='screen',
    )
    thruster_bridge = Node(
        package='ros_gz_bridge', executable='parameter_bridge',
        name='bluerov_thruster_bridge',
        parameters=[{'config_file': os.path.join(
            sim_share, 'config', 'gz_bridge.yaml')}],
        output='screen',
    )
    state_bridge = Node(
        package='ros_gz_bridge', executable='parameter_bridge',
        name='bluerov_state_bridge',
        arguments=[
            '/model/bluerov2/odometry@nav_msgs/msg/Odometry[gz.msgs.Odometry',
            '/model/bluerov2/imu@sensor_msgs/msg/Imu[gz.msgs.IMU',
            '/world/oceans_waves/model/bluerov2/joint_state@sensor_msgs/msg/JointState[gz.msgs.Model',
            '/model/bluerov2/camera@sensor_msgs/msg/Image[gz.msgs.Image',
            '/model/bluerov2/camera_info@sensor_msgs/msg/CameraInfo[gz.msgs.CameraInfo',
        ],
        output='screen',
    )
    return LaunchDescription([
        DeclareLaunchArgument('x', default_value='0'),
        DeclareLaunchArgument('y', default_value='0'),
        DeclareLaunchArgument('z', default_value='-0.7'),
        world, spawn_robot, thruster_bridge, state_bridge,
    ])
