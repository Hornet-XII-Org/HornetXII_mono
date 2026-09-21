// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dave_interfaces:msg/DVL.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dave_interfaces/msg/detail/dvl__functions.h"
#include "dave_interfaces/msg/detail/dvl__struct.hpp"
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

void DVL_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dave_interfaces::msg::DVL(_init);
}

void DVL_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dave_interfaces::msg::DVL *>(message_memory);
  typed_message->~DVL();
}

size_t size_function__DVL__beams(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<dave_interfaces::msg::DVLBeam> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DVL__beams(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<dave_interfaces::msg::DVLBeam> *>(untyped_member);
  return &member[index];
}

void * get_function__DVL__beams(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<dave_interfaces::msg::DVLBeam> *>(untyped_member);
  return &member[index];
}

void fetch_function__DVL__beams(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const dave_interfaces::msg::DVLBeam *>(
    get_const_function__DVL__beams(untyped_member, index));
  auto & value = *reinterpret_cast<dave_interfaces::msg::DVLBeam *>(untyped_value);
  value = item;
}

void assign_function__DVL__beams(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<dave_interfaces::msg::DVLBeam *>(
    get_function__DVL__beams(untyped_member, index));
  const auto & value = *reinterpret_cast<const dave_interfaces::msg::DVLBeam *>(untyped_value);
  item = value;
}

void resize_function__DVL__beams(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<dave_interfaces::msg::DVLBeam> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DVL_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::DVL, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::DVL, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dave_interfaces::msg::DVLTarget>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::DVL, target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TwistWithCovariance>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::DVL, velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "beams",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dave_interfaces::msg::DVLBeam>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::DVL, beams),  // bytes offset in struct
    nullptr,  // default value
    size_function__DVL__beams,  // size() function pointer
    get_const_function__DVL__beams,  // get_const(index) function pointer
    get_function__DVL__beams,  // get(index) function pointer
    fetch_function__DVL__beams,  // fetch(index, &value) function pointer
    assign_function__DVL__beams,  // assign(index, value) function pointer
    resize_function__DVL__beams  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DVL_message_members = {
  "dave_interfaces::msg",  // message namespace
  "DVL",  // message name
  5,  // number of fields
  sizeof(dave_interfaces::msg::DVL),
  false,  // has_any_key_member_
  DVL_message_member_array,  // message members
  DVL_init_function,  // function to initialize message memory (memory has to be allocated)
  DVL_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DVL_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DVL_message_members,
  get_message_typesupport_handle_function,
  &dave_interfaces__msg__DVL__get_type_hash,
  &dave_interfaces__msg__DVL__get_type_description,
  &dave_interfaces__msg__DVL__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dave_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dave_interfaces::msg::DVL>()
{
  return &::dave_interfaces::msg::rosidl_typesupport_introspection_cpp::DVL_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dave_interfaces, msg, DVL)() {
  return &::dave_interfaces::msg::rosidl_typesupport_introspection_cpp::DVL_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
