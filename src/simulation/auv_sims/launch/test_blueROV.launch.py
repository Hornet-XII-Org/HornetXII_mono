import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    package_name='auv_sims'


    dave = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('dave_demos'), 'launch', 'dave_world.launch.py')]),
            launch_arguments={'world_name': 'dave_ocean_waves'}.items()
    )

    robot_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [
                PathJoinSubstitution(
                    [
                        FindPackageShare("dave_robot_models"),
                        "launch",
                        "upload_robot.launch.py",
                    ]
                )
            ]
        ),
        launch_arguments={
            "gui": "gui",
            "use_sim_time": "true",
            "namespace": "bluerov2",
            "use_ned_frame": "true",   
            "use_teleop" : "false",
            # "x": "10",
            "use_web_joystick" : "false"         
        }.items(),
    ) 
    
    gz_bridge_params = os.path.join(get_package_share_directory(package_name), "config", "gz_bridge.yaml")
    ros_gz_bridge_node = Node(package="ros_gz_bridge", executable="parameter_bridge", 
        arguments=['--ros-args', '-p', f'config_file:={gz_bridge_params}']
    )

    # Launch them all!
    return LaunchDescription([
        dave,     
        robot_launch,
        ros_gz_bridge_node,            
    ])