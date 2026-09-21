// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dave_interfaces:msg/DVLTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/dvl_target.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__DVL_TARGET__BUILDER_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__DVL_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dave_interfaces/msg/detail/dvl_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dave_interfaces
{

namespace msg
{

namespace builder
{

class Init_DVLTarget_range
{
public:
  explicit Init_DVLTarget_range(::dave_interfaces::msg::DVLTarget & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::msg::DVLTarget range(::dave_interfaces::msg::DVLTarget::_range_type arg)
  {
    msg_.range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::msg::DVLTarget msg_;
};

class Init_DVLTarget_type
{
public:
  Init_DVLTarget_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DVLTarget_range type(::dave_interfaces::msg::DVLTarget::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_DVLTarget_range(msg_);
  }

private:
  ::dave_interfaces::msg::DVLTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::msg::DVLTarget>()
{
  return dave_interfaces::msg::builder::Init_DVLTarget_type();
}

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__MSG__DETAIL__DVL_TARGET__BUILDER_HPP_
