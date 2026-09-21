import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node



def generate_launch_description():
    package_name='auv_controls'

    gz_bridge_params = os.path.join(get_package_share_directory(package_name), "config", "gz_bridge.yaml")

    rsp = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory(package_name),'launch','rsp.launch.py'
        )]), launch_arguments={'use_sim_time': 'true'}.items()
    )

    dave = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('dave_demos'), 'launch', 'dave_world.launch.py')]),
            launch_arguments={'world_name': 'dave_ocean_waves'}.items()
    )

    spawn_entity = Node(package='ros_gz_sim', executable='create',
        arguments=['-topic', 'robot_description',
            '-name', 'bot_name'],
        output='screen') 

    ros_gz_bridge_node = Node(package="ros_gz_bridge", executable="parameter_bridge", 
        arguments=['--ros-args', '-p', f'config_file:={gz_bridge_params}']
    )   
    
    pose_republisher = Node(package=package_name, executable="odoRepub")

    # pid_spawner = Node(package="controller_manager", executable="spawner", arguments=["slider_pid_controller"])

    # Launch them all!
    return LaunchDescription([
        rsp,        
        dave,     
        spawn_entity,
        ros_gz_bridge_node,
        pose_republisher,
    ])