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

Follow the [DAVE native installation manual](https://dave-ros2.notion.site/Native-Local-Installation-Manual-7c6d7be83a4947d28ae3e3eb6b7de5ee) for the Ubuntu host dependencies. When the manual reaches **Get source codes**, initialize this repository's DAVE submodule at the recorded commit, `d2121a5b4457361e60106aaa029b0a448977d70e`, instead of cloning DAVE's moving development branch:

```bash
cd ~/HornetXII_mono
git submodule update --init --recursive --checkout
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

colcon build --symlink-install \
  --cmake-args -DPython_EXECUTABLE=/usr/bin/python3 -DPython3_EXECUTABLE=/usr/bin/python3

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
BlueROV starts at `(-24.4, 0, -0.65)` and the qualification gate opening center
at `(-15, 0, -0.55)`, 10 m from the shallow wall. The collision-enabled gate
has a 1.5 m clear width and approximately 1 m hanging depth. This is a
qualification practice layout; main-arena tasks are not implemented here.
The six `auv_controls/thrusterN/cmd_thrust` ROS topics accept thrust commands
in newtons. This launch uses direct ROS control without ArduSub SITL or the
single-thruster test PID controller. Odometry, IMU, joint states, and camera
data are bridged from Gazebo to ROS.

For the qualification mission, keep that simulation running and launch
`ros2 launch auv_navigation qualification.launch.py` in another sourced
terminal. Then call `/waypoint_executor/start` as shown in the
[navigation guide](src/navigation/README.md). The qualification launch starts
its own PID controller; stop standalone controllers and teleop first.

The pool uses Singapore Polytechnic inspired pale ceramic tiles and navy lane
markings. Tile sizes and marking spacing are visual estimates; photographic
sources, assumptions, and asset regeneration instructions are in
[`REFERENCES.md`](src/simulation/sauvc_world/models/pool/REFERENCES.md).
