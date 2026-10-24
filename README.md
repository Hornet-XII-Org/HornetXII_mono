# HornetXII monorepo

This repo holds all the modules for the HornetXII AUV, running on the Jetson Orin + Ubuntu 24.04 + ROS 2 Jazzy.

## Modules

```
bringup - deployment and launch-related code for AUV
common - shared code between modules, e.g. custom message types, shared libraries
comms - comms-related packages, e.g. CAN driver, SocketCAN dependencies
control - control-related packages, e.g. thruster control, actuator control
navigation - navigation-related packages, e.g. path planner, mission-related code
pnl - perception and localization-related packages, e.g. filter, pose estimation, VIO
```

## Getting started

Ubuntu 24.04 with ROS 2 Jazzy and Gazebo Harmonic is the reference development environment. Commands in this section assume that ROS 2 Jazzy is already installed.

### Install DAVE and workspace dependencies

Follow the [DAVE native installation manual](https://dave-ros2.notion.site/Native-Local-Installation-Manual-7c6d7be83a4947d28ae3e3eb6b7de5ee) for the Ubuntu host dependencies. When the manual reaches **Get source codes**, clone DAVE directly into this workspace and pin the last revision currently used by HornetXII instead of checking out DAVE's moving development branch:

```bash
cd ~/HornetXII_mono

# Skip the clone command if src/dave already exists.
git clone https://github.com/IOES-Lab/dave.git src/dave
git -C src/dave checkout d2121a5b4457361e60106aaa029b0a448977d70e
```

Continue the DAVE manual after its source-code step, using `~/HornetXII_mono` as the ROS workspace. Then install dependencies declared by all packages in this workspace:

```bash
cd ~/HornetXII_mono

source /opt/ros/jazzy/setup.bash

# Run `sudo rosdep init` once per machine if rosdep is not initialized yet.
rosdep update
rosdep install --from-paths src --ignore-src --rosdistro jazzy -r -y

# This runtime controller is not yet declared by a workspace package.
sudo apt install ros-jazzy-pid-controller
```

The pinned DAVE revision is intentional: newer DAVE development has moved beyond this repo's tested ROS 2 Jazzy setup. DAVE's full installation script is intended for Ubuntu 24.04 and installs substantially more than this workspace's basic simulation needs.

### Build

Always run `colcon` from the repository root. This places `build/`, `install/`, and `log/` next to `src/`.

The following command deliberately uses Ubuntu's system Python. Use it even if Conda is your default Python, because ROS 2 Jazzy's Ubuntu packages are built for `/usr/bin/python3`:

```bash
cd ~/HornetXII_mono
source /opt/ros/jazzy/setup.bash

colcon build --symlink-install

source install/setup.bash
```

`--cmake-clean-cache` is useful for the first build and after packages are moved. It may be omitted for normal incremental builds.

Every new terminal must source both environments before using the workspace:

```bash
source /opt/ros/jazzy/setup.bash
source ~/HornetXII_mono/install/setup.bash
```

### Run the basic simulation

Start the DAVE world and spawn the test vehicle:

```bash
ros2 launch auv_sims test_sim.launch.py
```

In another sourced terminal, start the current thruster controller:

```bash
ros2 run controller_manager spawner pid_controller
```

Gazebo may take longer on its first run while it downloads Fuel models.

### Run BlueROV with the pool and gate

After sourcing both environments, run:

```bash
ros2 launch sauvc_world sauvc.launch.py
```

This starts the ocean world, six-thruster BlueROV, pool walls and floor, and
orange gate. The pool interior is 50 × 25 m, with 1.28 m shallow and 2.00 m
deep sections joined by a slope. Eight swimming-lane markings run along X.
BlueROV starts at `(-24.4, 0, -0.65)` and the gate at `(-15, 0, -0.75)`,
10 m from the shallow wall. This is a provisional qualification practice layout;
the 2027 course allocation is not yet confirmed.
The six `auv_controls/thrusterN/cmd_thrust` ROS topics accept thrust commands
in newtons. This launch uses direct ROS control without ArduSub SITL or the
single-thruster test PID controller. Odometry, IMU, joint states, and camera
data are bridged from Gazebo to ROS.

The pool uses Singapore Polytechnic inspired pale ceramic tiles and navy lane
markings. Tile sizes and marking spacing are visual estimates; photographic
sources, assumptions, and asset regeneration instructions are in
[`REFERENCES.md`](src/simulation/sauvc_world/models/pool/REFERENCES.md).
