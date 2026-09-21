# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_multibeam_sonar_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED multibeam_sonar_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(multibeam_sonar_FOUND FALSE)
  elseif(NOT multibeam_sonar_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(multibeam_sonar_FOUND FALSE)
  endif()
  return()
endif()
set(_multibeam_sonar_CONFIG_INCLUDED TRUE)

# output package information
if(NOT multibeam_sonar_FIND_QUIETLY)
  message(STATUS "Found multibeam_sonar: 0.0.1 (${multibeam_sonar_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'multibeam_sonar' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT multibeam_sonar_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(multibeam_sonar_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${multibeam_sonar_DIR}/${_extra}")
endforeach()
