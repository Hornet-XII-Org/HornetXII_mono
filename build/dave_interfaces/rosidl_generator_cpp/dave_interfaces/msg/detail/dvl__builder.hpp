// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dave_interfaces:msg/DVL.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/dvl.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__DVL__BUILDER_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__DVL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dave_interfaces/msg/detail/dvl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dave_interfaces
{

namespace msg
{

namespace builder
{

class Init_DVL_beams
{
public:
  explicit Init_DVL_beams(::dave_interfaces::msg::DVL & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::msg::DVL beams(::dave_interfaces::msg::DVL::_beams_type arg)
  {
    msg_.beams = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::msg::DVL msg_;
};

class Init_DVL_velocity
{
public:
  explicit Init_DVL_velocity(::dave_interfaces::msg::DVL & msg)
  : msg_(msg)
  {}
  Init_DVL_beams velocity(::dave_interfaces::msg::DVL::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_DVL_beams(msg_);
  }

private:
  ::dave_interfaces::msg::DVL msg_;
};

class Init_DVL_target
{
public:
  explicit Init_DVL_target(::dave_interfaces::msg::DVL & msg)
  : msg_(msg)
  {}
  Init_DVL_velocity target(::dave_interfaces::msg::DVL::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_DVL_velocity(msg_);
  }

private:
  ::dave_interfaces::msg::DVL msg_;
};

class Init_DVL_type
{
public:
  explicit Init_DVL_type(::dave_interfaces::msg::DVL & msg)
  : msg_(msg)
  {}
  Init_DVL_target type(::dave_interfaces::msg::DVL::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_DVL_target(msg_);
  }

private:
  ::dave_interfaces::msg::DVL msg_;
};

class Init_DVL_header
{
public:
  Init_DVL_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DVL_type header(::dave_interfaces::msg::DVL::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DVL_type(msg_);
  }

private:
  ::dave_interfaces::msg::DVL msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::msg::DVL>()
{
  return dave_interfaces::msg::builder::Init_DVL_header();
}

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__MSG__DETAIL__DVL__BUILDER_HPP_
