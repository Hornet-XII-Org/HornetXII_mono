// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dave_interfaces:msg/StratifiedCurrentDatabase.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dave_interfaces/msg/detail/stratified_current_database__rosidl_typesupport_introspection_c.h"
#include "dave_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dave_interfaces/msg/detail/stratified_current_database__functions.h"
#include "dave_interfaces/msg/detail/stratified_current_database__struct.h"


// Include directives for member types
// Member `depths`
// Member `time_gmt_year`
// Member `time_gmt_month`
// Member `time_gmt_day`
// Member `time_gmt_hour`
// Member `time_gmt_minute`
// Member `tidevelocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `velocities`
#include "geometry_msgs/msg/vector3.h"
// Member `velocities`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dave_interfaces__msg__StratifiedCurrentDatabase__init(message_memory);
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_fini_function(void * message_memory)
{
  dave_interfaces__msg__StratifiedCurrentDatabase__fini(message_memory);
}

size_t dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__depths(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__depths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__depths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__depths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__depths(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__depths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__depths(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__depths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__velocities(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__velocities(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__velocities(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__velocities(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__velocities(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__velocities(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__time_gmt_year(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_year(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_year(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__time_gmt_year(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_year(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__time_gmt_year(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_year(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__time_gmt_year(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__time_gmt_month(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_month(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_month(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__time_gmt_month(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_month(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__time_gmt_month(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_month(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__time_gmt_month(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__time_gmt_day(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_day(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_day(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__time_gmt_day(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_day(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__time_gmt_day(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_day(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__time_gmt_day(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__time_gmt_hour(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_hour(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_hour(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__time_gmt_hour(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_hour(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__time_gmt_hour(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_hour(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__time_gmt_hour(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__time_gmt_minute(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_minute(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_minute(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__time_gmt_minute(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_minute(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__time_gmt_minute(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_minute(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__time_gmt_minute(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__tidevelocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__tidevelocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__tidevelocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__tidevelocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__tidevelocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__tidevelocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__tidevelocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__tidevelocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_message_member_array[25] = {
  {
    "depths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, depths),  // bytes offset in struct
    NULL,  // default value
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__depths,  // size() function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__depths,  // get_const(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__depths,  // get(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__depths,  // fetch(index, &value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__depths,  // assign(index, value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__depths  // resize(index) function pointer
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
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, velocities),  // bytes offset in struct
    NULL,  // default value
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__velocities,  // size() function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__velocities,  // get_const(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__velocities,  // get(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__velocities,  // fetch(index, &value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__velocities,  // assign(index, value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__velocities  // resize(index) function pointer
  },
  {
    "time_gmt_year",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, time_gmt_year),  // bytes offset in struct
    NULL,  // default value
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__time_gmt_year,  // size() function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_year,  // get_const(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_year,  // get(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__time_gmt_year,  // fetch(index, &value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__time_gmt_year,  // assign(index, value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__time_gmt_year  // resize(index) function pointer
  },
  {
    "time_gmt_month",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, time_gmt_month),  // bytes offset in struct
    NULL,  // default value
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__time_gmt_month,  // size() function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_month,  // get_const(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_month,  // get(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__time_gmt_month,  // fetch(index, &value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__time_gmt_month,  // assign(index, value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__time_gmt_month  // resize(index) function pointer
  },
  {
    "time_gmt_day",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, time_gmt_day),  // bytes offset in struct
    NULL,  // default value
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__time_gmt_day,  // size() function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_day,  // get_const(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_day,  // get(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__time_gmt_day,  // fetch(index, &value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__time_gmt_day,  // assign(index, value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__time_gmt_day  // resize(index) function pointer
  },
  {
    "time_gmt_hour",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, time_gmt_hour),  // bytes offset in struct
    NULL,  // default value
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__time_gmt_hour,  // size() function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_hour,  // get_const(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_hour,  // get(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__time_gmt_hour,  // fetch(index, &value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__time_gmt_hour,  // assign(index, value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__time_gmt_hour  // resize(index) function pointer
  },
  {
    "time_gmt_minute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, time_gmt_minute),  // bytes offset in struct
    NULL,  // default value
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__time_gmt_minute,  // size() function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__time_gmt_minute,  // get_const(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__time_gmt_minute,  // get(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__time_gmt_minute,  // fetch(index, &value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__time_gmt_minute,  // assign(index, value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__time_gmt_minute  // resize(index) function pointer
  },
  {
    "tidevelocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, tidevelocities),  // bytes offset in struct
    NULL,  // default value
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__size_function__StratifiedCurrentDatabase__tidevelocities,  // size() function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_const_function__StratifiedCurrentDatabase__tidevelocities,  // get_const(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__get_function__StratifiedCurrentDatabase__tidevelocities,  // get(index) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__fetch_function__StratifiedCurrentDatabase__tidevelocities,  // fetch(index, &value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__assign_function__StratifiedCurrentDatabase__tidevelocities,  // assign(index, value) function pointer
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__resize_function__StratifiedCurrentDatabase__tidevelocities  // resize(index) function pointer
  },
  {
    "tideconstituents",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, tideconstituents),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m2_amp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, m2_amp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m2_phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, m2_phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m2_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, m2_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "s2_amp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, s2_amp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "s2_phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, s2_phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "s2_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, s2_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n2_amp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, n2_amp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n2_phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, n2_phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n2_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, n2_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ebb_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, ebb_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flood_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, flood_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "world_start_time_year",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, world_start_time_year),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "world_start_time_month",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, world_start_time_month),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "world_start_time_day",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, world_start_time_day),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "world_start_time_hour",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, world_start_time_hour),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "world_start_time_minute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces__msg__StratifiedCurrentDatabase, world_start_time_minute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_message_members = {
  "dave_interfaces__msg",  // message namespace
  "StratifiedCurrentDatabase",  // message name
  25,  // number of fields
  sizeof(dave_interfaces__msg__StratifiedCurrentDatabase),
  false,  // has_any_key_member_
  dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_message_member_array,  // message members
  dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_init_function,  // function to initialize message memory (memory has to be allocated)
  dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_message_type_support_handle = {
  0,
  &dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_message_members,
  get_message_typesupport_handle_function,
  &dave_interfaces__msg__StratifiedCurrentDatabase__get_type_hash,
  &dave_interfaces__msg__StratifiedCurrentDatabase__get_type_description,
  &dave_interfaces__msg__StratifiedCurrentDatabase__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dave_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dave_interfaces, msg, StratifiedCurrentDatabase)() {
  dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_message_type_support_handle.typesupport_identifier) {
    dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dave_interfaces__msg__StratifiedCurrentDatabase__rosidl_typesupport_introspection_c__StratifiedCurrentDatabase_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
