// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dave_interfaces:msg/DVL.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/dvl.h"


#ifndef DAVE_INTERFACES__MSG__DETAIL__DVL__STRUCT_H_
#define DAVE_INTERFACES__MSG__DETAIL__DVL__STRUCT_H_

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
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'target'
#include "dave_interfaces/msg/detail/dvl_target__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"
// Member 'beams'
#include "dave_interfaces/msg/detail/dvl_beam__struct.h"

/// Struct defined in msg/DVL in the package dave_interfaces.
typedef struct dave_interfaces__msg__DVL
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String type;
  dave_interfaces__msg__DVLTarget target;
  geometry_msgs__msg__TwistWithCovariance velocity;
  dave_interfaces__msg__DVLBeam__Sequence beams;
} dave_interfaces__msg__DVL;

// Struct for a sequence of dave_interfaces__msg__DVL.
typedef struct dave_interfaces__msg__DVL__Sequence
{
  dave_interfaces__msg__DVL * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dave_interfaces__msg__DVL__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAVE_INTERFACES__MSG__DETAIL__DVL__STRUCT_H_
