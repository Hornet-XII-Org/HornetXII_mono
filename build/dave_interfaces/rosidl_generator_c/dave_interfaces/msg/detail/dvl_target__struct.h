// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dave_interfaces:msg/DVLTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/dvl_target.h"


#ifndef DAVE_INTERFACES__MSG__DETAIL__DVL_TARGET__STRUCT_H_
#define DAVE_INTERFACES__MSG__DETAIL__DVL_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DVLTarget in the package dave_interfaces.
typedef struct dave_interfaces__msg__DVLTarget
{
  rosidl_runtime_c__String type;
  double range;
} dave_interfaces__msg__DVLTarget;

// Struct for a sequence of dave_interfaces__msg__DVLTarget.
typedef struct dave_interfaces__msg__DVLTarget__Sequence
{
  dave_interfaces__msg__DVLTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dave_interfaces__msg__DVLTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAVE_INTERFACES__MSG__DETAIL__DVL_TARGET__STRUCT_H_
