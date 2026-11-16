# Topic based
`PIDController` controls BlueROV position X/Y/Z and yaw from pose targets on
`/reference` and odometry on `/model/bluerov2/odometry`. It rotates horizontal
position errors into body axes and allocates effort to six thrusters.

The controller limits each final thruster command to `max_thruster_force`.
Reference-mode odometry loss zeros thrust after `state_timeout` (default 0.5 s).
`reference_timeout` defaults to zero for legacy pose publishers; set a positive
value to require a pose-reference heartbeat. Optional `command_timeout` applies
to direct keyboard commands and defaults to zero for compatibility.
`use_velocity_derivative` enables measured-velocity derivative damping, and
`heave_feedforward` adds a vertical force in newtons. Both default to disabled
or zero and require tuning for the vehicle.

To test, first launch the sim with the blueROV
```
ros2 launch auv_sims test_blueROV.launch.py
```
Then, start the controller via
```
ros2 run auv_controls PIDController
```
and finally, set the target(reference) position with
```
ros2 topic pub /reference geometry_msgs/msg/Pose "{position: {x: 1.0, y: 1.0, z: 0.0}, orientation: {x: 0.0, y: 0.0, z: 0.0, w: 1.0}}"
```
This should work for any x, y and yaw(needs to be converted to a quaternion first). Original TAM is built with reference to [this image](https://www.researchgate.net/figure/Thruster-configuration-of-the-BlueROV2-vehicle-Top-view-left-Front-view-right_fig3_366613202) and the model.sdf file. The pseudo inverse is calculated from [this website](https://www.emathhelp.net/calculators/linear-algebra/pseudoinverse-calculator/). There are better optimizations for this(like accounting for acutuator limits) but I have yet to implemement. For reference, the TAM i came up with is:
```
[-0.707107, -0.707107,  0.707107,  0.707107]
[ 0.707107, -0.707107,  0.707107, -0.707107]
[0.16405,   -0.16405,  -0.16405,   0.16405 ]
```
for Fx, Fy and Myaw. This is the historical allocation sketch; verify frame
and joint-axis conventions whenever the vehicle model changes.

# Ros2_control based
you can do the following
```
ros2 launch auv_sims test_sim.launch.py
ros2 run controller_manager spawner pid_controller
```

and control the pid reference via
```
ros2 topic pub /pid_controller/reference control_msgs/msg/MultiDOFCommand "{dof_names: ['thruster_joint'], values: [2.0]}"
```

auv_sims contains a hardware interface that pid_controller outputs to, which just republishes the controlled effort to auv_controls/thruster/cmd_thrust, which gazebo uses
as thrust command. Feel free to edit and use yah

also, pose_republisher in auv_sims republishes the pose data from gazebo to act as measured state for the controller.
