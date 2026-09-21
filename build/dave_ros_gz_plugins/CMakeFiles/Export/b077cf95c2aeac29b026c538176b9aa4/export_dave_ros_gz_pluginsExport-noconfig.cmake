#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dave_ros_gz_plugins::SphericalCoords" for configuration ""
set_property(TARGET dave_ros_gz_plugins::SphericalCoords APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(dave_ros_gz_plugins::SphericalCoords PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libSphericalCoords.so"
  IMPORTED_SONAME_NOCONFIG "libSphericalCoords.so"
  )

list(APPEND _cmake_import_check_targets dave_ros_gz_plugins::SphericalCoords )
list(APPEND _cmake_import_check_files_for_dave_ros_gz_plugins::SphericalCoords "${_IMPORT_PREFIX}/lib/libSphericalCoords.so" )

# Import target "dave_ros_gz_plugins::OceanCurrentPlugin" for configuration ""
set_property(TARGET dave_ros_gz_plugins::OceanCurrentPlugin APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(dave_ros_gz_plugins::OceanCurrentPlugin PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libOceanCurrentPlugin.so"
  IMPORTED_SONAME_NOCONFIG "libOceanCurrentPlugin.so"
  )

list(APPEND _cmake_import_check_targets dave_ros_gz_plugins::OceanCurrentPlugin )
list(APPEND _cmake_import_check_files_for_dave_ros_gz_plugins::OceanCurrentPlugin "${_IMPORT_PREFIX}/lib/libOceanCurrentPlugin.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
