// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dave_interfaces:msg/DVL.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dave_interfaces/msg/detail/dvl__rosidl_typesupport_introspection_c.h"
#include "dave_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dave_interfaces/msg/detail/dvl__functions.h"
#include "dave_interfaces/msg/detail/dvl__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `target`
#include "dave_interfaces/msg/dvl_target.h"
// Member `target`
#include "dave_interfaces/msg/detail/dvl_target__rosidl_typesupport_introspection_c.h"
// Member `velocity`
#include "geometry_msgs/msg/twist_with_covariance.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `beams`
#include "dave_interfaces/msg/dvl_beam.h"
// Member `beams`
#include "dave_interfaces/msg/detail/dvl_beam__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dave_interfaces__msg__DVL__init(message_memory);
}

void dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_fini_function(void * message_memory)
{
  dave_interfaces__msg__DVL__fini(message_memory);
}

size_t dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__size_function__DVL__beams(
  const void * untyped_member)
{
  const dave_interfaces__msg__DVLBeam__Sequence * member =
    (const dave_interfaces__msg__DVLBeam__Sequence *)(untyped_member);
  return member->size;
}

const void * dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__get_const_function__DVL__beams(
  const void * untyped_member, size_t index)
{
  const dave_interfaces__msg__DVLBeam__Sequence * member =
    (const dave_interfaces__msg__DVLBeam__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__get_function__DVL__beams(
  void * untyped_member, size_t index)
{
  dave_interfaces__msg__DVLBeam__Sequence * member =
    (dave_interfaces__msg__DVLBeam__Sequence *)(untyped_member);
  return &member->data[index];
}

void dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__fetch_function__DVL__beams(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dave_interfaces__msg__DVLBeam * item =
    ((const dave_interfaces__msg__DVLBeam *)
    dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__get_const_function__DVL__beams(untyped_member, index));
  dave_interfaces__msg__DVLBeam * value =
    (dave_interfaces__msg__DVLBeam *)(untyped_value);
  *value = *item;
}

void dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__assign_function__DVL__beams(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dave_interfaces__msg__DVLBeam * item =
    ((dave_interfaces__msg__DVLBeam *)
    dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__get_function__DVL__beams(untyped_member, index));
  const dave_interfaces__msg__DVLBeam * value =
    (const dave_interfaces__msg__DVLBeam *)(untyped_value);
  *item = *value;
}

bool dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__resize_function__DVL__beams(
  void * untyped_member, size_t size)
{
  dave_interfaces__msg__DVLBeam__Sequence * member =
    (dave_interfaces__msg__DVLBeam__Sequence *)(untyped_member);
  dave_interfaces__msg__DVLBeam__Sequence__fini(member);
  return dave_interfaces__msg__DVLBeam__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__DVL, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__DVL, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__DVL, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__DVL, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beams",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__DVL, beams),  // bytes offset in struct
    NULL,  // default value
    dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__size_function__DVL__beams,  // size() function pointer
    dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__get_const_function__DVL__beams,  // get_const(index) function pointer
    dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__get_function__DVL__beams,  // get(index) function pointer
    dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__fetch_function__DVL__beams,  // fetch(index, &value) function pointer
    dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__assign_function__DVL__beams,  // assign(index, value) function pointer
    dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__resize_function__DVL__beams  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_message_members = {
  "dave_interfaces__msg",  // message namespace
  "DVL",  // message name
  5,  // number of fields
  sizeof(dave_interfaces__msg__DVL),
  false,  // has_any_key_member_
  dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_message_member_array,  // message members
  dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_init_function,  // function to initialize message memory (memory has to be allocated)
  dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_message_type_support_handle = {
  0,
  &dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_message_members,
  get_message_typesupport_handle_function,
  &dave_interfaces__msg__DVL__get_type_hash,
  &dave_interfaces__msg__DVL__get_type_description,
  &dave_interfaces__msg__DVL__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dave_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dave_interfaces, msg, DVL)() {
  dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dave_interfaces, msg, DVLTarget)();
  dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistWithCovariance)();
  dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dave_interfaces, msg, DVLBeam)();
  if (!dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_message_type_support_handle.typesupport_identifier) {
    dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dave_interfaces__msg__DVL__rosidl_typesupport_introspection_c__DVL_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
