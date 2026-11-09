import os
import xml.etree.ElementTree as ET

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (AppendEnvironmentVariable, DeclareLaunchArgument, IncludeLaunchDescription, OpaqueFunction)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def launch_setup(context):
    mode = LaunchConfiguration('mode').perform(context)
    pkg = get_package_share_directory("sauvc_world")
    sim_share = get_package_share_directory("auv_sims")
    ros_gz_sim_share = get_package_share_directory('ros_gz_sim')

    world = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            ros_gz_sim_share, 'launch', 'gz_sim.launch.py')),
        launch_arguments={
            'gz_args': '-r ' + os.path.join(pkg, 'worlds', 'sauvc_pool.world'),
        }.items(),
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
            '/model/bluerov2/camera/left/image@sensor_msgs/msg/Image[gz.msgs.Image',
            '/model/bluerov2/camera/right/image@sensor_msgs/msg/Image[gz.msgs.Image',
            '/model/bluerov2/camera/down@sensor_msgs/msg/Image[gz.msgs.Image',
            '/model/bluerov2/camera/left/camera_info@sensor_msgs/msg/CameraInfo[gz.msgs.CameraInfo',
            '/model/bluerov2/camera/right/camera_info@sensor_msgs/msg/CameraInfo[gz.msgs.CameraInfo',
            '/model/bluerov2/camera/down/camera_info@sensor_msgs/msg/CameraInfo[gz.msgs.CameraInfo',
        ],
        output='screen',
    )

    if mode == 'qualification':
        # Qualification start line: 1 m wide section of the shallow short wall,
        # AUV faces +x along the 50 m axis toward the gate.
        robot_pose = ("-24.4", "0", "-0.65", "0")
    else:
        # Finals start zone (140 x 140 cm) on the south long wall of the deep
        # section; AUV faces +y (across the swimming lanes).
        robot_pose = ("10.5", "-11.8", "-0.65", "1.5707963")

    spawn_robot = Node(
        package="ros_gz_sim",
        executable="create",
        arguments=[
            "-world", "oceans_waves",
            "-file", os.path.join(pkg, "models", "robot", "model.sdf"),
            "-name", "sauvc_robot",
            "-x", robot_pose[0],
            "-y", robot_pose[1],
            "-z", robot_pose[2],
            "-Y", robot_pose[3],
        ],
        output='screen',
    )

    # SAUVC finals layout for the Singapore Polytechnic pool (50 x 25 m).
    # Sources: official SAUVC 2025 arena diagram (positions) and the SAUVC 2027
    # rulebook v2027.3.2 of 2026-10-30 (object sizes; sauvc.org/rulebook). The diagram is "not to scale" and the rules let
    # the gate / flares / drum order vary, so these are representative, not
    # exact. Coordinates: x along the 50 m axis (shallow wall x=-25), y across
    # (south wall y=-12.5, north wall y=+12.5). z is the BASE of each object;
    # the deep-section floor top is z=-2.0.
    #   - gate: 150 x 150 cm on the floor, ~12 m from the start wall
    #   - orange flare: 4-8 m from the start wall, before the gate
    #   - target zone: 8 x 2 m green mat near the north wall, 4 drums on it
    #   - communication flares: anywhere in the main arena
    finals_objects = [
        # (model dir, entity name, x, y, z, yaw)
        ('gate',         'sauvc_gate',    8.0,  -0.5, -2.00, 1.5707963),
        ('flare_orange', 'flare_orange',  7.5,  -6.5, -2.00, 1.5707963),
        ('target_mat',   'target_mat',    6.0,  10.0, -1.99, 0.0),  # top of mat 1 cm above floor
        ('drum_blue',    'drum_blue',     3.0,  10.0, -1.99, 0.0),
        ('drum_red',     'drum_red_1',    5.0,  10.0, -1.99, 0.0),
        ('drum_red',     'drum_red_2',    7.0,  10.0, -1.99, 0.0),
        ('drum_red',     'drum_red_3',    9.0,  10.0, -1.99, 0.0),
        ('flare_yellow', 'flare_yellow', 21.0,   6.5, -2.00, 0.0),
        ('flare_red',    'flare_red',    20.5,   4.5, -2.00, 0.0),
        ('flare_blue',   'flare_blue',   20.0,   2.5, -2.00, 0.0),
    ]
    # Qualification: the only prop is one gate hanging from the surface
    # (two orange posts ~100 cm long + white top bar at the surface, 150 cm
    # wide), ~10 m from the start line. z is the bottom of the posts, so their
    # tops are at the water surface (z=0).
    qualification_objects = [
        # (model dir, entity name, x, y, z, yaw)
        ('qualification_gate', 'qualification_gate', -14.4, 0.0, -1.0, 0.0),
    ]
    field_objects = (qualification_objects if mode == 'qualification'
                     else finals_objects)
    spawn_field = [
        Node(
            package="ros_gz_sim",
            executable="create",
            arguments=[
                "-world", "oceans_waves",
                "-file", os.path.join(pkg, "models", model, "model.sdf"),
                "-name", name,
                "-x", str(x), "-y", str(y), "-z", str(z), "-Y", str(yaw),
            ],
            output="screen",
        )
        for model, name, x, y, z, yaw in field_objects
    ]

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

    return [
        AppendEnvironmentVariable(
            'GZ_SIM_RESOURCE_PATH', os.path.join(pkg, 'models')),
        world,
        thruster_bridge,
        state_bridge,
        spawn_robot,
        *spawn_field,
        spawn_pool,
    ]


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'mode', default_value='finals',
            description="Course layout: 'finals' or 'qualification'"),
        OpaqueFunction(function=launch_setup),
    ])