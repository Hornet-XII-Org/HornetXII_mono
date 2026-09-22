currently this package contains control for a single DOF thruster robot controlled via pid with ros2_control,
you can do the following
```
ros2 launch auv_sim test_sim.launch.py
ros2 run controller_manager spawner pid_controller
```

and control the pid reference via
```
ros2 topic pub /pid_controller/reference control_msgs/msg/MultiDOFCommand "{dof_names: ['thruster_joint'], values: [2.0]}"
```

auv_sims contain a hardware interface that pid_controller outputs to, which just republishes the controlled effort to auv_controls/thruster/cmd_thrust, which gazebo uses
as thrust command. Feel free to edit and use yah

also, pose_republisher in auv_sims republishes the pose data from gazebo to act as measured state for the controller. 