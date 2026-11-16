"""Start navigation against an already-running simulation, never another Gazebo."""
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    config = os.path.join(get_package_share_directory('auv_navigation'), 'config', 'qualification.yaml')
    sim_time = {'use_sim_time': ParameterValue(LaunchConfiguration('use_sim_time'), value_type=bool)}
    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='true'),
        DeclareLaunchArgument('start_controller', default_value='true'),
        DeclareLaunchArgument('autostart', default_value='false'),
        DeclareLaunchArgument('config', default_value=config),
        DeclareLaunchArgument('state_topic', default_value='/model/bluerov2/odometry'),
        Node(package='auv_controls', executable='PIDController', output='screen',
             condition=IfCondition(LaunchConfiguration('start_controller')),
             parameters=[LaunchConfiguration('config'), sim_time],
             remappings=[('/model/bluerov2/odometry', LaunchConfiguration('state_topic'))]),
        Node(package='auv_navigation', executable='waypoint_executor', output='screen',
             parameters=[LaunchConfiguration('config'), sim_time, {
                 'state_topic': LaunchConfiguration('state_topic'),
                 'autostart': ParameterValue(LaunchConfiguration('autostart'), value_type=bool),
             }]),
    ])
