// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dave_interfaces:msg/StratifiedCurrentVelocity.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dave_interfaces/msg/detail/stratified_current_velocity__functions.h"
#include "dave_interfaces/msg/detail/stratified_current_velocity__struct.hpp"
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

void StratifiedCurrentVelocity_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dave_interfaces::msg::StratifiedCurrentVelocity(_init);
}

void StratifiedCurrentVelocity_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dave_interfaces::msg::StratifiedCurrentVelocity *>(message_memory);
  typed_message->~StratifiedCurrentVelocity();
}

size_t size_function__StratifiedCurrentVelocity__depths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StratifiedCurrentVelocity__depths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__StratifiedCurrentVelocity__depths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__StratifiedCurrentVelocity__depths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__StratifiedCurrentVelocity__depths(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__StratifiedCurrentVelocity__depths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__StratifiedCurrentVelocity__depths(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__StratifiedCurrentVelocity__depths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StratifiedCurrentVelocity__velocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StratifiedCurrentVelocity__velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__StratifiedCurrentVelocity__velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__StratifiedCurrentVelocity__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__StratifiedCurrentVelocity__velocities(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__StratifiedCurrentVelocity__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__StratifiedCurrentVelocity__velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__StratifiedCurrentVelocity__velocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StratifiedCurrentVelocity_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentVelocity, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "depths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::StratifiedCurrentVelocity, depths),  // bytes offset in struct
    nullptr,  // default value
    size_function__StratifiedCurrentVelocity__depths,  // size() function pointer
    get_const_function__StratifiedCurrentVelocity__depths,  // get_const(index) function pointer
    get_function__StratifiedCurrentVelocity__depths,  // get(index) function pointer
    fetch_function__StratifiedCurrentVelocity__depths,  // fetch(index, &value) function pointer
    assign_function__StratifiedCurrentVelocity__depths,  // assign(index, value) function pointer
    resize_function__StratifiedCurrentVelocity__depths  // resize(index) function pointer
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
    offsetof(dave_interfaces::msg::StratifiedCurrentVelocity, velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__StratifiedCurrentVelocity__velocities,  // size() function pointer
    get_const_function__StratifiedCurrentVelocity__velocities,  // get_const(index) function pointer
    get_function__StratifiedCurrentVelocity__velocities,  // get(index) function pointer
    fetch_function__StratifiedCurrentVelocity__velocities,  // fetch(index, &value) function pointer
    assign_function__StratifiedCurrentVelocity__velocities,  // assign(index, value) function pointer
    resize_function__StratifiedCurrentVelocity__velocities  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StratifiedCurrentVelocity_message_members = {
  "dave_interfaces::msg",  // message namespace
  "StratifiedCurrentVelocity",  // message name
  3,  // number of fields
  sizeof(dave_interfaces::msg::StratifiedCurrentVelocity),
  false,  // has_any_key_member_
  StratifiedCurrentVelocity_message_member_array,  // message members
  StratifiedCurrentVelocity_init_function,  // function to initialize message memory (memory has to be allocated)
  StratifiedCurrentVelocity_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StratifiedCurrentVelocity_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StratifiedCurrentVelocity_message_members,
  get_message_typesupport_handle_function,
  &dave_interfaces__msg__StratifiedCurrentVelocity__get_type_hash,
  &dave_interfaces__msg__StratifiedCurrentVelocity__get_type_description,
  &dave_interfaces__msg__StratifiedCurrentVelocity__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dave_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dave_interfaces::msg::StratifiedCurrentVelocity>()
{
  return &::dave_interfaces::msg::rosidl_typesupport_introspection_cpp::StratifiedCurrentVelocity_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dave_interfaces, msg, StratifiedCurrentVelocity)() {
  return &::dave_interfaces::msg::rosidl_typesupport_introspection_cpp::StratifiedCurrentVelocity_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
