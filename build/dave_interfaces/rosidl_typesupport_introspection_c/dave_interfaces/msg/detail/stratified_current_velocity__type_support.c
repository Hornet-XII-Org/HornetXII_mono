// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dave_interfaces:msg/StratifiedCurrentVelocity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dave_interfaces/msg/detail/stratified_current_velocity__rosidl_typesupport_introspection_c.h"
#include "dave_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dave_interfaces/msg/detail/stratified_current_velocity__functions.h"
#include "dave_interfaces/msg/detail/stratified_current_velocity__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `depths`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `velocities`
#include "geometry_msgs/msg/vector3.h"
// Member `velocities`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dave_interfaces__msg__StratifiedCurrentVelocity__init(message_memory);
}

void dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_fini_function(void * message_memory)
{
  dave_interfaces__msg__StratifiedCurrentVelocity__fini(message_memory);
}

size_t dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentVelocity__depths(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentVelocity__depths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentVelocity__depths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentVelocity__depths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentVelocity__depths(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentVelocity__depths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentVelocity__depths(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentVelocity__depths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentVelocity__velocities(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentVelocity__velocities(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentVelocity__velocities(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentVelocity__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentVelocity__velocities(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentVelocity__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentVelocity__velocities(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentVelocity__velocities(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentVelocity, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentVelocity, depths),  // bytes offset in struct
    NULL,  // default value
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentVelocity__depths,  // size() function pointer
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentVelocity__depths,  // get_const(index) function pointer
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentVelocity__depths,  // get(index) function pointer
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentVelocity__depths,  // fetch(index, &value) function pointer
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentVelocity__depths,  // assign(index, value) function pointer
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentVelocity__depths  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentVelocity, velocities),  // bytes offset in struct
    NULL,  // default value
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentVelocity__velocities,  // size() function pointer
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentVelocity__velocities,  // get_const(index) function pointer
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentVelocity__velocities,  // get(index) function pointer
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentVelocity__velocities,  // fetch(index, &value) function pointer
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentVelocity__velocities,  // assign(index, value) function pointer
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentVelocity__velocities  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_message_members = {
  "dave_interfaces__msg",  // message namespace
  "StratifiedCurrentVelocity",  // message name
  3,  // number of fields
  sizeof(dave_interfaces__msg__StratifiedCurrentVelocity),
  false,  // has_any_key_member_
  dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_message_member_array,  // message members
  dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_init_function,  // function to initialize message memory (memory has to be allocated)
  dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_message_type_support_handle = {
  0,
  &dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_message_members,
  get_message_typesupport_handle_function,
  &dave_interfaces__msg__StratifiedCurrentVelocity__get_type_hash,
  &dave_interfaces__msg__StratifiedCurrentVelocity__get_type_description,
  &dave_interfaces__msg__StratifiedCurrentVelocity__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dave_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dave_interfaces, msg, StratifiedCurrentVelocity)() {
  dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_message_type_support_handle.typesupport_identifier) {
    dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dave_interfaces__msg__StratifiedCurrentVelocity__rosidl_typesupport_introspection_c__StratifiedCurrentVelocity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
