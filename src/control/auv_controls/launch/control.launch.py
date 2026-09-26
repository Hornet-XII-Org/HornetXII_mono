import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node



def generate_launch_description():
    package_name='auv_controls'

    pid_spawner = Node(package="controller_manager", executable="spawner", arguments=["slider_pid_controller"])

    # Launch them all!
    return LaunchDescription([        
        pid_spawner,
    ])