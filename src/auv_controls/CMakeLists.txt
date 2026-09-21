cmake_minimum_required(VERSION 3.8)
project(auv_controls)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

find_package(gz_ros2_control REQUIRED)
find_package(gz_sim_vendor REQUIRED)
find_package(gz-sim REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(control_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

# thruster hardware interfaces
add_library(thruster_dave_hardware_interface SHARED
  src/thruster_dave_hardware_interface.cpp
)

target_include_directories(thruster_dave_hardware_interface PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

ament_target_dependencies(thruster_dave_hardware_interface
  gz_ros2_control
  hardware_interface
  pluginlib
  rclcpp
  std_msgs
)

target_link_libraries(thruster_dave_hardware_interface
  gz_ros2_control::gz_ros2_control-system
  gz-sim::gz-sim
)

install(
  TARGETS thruster_dave_hardware_interface
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(
  DIRECTORY config description launch
  DESTINATION share/${PROJECT_NAME}
)

pluginlib_export_plugin_description_file(
  gz_ros2_control
  thruster_dave_hardware_interface.xml
)

# Pose republisher
add_executable(odoRepub src/odo_republisher.cpp)
ament_target_dependencies(odoRepub rclcpp control_msgs geometry_msgs)

install(TARGETS
  odoRepub
  DESTINATION lib/${PROJECT_NAME}
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
