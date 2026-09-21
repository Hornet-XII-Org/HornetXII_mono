// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dave_interfaces:msg/StratifiedCurrentVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/stratified_current_velocity.h"


#ifndef DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_VELOCITY__STRUCT_H_
#define DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'depths'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'velocities'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/StratifiedCurrentVelocity in the package dave_interfaces.
/**
  * Publishes depths and velocities based on the database contents
 */
typedef struct dave_interfaces__msg__StratifiedCurrentVelocity
{
  std_msgs__msg__Header header;
  /// Depths
  rosidl_runtime_c__float__Sequence depths;
  /// Velocities
  geometry_msgs__msg__Vector3__Sequence velocities;
} dave_interfaces__msg__StratifiedCurrentVelocity;

// Struct for a sequence of dave_interfaces__msg__StratifiedCurrentVelocity.
typedef struct dave_interfaces__msg__StratifiedCurrentVelocity__Sequence
{
  dave_interfaces__msg__StratifiedCurrentVelocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dave_interfaces__msg__StratifiedCurrentVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_VELOCITY__STRUCT_H_
