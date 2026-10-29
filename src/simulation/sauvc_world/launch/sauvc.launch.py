import os
import xml.etree.ElementTree as ET

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import AppendEnvironmentVariable, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node


def generate_launch_description():
    pkg = get_package_share_directory("sauvc_world")
    sim_share = get_package_share_directory("auv_sims")
    dave_share = get_package_share_directory('dave_demos')

    world = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            dave_share, 'launch', 'dave_world.launch.py')),
        launch_arguments={'world_name': 'dave_ocean_waves'}.items(),
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
            '/model/bluerov2/camera/left@sensor_msgs/msg/Image[gz.msgs.Image',
            '/model/bluerov2/camera/right@sensor_msgs/msg/Image[gz.msgs.Image',
            '/model/bluerov2/camera/down@sensor_msgs/msg/Image[gz.msgs.Image',
        ],
        output='screen',
    )

    spawn_robot = Node(
        package="ros_gz_sim",
        executable="create",
        arguments=[
            "-world", "oceans_waves",
            "-file", os.path.join(pkg, "models", "robot", "model.sdf"),
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
        world,
        thruster_bridge,
        state_bridge,
        spawn_robot,
        spawn_gate,
        spawn_pool,
    ])
