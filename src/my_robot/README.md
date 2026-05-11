# my_robot -- ROS 2 Jazzy + Gazebo Harmonic Simulation

A differential-drive mobile robot simulation package for ROS 2 Jazzy with
Gazebo Harmonic. The robot carries a front-facing camera and a 360-degree
2D LiDAR for perception, and uses the `DiffDrive` plugin for locomotion.

| ROS 2 Distro | Gazebo | Bridge | Tested On |
|--------------|--------|--------|-----------|
| Jazzy        | Harmonic | ros_gz  | Ubuntu 24.04 |

## Prerequisites

```bash
# Desktop install (recommended)
sudo apt install ros-jazzy-desktop

# Minimal: base + Gazebo packages
sudo apt install ros-jazzy-ros-base ros-jazzy-ros-gz ros-jazzy-xacro
```

Verify:

```bash
echo $ROS_DISTRO          # should print "jazzy"
gz sim --version          # should show Harmonic (8.x)
```

## Package structure

```
my_robot/
├── README.md
├── package.xml
├── setup.py
├── setup.cfg
├── launch/
│   └── sim.launch.py              # Main simulation launcher
├── urdf/
│   ├── my_robot.urdf.xacro         # Robot model (chassis + wheels + plugins)
│   ├── camera.xacro                # Front-facing RGB camera
│   └── lidar.xacro                 # 360-degree 2D LiDAR
├── worlds/
│   └── empty.sdf                   # Flat ground plane + directional light
├── resource/
│   └── my_robot                    # ament index marker
├── my_robot/
│   └── __init__.py
└── test/
```

## Quick reproduction guide

### 1. Clone and build

```bash
cd ~/ros2_ws/src                        # or wherever your workspace lives
# If starting fresh:
# mkdir -p ~/ros2_ws/src && cd ~/ros2_ws/src
# Copy the my_robot package into src/ or create your own

cd ~/ros2_ws
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install --packages-select my_robot
source install/setup.bash
```

### 2. Launch the simulation

```bash
ros2 launch my_robot sim.launch.py
```

This single command starts:

1. **Gazebo Sim** (Harmonic) with the `empty.sdf` world (ground plane + sun)
2. **Robot spawn** -- the URDF is processed from xacro and spawned at z=0.12 m
3. **robot_state_publisher** -- publishes `base_link → wheels → sensors` TF tree
4. **ros_gz_bridge** instances for:
   - `/cmd_vel` (ROS 2 -> Gz) -- differential drive commands
   - `/odom` (Gz -> ROS 2) -- odometry from DiffDrive plugin
   - `/tf` (Gz -> ROS 2) -- ground-truth pose
   - `/joint_states` (Gz -> ROS 2) -- joint positions/velocities
   - `/camera/image` (Gz -> ROS 2) -- front-facing RGB
   - `/lidar/scan` (Gz -> ROS 2) -- `sensor_msgs/LaserScan`

### 3. Verify everything works

```bash
# In a separate terminal, source the workspace:
source ~/ros2_ws/install/setup.bash

# Check topics
ros2 topic list

# Drive the robot (publish velocity commands)
ros2 topic pub /cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.5}, angular: {z: 0.2}}" -r 10

# View odometry
ros2 topic echo /odom

# Watch the TF tree
ros2 run tf2_tools view_frames

# View camera images in rviz2 or rqt
ros2 run rqt_image_view rqt_image_view /camera/image

# Check LiDAR data
ros2 topic echo /lidar/scan --once
```

To stop: `Ctrl+C` in the launch terminal. Gazebo and all nodes shut down cleanly.

### 4. Visualizing in RViz2

```bash
rviz2
```

Set `Fixed Frame` to `my_robot/odom`, then add displays:
- `RobotModel` (reads `/robot_description`)
- `TF` (reads the TF tree)
- `Image` > topic: `/camera/image`
- `LaserScan` > topic: `/lidar/scan`

## Robot model overview

```
  ○──── front_caster ────○
  │         chassis       │
  │  [camera]───[LiDAR]───│
  │       base_link       │
  │ left_wheel  right_wheel│
  ○──────── rear_caster ──○

  TF: odom → base_link → {left_wheel, right_wheel, camera_link, laser_link}
```

| Component | Type | Topic |
|-----------|------|-------|
| DiffDrive plugin | `ignition::gazebo::systems::DiffDrive` | `/cmd_vel` (in), odom (out) |
| JointStatePublisher | `gz::sim::systems::JointStatePublisher` | `/joint_states` |
| Sensors system | `gz::sim::systems::Sensors` | manages all sensors |
| RGB camera | `camera` sensor, 640x480, 30 Hz | `/camera/image` |
| 2D LiDAR | `gpu_lidar` sensor, 360 samples, 20 Hz | `/lidar/scan` |
| Front caster | `continuous` joint, low friction | N/A |
| Rear caster | `continuous` joint, low friction | N/A |

## Common issues

| Symptom | Cause | Fix |
|---------|-------|-----|
| `gz sim` not found | Gazebo not installed | `sudo apt install ros-jazzy-ros-gz` |
| `ros2 launch` can't find package | Workspace not sourced | `source install/setup.bash` |
| Robot does not appear in Gazebo | xacro processing failed or spawn timeout too short | Check xacro syntax; verify `tmp_urdf` file was written |
| `/cmd_vel` publishing has no effect | Bridge not running or topic mismatch | Check bridge output for errors; verify `gz topic -l` |
| No camera/lidar data in ROS 2 | Bridge missing sensor entries, or `Sensors` plugin not loaded | Confirm `gz-sim-sensors-system` plugin in URDF; check `gz topic -l` |
| TF tree missing `odom` frame | DiffDrive odometry not publishing | Verify `libignition-gazebo-diff-drive-system.so` plugin is loaded |
| `rviz2` cannot find LiDAR frame | LiDAR TF is scoped under `base_link` but Gazebo publishes flat name | The `lidar_tf` static transform in the launch file corrects this |
| Real-time factor too slow | Physics step too small or rendering too heavy | Increase `max_step_size` (not above 0.002) or run headless with `gz sim -s` |

## Running headless (no GUI)

```bash
# Launch Gazebo in server mode first
gz sim -s -r $(ros2 pkg prefix my_robot)/share/my_robot/worlds/empty.sdf &
# Wait a moment, then launch the rest
ros2 launch my_robot sim.launch.py
```

Useful for CI, Docker, or remote machines.

## Next steps

- Add `ros2_control` controllers via `gz_ros2_control/GazeboSimSystem` for more
  realistic motor modeling
- Integrate Nav2 for autonomous navigation using the LiDAR and odometry
- Add IMU and depth camera sensors for visual SLAM
- Set up `launch_testing` integration tests (see `references/testing.md` in the
  ros2-engineering-skills)
- Run domain randomization for sim-to-real transfer
