# Topic based
Currently has a node called `PIDController`, that controls a BlueROV2. (No z axis yet! will add it soon, but if you want to yourself, feel free to do so). It reads in a reference position at `/reference`, calculates the displacement vector wrt the AUV yaw. This vector is fed into indivdual PIDs, before being combined into an effort vector. Individual effort is calculated via the TAM pseudo inverse matrix. Also, PID values aren't tuned yet!!

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
for Fx, Fy and Myaw. There definitely is some sign issue somewhere :)

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