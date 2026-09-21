// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dave_interfaces:msg/StratifiedCurrentDatabase.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dave_interfaces/msg/detail/stratified_current_database__functions.h"
#include "dave_interfaces/msg/detail/stratified_current_database__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dave_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StratifiedCurrentDatabase_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dave_interfaces::msg::StratifiedCurrentDatabase(_init);
}

void StratifiedCurrentDatabase_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dave_interfaces::msg::StratifiedCurrentDatabase *>(message_memory);
  typed_message->~StratifiedCurrentDatabase();
}

size_t size_function__StratifiedCurrentDatabase__depths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StratifiedCurrentDatabase__depths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__StratifiedCurrentDatabase__depths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__StratifiedCurrentDatabase__depths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__StratifiedCurrentDatabase__depths(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__StratifiedCurrentDatabase__depths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__StratifiedCurrentDatabase__depths(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__StratifiedCurrentDatabase__depths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StratifiedCurrentDatabase__velocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StratifiedCurrentDatabase__velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__StratifiedCurrentDatabase__velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__StratifiedCurrentDatabase__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__StratifiedCurrentDatabase__velocities(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__StratifiedCurrentDatabase__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__StratifiedCurrentDatabase__velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__StratifiedCurrentDatabase__velocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StratifiedCurrentDatabase__time_gmt_year(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StratifiedCurrentDatabase__time_gmt_year(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StratifiedCurrentDatabase__time_gmt_year(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StratifiedCurrentDatabase__time_gmt_year(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__StratifiedCurrentDatabase__time_gmt_year(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__StratifiedCurrentDatabase__time_gmt_year(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__StratifiedCurrentDatabase__time_gmt_year(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__StratifiedCurrentDatabase__time_gmt_year(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StratifiedCurrentDatabase__time_gmt_month(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StratifiedCurrentDatabase__time_gmt_month(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StratifiedCurrentDatabase__time_gmt_month(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StratifiedCurrentDatabase__time_gmt_month(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__StratifiedCurrentDatabase__time_gmt_month(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__StratifiedCurrentDatabase__time_gmt_month(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__StratifiedCurrentDatabase__time_gmt_month(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__StratifiedCurrentDatabase__time_gmt_month(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StratifiedCurrentDatabase__time_gmt_day(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StratifiedCurrentDatabase__time_gmt_day(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StratifiedCurrentDatabase__time_gmt_day(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StratifiedCurrentDatabase__time_gmt_day(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__StratifiedCurrentDatabase__time_gmt_day(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__StratifiedCurrentDatabase__time_gmt_day(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__StratifiedCurrentDatabase__time_gmt_day(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__StratifiedCurrentDatabase__time_gmt_day(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StratifiedCurrentDatabase__time_gmt_hour(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StratifiedCurrentDatabase__time_gmt_hour(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StratifiedCurrentDatabase__time_gmt_hour(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StratifiedCurrentDatabase__time_gmt_hour(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__StratifiedCurrentDatabase__time_gmt_hour(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__StratifiedCurrentDatabase__time_gmt_hour(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__StratifiedCurrentDatabase__time_gmt_hour(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__StratifiedCurrentDatabase__time_gmt_hour(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StratifiedCurrentDatabase__time_gmt_minute(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StratifiedCurrentDatabase__time_gmt_minute(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StratifiedCurrentDatabase__time_gmt_minute(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StratifiedCurrentDatabase__time_gmt_minute(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__StratifiedCurrentDatabase__time_gmt_minute(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__StratifiedCurrentDatabase__time_gmt_minute(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__StratifiedCurrentDatabase__time_gmt_minute(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__StratifiedCurrentDatabase__time_gmt_minute(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StratifiedCurrentDatabase__tidevelocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StratifiedCurrentDatabase__tidevelocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__StratifiedCurrentDatabase__tidevelocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__StratifiedCurrentDatabase__tidevelocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__StratifiedCurrentDatabase__tidevelocities(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__StratifiedCurrentDatabase__tidevelocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__StratifiedCurrentDatabase__tidevelocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__StratifiedCurrentDatabase__tidevelocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StratifiedCurrentDatabase_message_member_array[25] = {
  {
    "depths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, depths),  // bytes offset in struct
    nullptr,  // default value
    size_function__StratifiedCurrentDatabase__depths,  // size() function pointer
    get_const_function__StratifiedCurrentDatabase__depths,  // get_const(index) function pointer
    get_function__StratifiedCurrentDatabase__depths,  // get(index) function pointer
    fetch_function__StratifiedCurrentDatabase__depths,  // fetch(index, &value) function pointer
    assign_function__StratifiedCurrentDatabase__depths,  // assign(index, value) function pointer
    resize_function__StratifiedCurrentDatabase__depths  // resize(index) function pointer
  },
  {
    "velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__StratifiedCurrentDatabase__velocities,  // size() function pointer
    get_const_function__StratifiedCurrentDatabase__velocities,  // get_const(index) function pointer
    get_function__StratifiedCurrentDatabase__velocities,  // get(index) function pointer
    fetch_function__StratifiedCurrentDatabase__velocities,  // fetch(index, &value) function pointer
    assign_function__StratifiedCurrentDatabase__velocities,  // assign(index, value) function pointer
    resize_function__StratifiedCurrentDatabase__velocities  // resize(index) function pointer
  },
  {
    "time_gmt_year",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, time_gmt_year),  // bytes offset in struct
    nullptr,  // default value
    size_function__StratifiedCurrentDatabase__time_gmt_year,  // size() function pointer
    get_const_function__StratifiedCurrentDatabase__time_gmt_year,  // get_const(index) function pointer
    get_function__StratifiedCurrentDatabase__time_gmt_year,  // get(index) function pointer
    fetch_function__StratifiedCurrentDatabase__time_gmt_year,  // fetch(index, &value) function pointer
    assign_function__StratifiedCurrentDatabase__time_gmt_year,  // assign(index, value) function pointer
    resize_function__StratifiedCurrentDatabase__time_gmt_year  // resize(index) function pointer
  },
  {
    "time_gmt_month",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, time_gmt_month),  // bytes offset in struct
    nullptr,  // default value
    size_function__StratifiedCurrentDatabase__time_gmt_month,  // size() function pointer
    get_const_function__StratifiedCurrentDatabase__time_gmt_month,  // get_const(index) function pointer
    get_function__StratifiedCurrentDatabase__time_gmt_month,  // get(index) function pointer
    fetch_function__StratifiedCurrentDatabase__time_gmt_month,  // fetch(index, &value) function pointer
    assign_function__StratifiedCurrentDatabase__time_gmt_month,  // assign(index, value) function pointer
    resize_function__StratifiedCurrentDatabase__time_gmt_month  // resize(index) function pointer
  },
  {
    "time_gmt_day",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, time_gmt_day),  // bytes offset in struct
    nullptr,  // default value
    size_function__StratifiedCurrentDatabase__time_gmt_day,  // size() function pointer
    get_const_function__StratifiedCurrentDatabase__time_gmt_day,  // get_const(index) function pointer
    get_function__StratifiedCurrentDatabase__time_gmt_day,  // get(index) function pointer
    fetch_function__StratifiedCurrentDatabase__time_gmt_day,  // fetch(index, &value) function pointer
    assign_function__StratifiedCurrentDatabase__time_gmt_day,  // assign(index, value) function pointer
    resize_function__StratifiedCurrentDatabase__time_gmt_day  // resize(index) function pointer
  },
  {
    "time_gmt_hour",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, time_gmt_hour),  // bytes offset in struct
    nullptr,  // default value
    size_function__StratifiedCurrentDatabase__time_gmt_hour,  // size() function pointer
    get_const_function__StratifiedCurrentDatabase__time_gmt_hour,  // get_const(index) function pointer
    get_function__StratifiedCurrentDatabase__time_gmt_hour,  // get(index) function pointer
    fetch_function__StratifiedCurrentDatabase__time_gmt_hour,  // fetch(index, &value) function pointer
    assign_function__StratifiedCurrentDatabase__time_gmt_hour,  // assign(index, value) function pointer
    resize_function__StratifiedCurrentDatabase__time_gmt_hour  // resize(index) function pointer
  },
  {
    "time_gmt_minute",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, time_gmt_minute),  // bytes offset in struct
    nullptr,  // default value
    size_function__StratifiedCurrentDatabase__time_gmt_minute,  // size() function pointer
    get_const_function__StratifiedCurrentDatabase__time_gmt_minute,  // get_const(index) function pointer
    get_function__StratifiedCurrentDatabase__time_gmt_minute,  // get(index) function pointer
    fetch_function__StratifiedCurrentDatabase__time_gmt_minute,  // fetch(index, &value) function pointer
    assign_function__StratifiedCurrentDatabase__time_gmt_minute,  // assign(index, value) function pointer
    resize_function__StratifiedCurrentDatabase__time_gmt_minute  // resize(index) function pointer
  },
  {
    "tidevelocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, tidevelocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__StratifiedCurrentDatabase__tidevelocities,  // size() function pointer
    get_const_function__StratifiedCurrentDatabase__tidevelocities,  // get_const(index) function pointer
    get_function__StratifiedCurrentDatabase__tidevelocities,  // get(index) function pointer
    fetch_function__StratifiedCurrentDatabase__tidevelocities,  // fetch(index, &value) function pointer
    assign_function__StratifiedCurrentDatabase__tidevelocities,  // assign(index, value) function pointer
    resize_function__StratifiedCurrentDatabase__tidevelocities  // resize(index) function pointer
  },
  {
    "tideconstituents",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, tideconstituents),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m2_amp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, m2_amp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m2_phase",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, m2_phase),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m2_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, m2_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "s2_amp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, s2_amp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "s2_phase",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, s2_phase),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "s2_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, s2_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n2_amp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, n2_amp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n2_phase",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, n2_phase),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n2_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, n2_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ebb_direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, ebb_direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flood_direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, flood_direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "world_start_time_year",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, world_start_time_year),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "world_start_time_month",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, world_start_time_month),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "world_start_time_day",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, world_start_time_day),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "world_start_time_hour",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, world_start_time_hour),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "world_start_time_minute",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentDatabase, world_start_time_minute),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StratifiedCurrentDatabase_message_members = {
  "dave_interfaces::msg",  // message namespace
  "StratifiedCurrentDatabase",  // message name
  25,  // number of fields
  sizeof(dave_interfaces::msg::StratifiedCurrentDatabase),
  false,  // has_any_key_member_
  StratifiedCurrentDatabase_message_member_array,  // message members
  StratifiedCurrentDatabase_init_function,  // function to initialize message memory (memory has to be allocated)
  StratifiedCurrentDatabase_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StratifiedCurrentDatabase_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StratifiedCurrentDatabase_message_members,
  get_message_typesupport_handle_function,
  &dave_interfaces__msg__StratifiedCurrentDatabase__get_type_hash,
  &dave_interfaces__msg__StratifiedCurrentDatabase__get_type_description,
  &dave_interfaces__msg__StratifiedCurrentDatabase__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dave_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dave_interfaces::msg::StratifiedCurrentDatabase>()
{
  return &::dave_interfaces::msg::rosidl_typesupport_introspection_cpp::StratifiedCurrentDatabase_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dave_interfaces, msg, StratifiedCurrentDatabase)() {
  return &::dave_interfaces::msg::rosidl_typesupport_introspection_cpp::StratifiedCurrentDatabase_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
