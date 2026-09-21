// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dave_interfaces:msg/DVLBeam.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/dvl_beam.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__DVL_BEAM__BUILDER_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__DVL_BEAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dave_interfaces/msg/detail/dvl_beam__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dave_interfaces
{

namespace msg
{

namespace builder
{

class Init_DVLBeam_velocity
{
public:
  explicit Init_DVLBeam_velocity(::dave_interfaces::msg::DVLBeam & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::msg::DVLBeam velocity(::dave_interfaces::msg::DVLBeam::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::msg::DVLBeam msg_;
};

class Init_DVLBeam_locked
{
public:
  explicit Init_DVLBeam_locked(::dave_interfaces::msg::DVLBeam & msg)
  : msg_(msg)
  {}
  Init_DVLBeam_velocity locked(::dave_interfaces::msg::DVLBeam::_locked_type arg)
  {
    msg_.locked = std::move(arg);
    return Init_DVLBeam_velocity(msg_);
  }

private:
  ::dave_interfaces::msg::DVLBeam msg_;
};

class Init_DVLBeam_range
{
public:
  explicit Init_DVLBeam_range(::dave_interfaces::msg::DVLBeam & msg)
  : msg_(msg)
  {}
  Init_DVLBeam_locked range(::dave_interfaces::msg::DVLBeam::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_DVLBeam_locked(msg_);
  }

private:
  ::dave_interfaces::msg::DVLBeam msg_;
};

class Init_DVLBeam_reference
{
public:
  explicit Init_DVLBeam_reference(::dave_interfaces::msg::DVLBeam & msg)
  : msg_(msg)
  {}
  Init_DVLBeam_range reference(::dave_interfaces::msg::DVLBeam::_reference_type arg)
  {
    msg_.reference = std::move(arg);
    return Init_DVLBeam_range(msg_);
  }

private:
  ::dave_interfaces::msg::DVLBeam msg_;
};

class Init_DVLBeam_id
{
public:
  Init_DVLBeam_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DVLBeam_reference id(::dave_interfaces::msg::DVLBeam::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DVLBeam_reference(msg_);
  }

private:
  ::dave_interfaces::msg::DVLBeam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::msg::DVLBeam>()
{
  return dave_interfaces::msg::builder::Init_DVLBeam_id();
}

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__MSG__DETAIL__DVL_BEAM__BUILDER_HPP_
