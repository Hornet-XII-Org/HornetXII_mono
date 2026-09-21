# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target dave_interfaces::dave_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${dave_interfaces_TARGETS}.
if(dave_interfaces_TARGETS AND NOT TARGET dave_interfaces::dave_interfaces)
  add_library(dave_interfaces::dave_interfaces INTERFACE IMPORTED)
  set_target_properties(dave_interfaces::dave_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${dave_interfaces_TARGETS}")
endif()
