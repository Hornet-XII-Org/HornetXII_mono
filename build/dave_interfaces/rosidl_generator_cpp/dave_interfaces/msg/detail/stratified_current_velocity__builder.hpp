// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dave_interfaces:msg/StratifiedCurrentVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/stratified_current_velocity.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_VELOCITY__BUILDER_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dave_interfaces/msg/detail/stratified_current_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dave_interfaces
{

namespace msg
{

namespace builder
{

class Init_StratifiedCurrentVelocity_velocities
{
public:
  explicit Init_StratifiedCurrentVelocity_velocities(::dave_interfaces::msg::StratifiedCurrentVelocity & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::msg::StratifiedCurrentVelocity velocities(::dave_interfaces::msg::StratifiedCurrentVelocity::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentVelocity msg_;
};

class Init_StratifiedCurrentVelocity_depths
{
public:
  explicit Init_StratifiedCurrentVelocity_depths(::dave_interfaces::msg::StratifiedCurrentVelocity & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentVelocity_velocities depths(::dave_interfaces::msg::StratifiedCurrentVelocity::_depths_type arg)
  {
    msg_.depths = std::move(arg);
    return Init_StratifiedCurrentVelocity_velocities(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentVelocity msg_;
};

class Init_StratifiedCurrentVelocity_header
{
public:
  Init_StratifiedCurrentVelocity_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StratifiedCurrentVelocity_depths header(::dave_interfaces::msg::StratifiedCurrentVelocity::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StratifiedCurrentVelocity_depths(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::msg::StratifiedCurrentVelocity>()
{
  return dave_interfaces::msg::builder::Init_StratifiedCurrentVelocity_header();
}

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_VELOCITY__BUILDER_HPP_
