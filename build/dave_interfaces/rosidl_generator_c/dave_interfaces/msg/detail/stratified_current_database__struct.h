// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dave_interfaces:msg/StratifiedCurrentDatabase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/stratified_current_database.h"


#ifndef DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_DATABASE__STRUCT_H_
#define DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_DATABASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'depths'
// Member 'time_gmt_year'
// Member 'time_gmt_month'
// Member 'time_gmt_day'
// Member 'time_gmt_hour'
// Member 'time_gmt_minute'
// Member 'tidevelocities'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'velocities'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/StratifiedCurrentDatabase in the package dave_interfaces.
/**
  * Publishes depths and velocities read from the csv database
 */
typedef struct dave_interfaces__msg__StratifiedCurrentDatabase
{
  /// Depths
  rosidl_runtime_c__float__Sequence depths;
  /// Velocities
  geometry_msgs__msg__Vector3__Sequence velocities;
  /// Tide time (GMT)
  rosidl_runtime_c__int16__Sequence time_gmt_year;
  rosidl_runtime_c__int16__Sequence time_gmt_month;
  rosidl_runtime_c__int16__Sequence time_gmt_day;
  rosidl_runtime_c__int16__Sequence time_gmt_hour;
  rosidl_runtime_c__int16__Sequence time_gmt_minute;
  /// Tide velocities
  rosidl_runtime_c__float__Sequence tidevelocities;
  /// Tide constituents
  bool tideconstituents;
  float m2_amp;
  float m2_phase;
  float m2_speed;
  float s2_amp;
  float s2_phase;
  float s2_speed;
  float n2_amp;
  float n2_phase;
  float n2_speed;
  /// Tide direction
  float ebb_direction;
  float flood_direction;
  /// World start time (GMT)
  int16_t world_start_time_year;
  int16_t world_start_time_month;
  int16_t world_start_time_day;
  int16_t world_start_time_hour;
  int16_t world_start_time_minute;
} dave_interfaces__msg__StratifiedCurrentDatabase;

// Struct for a sequence of dave_interfaces__msg__StratifiedCurrentDatabase.
typedef struct dave_interfaces__msg__StratifiedCurrentDatabase__Sequence
{
  dave_interfaces__msg__StratifiedCurrentDatabase * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dave_interfaces__msg__StratifiedCurrentDatabase__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_DATABASE__STRUCT_H_
