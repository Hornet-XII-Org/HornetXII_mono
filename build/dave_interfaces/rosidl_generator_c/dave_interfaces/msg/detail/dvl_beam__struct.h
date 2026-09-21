// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dave_interfaces:msg/DVLBeam.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/dvl_beam.h"


#ifndef DAVE_INTERFACES__MSG__DETAIL__DVL_BEAM__STRUCT_H_
#define DAVE_INTERFACES__MSG__DETAIL__DVL_BEAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'reference'
#include "rosidl_runtime_c/string.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"

/// Struct defined in msg/DVLBeam in the package dave_interfaces.
typedef struct dave_interfaces__msg__DVLBeam
{
  int64_t id;
  rosidl_runtime_c__String reference;
  double range;
  bool locked;
  geometry_msgs__msg__TwistWithCovariance velocity;
} dave_interfaces__msg__DVLBeam;

// Struct for a sequence of dave_interfaces__msg__DVLBeam.
typedef struct dave_interfaces__msg__DVLBeam__Sequence
{
  dave_interfaces__msg__DVLBeam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dave_interfaces__msg__DVLBeam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAVE_INTERFACES__MSG__DETAIL__DVL_BEAM__STRUCT_H_
