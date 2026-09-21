#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dave_gz_world_plugins::OceanCurrentWorldPlugin" for configuration ""
set_property(TARGET dave_gz_world_plugins::OceanCurrentWorldPlugin APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(dave_gz_world_plugins::OceanCurrentWorldPlugin PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libOceanCurrentWorldPlugin.so"
  IMPORTED_SONAME_NOCONFIG "libOceanCurrentWorldPlugin.so"
  )

list(APPEND _cmake_import_check_targets dave_gz_world_plugins::OceanCurrentWorldPlugin )
list(APPEND _cmake_import_check_files_for_dave_gz_world_plugins::OceanCurrentWorldPlugin "${_IMPORT_PREFIX}/lib/libOceanCurrentWorldPlugin.so" )

# Import target "dave_gz_world_plugins::gauss_markov_process" for configuration ""
set_property(TARGET dave_gz_world_plugins::gauss_markov_process APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(dave_gz_world_plugins::gauss_markov_process PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgauss_markov_process.so"
  IMPORTED_SONAME_NOCONFIG "libgauss_markov_process.so"
  )

list(APPEND _cmake_import_check_targets dave_gz_world_plugins::gauss_markov_process )
list(APPEND _cmake_import_check_files_for_dave_gz_world_plugins::gauss_markov_process "${_IMPORT_PREFIX}/lib/libgauss_markov_process.so" )

# Import target "dave_gz_world_plugins::tidal_oscillation" for configuration ""
set_property(TARGET dave_gz_world_plugins::tidal_oscillation APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(dave_gz_world_plugins::tidal_oscillation PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtidal_oscillation.so"
  IMPORTED_SONAME_NOCONFIG "libtidal_oscillation.so"
  )

list(APPEND _cmake_import_check_targets dave_gz_world_plugins::tidal_oscillation )
list(APPEND _cmake_import_check_files_for_dave_gz_world_plugins::tidal_oscillation "${_IMPORT_PREFIX}/lib/libtidal_oscillation.so" )

# Import target "dave_gz_world_plugins::dave_gz_world_plugins-msgs" for configuration ""
set_property(TARGET dave_gz_world_plugins::dave_gz_world_plugins-msgs APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(dave_gz_world_plugins::dave_gz_world_plugins-msgs PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdave_gz_world_plugins-msgs.so.VERSION"
  IMPORTED_SONAME_NOCONFIG "libdave_gz_world_plugins-msgs.so.VERSION"
  )

list(APPEND _cmake_import_check_targets dave_gz_world_plugins::dave_gz_world_plugins-msgs )
list(APPEND _cmake_import_check_files_for_dave_gz_world_plugins::dave_gz_world_plugins-msgs "${_IMPORT_PREFIX}/lib/libdave_gz_world_plugins-msgs.so.VERSION" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
