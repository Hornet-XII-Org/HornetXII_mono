// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dave_interfaces:srv/SetStratifiedCurrentVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/srv/set_stratified_current_velocity.hpp"


#ifndef DAVE_INTERFACES__SRV__DETAIL__SET_STRATIFIED_CURRENT_VELOCITY__BUILDER_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__SET_STRATIFIED_CURRENT_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dave_interfaces/srv/detail/set_stratified_current_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStratifiedCurrentVelocity_Request_vertical_angle
{
public:
  explicit Init_SetStratifiedCurrentVelocity_Request_vertical_angle(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request vertical_angle(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request::_vertical_angle_type arg)
  {
    msg_.vertical_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request msg_;
};

class Init_SetStratifiedCurrentVelocity_Request_horizontal_angle
{
public:
  explicit Init_SetStratifiedCurrentVelocity_Request_horizontal_angle(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request & msg)
  : msg_(msg)
  {}
  Init_SetStratifiedCurrentVelocity_Request_vertical_angle horizontal_angle(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request::_horizontal_angle_type arg)
  {
    msg_.horizontal_angle = std::move(arg);
    return Init_SetStratifiedCurrentVelocity_Request_vertical_angle(msg_);
  }

private:
  ::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request msg_;
};

class Init_SetStratifiedCurrentVelocity_Request_velocity
{
public:
  explicit Init_SetStratifiedCurrentVelocity_Request_velocity(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request & msg)
  : msg_(msg)
  {}
  Init_SetStratifiedCurrentVelocity_Request_horizontal_angle velocity(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SetStratifiedCurrentVelocity_Request_horizontal_angle(msg_);
  }

private:
  ::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request msg_;
};

class Init_SetStratifiedCurrentVelocity_Request_layer
{
public:
  Init_SetStratifiedCurrentVelocity_Request_layer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetStratifiedCurrentVelocity_Request_velocity layer(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request::_layer_type arg)
  {
    msg_.layer = std::move(arg);
    return Init_SetStratifiedCurrentVelocity_Request_velocity(msg_);
  }

private:
  ::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::SetStratifiedCurrentVelocity_Request>()
{
  return dave_interfaces::srv::builder::Init_SetStratifiedCurrentVelocity_Request_layer();
}

}  // namespace dave_interfaces


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStratifiedCurrentVelocity_Response_success
{
public:
  Init_SetStratifiedCurrentVelocity_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dave_interfaces::srv::SetStratifiedCurrentVelocity_Response success(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::SetStratifiedCurrentVelocity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::SetStratifiedCurrentVelocity_Response>()
{
  return dave_interfaces::srv::builder::Init_SetStratifiedCurrentVelocity_Response_success();
}

}  // namespace dave_interfaces


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStratifiedCurrentVelocity_Event_response
{
public:
  explicit Init_SetStratifiedCurrentVelocity_Event_response(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Event & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::srv::SetStratifiedCurrentVelocity_Event response(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::SetStratifiedCurrentVelocity_Event msg_;
};

class Init_SetStratifiedCurrentVelocity_Event_request
{
public:
  explicit Init_SetStratifiedCurrentVelocity_Event_request(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Event & msg)
  : msg_(msg)
  {}
  Init_SetStratifiedCurrentVelocity_Event_response request(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetStratifiedCurrentVelocity_Event_response(msg_);
  }

private:
  ::dave_interfaces::srv::SetStratifiedCurrentVelocity_Event msg_;
};

class Init_SetStratifiedCurrentVelocity_Event_info
{
public:
  Init_SetStratifiedCurrentVelocity_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetStratifiedCurrentVelocity_Event_request info(::dave_interfaces::srv::SetStratifiedCurrentVelocity_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetStratifiedCurrentVelocity_Event_request(msg_);
  }

private:
  ::dave_interfaces::srv::SetStratifiedCurrentVelocity_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::SetStratifiedCurrentVelocity_Event>()
{
  return dave_interfaces::srv::builder::Init_SetStratifiedCurrentVelocity_Event_info();
}

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__SRV__DETAIL__SET_STRATIFIED_CURRENT_VELOCITY__BUILDER_HPP_
