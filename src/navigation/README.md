# Navigation and mission control

`auv_navigation` executes pose waypoints and an initial SAUVC qualification
mission using Gazebo ground-truth odometry. P&L sensor processing stays separate.

## Qualification practice

These instructions use standard ROS 2 commands with Ubuntu 24.04, ROS 2
Jazzy and Gazebo Harmonic. Existing users can keep their native ROS
installation and normal workspace; no aliases or shell changes are required.

For an existing native workspace, build from the repository root:

```bash
cd ~/HornetXII_mono
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install --packages-up-to auv_navigation sauvc_world \
  --cmake-args -DPython_EXECUTABLE=/usr/bin/python3 -DPython3_EXECUTABLE=/usr/bin/python3
source install/setup.bash
```

`--packages-up-to` includes the workspace dependencies needed by navigation
and the pool simulation. This assumes the native dependencies from the root
README are already installed. In every additional native ROS terminal, source
`/opt/ros/jazzy/setup.bash` and this workspace's `install/setup.bash`.

Stop previous simulator launches, ROS bridges, PID controllers and keyboard
teleop with Ctrl+C in their terminals. Start one fresh simulation to load the
updated gate and reset the vehicle:

```bash
ros2 launch sauvc_world sauvc.launch.py
```

In a second terminal, start navigation and its PID controller. This does not
start another Gazebo and waits for an explicit mission start:

```bash
ros2 launch auv_navigation qualification.launch.py
```

Start, inspect or cancel from another terminal:

```bash
ros2 service call /waypoint_executor/start std_srvs/srv/Trigger '{}'
ros2 topic echo /navigation/status
ros2 service call /waypoint_executor/cancel std_srvs/srv/Trigger '{}'
```

For automatic start, add `autostart:=true` to the qualification launch. This
launch starts a controller; do not also start a standalone PIDController.

## Behavior

The states are DIVE, ALIGN, APPROACH, CROSS_OUT, U_TURN and CROSS_BACK, then
COMPLETE. The vehicle holds the final pose underwater; it does not surface
or return into the starting wall. The turn is beyond the gate with room for
the conservative vehicle footprint.

The executor publishes gradual `geometry_msgs/Pose` targets on `/reference`.
Arrival requires position/yaw tolerances, low translation/yaw speed, and an
uninterrupted settling period. `/navigation/path` is a `nav_msgs/Path` of
mission endpoints, not a collision-checked global path. `/navigation/status`
is retained JSON in `std_msgs/String`: state, phase, waypoint index/count,
failure reason and input error.

The dedicated `auv_navigation/config/qualification.yaml` contains simulation
PID gains and disables `/cmd_vel` so teleop cannot modify autonomous targets.
The legacy controller profile remains separate. The existing `/moveTo` action
now checks heading and settling and handles cancellation; this executor uses
`/reference` directly and checks completion itself.

Cancel holds the last valid measured pose. Stale state stops references; the
controller watchdog zeros thrust. Stopping the executor expires its reference
heartbeat and zeros thrust. Pausing the simulator also trips the wall-time
watchdog: restart the mission explicitly after resuming. Failed missions do
not resume automatically. These software behaviors do not replace a physical
kill switch.

Exactly one odometry publisher is required. Duplicate bridges are rejected
even if both connect to one simulator. Check publisher count with
`ros2 topic info /model/bluerov2/odometry`.
The executor also requires exactly one controller publishing on the configured
`controller_command_topic` (default: the first BlueROV thruster command).

## Geometry and frames

The default scenario uses Gazebo world XYZ with Z up and frame ID `map`.
BlueROV starts at `(-24.4, 0, -0.65)`; the gate opening center is
`(-15, 0, -0.55)`. `gate_pose` is `[x, y, z, yaw]`, with yaw specifying the
forward normal. The qualification model has a 1.5 m inner width, 1.0 m hanging
posts, no bottom bar, and collisions matching the three visible bars.

The configurable full vehicle dimensions (0.6/0.5/0.4 m) and 0.1 m margin
provide a conservative gate-clearance check beyond the model's buoyancy box.
The XYZ practice envelope limits vehicle-center coordinates; it is not a full
pool contact detector or measured terrain map. Roll/pitch above 0.35 rad
invalidates state because the controller is planar plus depth. Repeated trials
and contact monitoring are still needed before claiming competition readiness.

Qualification has no separate orange-flare obstacle. General obstacle planning
is a later main-arena milestone. See the
[qualification rules](https://sauvc.org/rulebook/#qualification).

## Custom missions and P&L

Copy the qualification YAML to a local file, retain its `PIDController`
section, and change the executor section as needed:

```yaml
waypoint_executor:
  ros__parameters:
    mission: waypoints
    frame_id: map
    waypoints: [-23.0, 0.0, -0.55, 0.0, -22.0, 0.0, -0.55, 1.57]
```

Waypoints are flat groups of `[x, y, z, yaw]` (metres/radians). Launch with
`ros2 launch auv_navigation qualification.launch.py config:=/absolute/path/to/mission.yaml`.

The launch `state_topic` argument switches both executor and controller to
another `nav_msgs/Odometry` source. Its frame, origin, Z convention and clock
must match the configured gate/waypoints. Changing a topic/frame name does not
transform coordinates. This version does not subscribe to perception targets
or perform TF conversions. Agree gate geometry, confidence and acquisition
timestamp contracts with P&L before adding that adapter.

`start_controller:=false` supports an existing controller only when it already
uses reference mode, the same state topic and autonomous timeout settings.
Starting both nodes through this launch is the recommended practice workflow.

## Core tests

```bash
PYTEST_DISABLE_PLUGIN_AUTOLOAD=1 PYTHONPATH=src/navigation/auv_navigation \
  python3 -m pytest -q src/navigation/auv_navigation/test
```

Disabling plugin autoload isolates these pure Python tests from unrelated
ROS launch-testing plugins.

## Isolated physics checks

```bash
python3 scripts/navigation/check_qualification.py
python3 scripts/navigation/check_qualification.py --start -24.4 -0.25 -0.1 -0.2
python3 scripts/navigation/check_qualification.py --scenario cancel
python3 scripts/navigation/check_qualification.py --scenario stale-state
python3 scripts/navigation/check_qualification.py --scenario duplicate-state
```

Run these from the repository root with your ROS environment and workspace
sourced. The scripts use standard ROS/Gazebo executables.

Each command creates a separate headless Gazebo world, ROS domain and Gazebo
partition, then stops its own processes. It does not command your visible
simulator. The script prints its temporary output directory containing node
logs, `trajectory.csv` and `result.json`; `--output /absolute/path` chooses a
directory. The full robot physics and pool/gate collisions are retained, while
camera sensors and visuals are omitted so the check needs no GPU. This checks
controls and mission integration, not camera rendering, perception, or real
vehicle performance. Failure scenarios require cancellation or FAILED state;
lost/duplicate odometry must also result in zero commands on all six thrusters.

Local validation on 2026-11-16: the three changed ROS packages built; 16 core
tests passed; complete physics runs passed from an underwater offset start
and a near-surface start with different lateral/heading offsets. The latter
finished about 2 cm from its final target. Cancellation held position, and
the lost-state and duplicate-state checks produced FAILED with zero thrust.
Separate synthetic-state controller checks verified yaw-only goal waiting,
action success/cancellation, reference loss and odometry loss. These results
were obtained with ROS 2 Jazzy on an Ubuntu 26.04 development host and cover
this simulated BlueROV configuration, not real-water accuracy. The native
Ubuntu 24.04 commands above have not been rerun on a separate installation
for this change.
