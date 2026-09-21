// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dave_interfaces:srv/SetCurrentVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/srv/set_current_velocity.hpp"


#ifndef DAVE_INTERFACES__SRV__DETAIL__SET_CURRENT_VELOCITY__BUILDER_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__SET_CURRENT_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dave_interfaces/srv/detail/set_current_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCurrentVelocity_Request_vertical_angle
{
public:
  explicit Init_SetCurrentVelocity_Request_vertical_angle(::dave_interfaces::srv::SetCurrentVelocity_Request & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::srv::SetCurrentVelocity_Request vertical_angle(::dave_interfaces::srv::SetCurrentVelocity_Request::_vertical_angle_type arg)
  {
    msg_.vertical_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentVelocity_Request msg_;
};

class Init_SetCurrentVelocity_Request_horizontal_angle
{
public:
  explicit Init_SetCurrentVelocity_Request_horizontal_angle(::dave_interfaces::srv::SetCurrentVelocity_Request & msg)
  : msg_(msg)
  {}
  Init_SetCurrentVelocity_Request_vertical_angle horizontal_angle(::dave_interfaces::srv::SetCurrentVelocity_Request::_horizontal_angle_type arg)
  {
    msg_.horizontal_angle = std::move(arg);
    return Init_SetCurrentVelocity_Request_vertical_angle(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentVelocity_Request msg_;
};

class Init_SetCurrentVelocity_Request_velocity
{
public:
  Init_SetCurrentVelocity_Request_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCurrentVelocity_Request_horizontal_angle velocity(::dave_interfaces::srv::SetCurrentVelocity_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SetCurrentVelocity_Request_horizontal_angle(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentVelocity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::SetCurrentVelocity_Request>()
{
  return dave_interfaces::srv::builder::Init_SetCurrentVelocity_Request_velocity();
}

}  // namespace dave_interfaces


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCurrentVelocity_Response_success
{
public:
  Init_SetCurrentVelocity_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dave_interfaces::srv::SetCurrentVelocity_Response success(::dave_interfaces::srv::SetCurrentVelocity_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentVelocity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::SetCurrentVelocity_Response>()
{
  return dave_interfaces::srv::builder::Init_SetCurrentVelocity_Response_success();
}

}  // namespace dave_interfaces


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCurrentVelocity_Event_response
{
public:
  explicit Init_SetCurrentVelocity_Event_response(::dave_interfaces::srv::SetCurrentVelocity_Event & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::srv::SetCurrentVelocity_Event response(::dave_interfaces::srv::SetCurrentVelocity_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentVelocity_Event msg_;
};

class Init_SetCurrentVelocity_Event_request
{
public:
  explicit Init_SetCurrentVelocity_Event_request(::dave_interfaces::srv::SetCurrentVelocity_Event & msg)
  : msg_(msg)
  {}
  Init_SetCurrentVelocity_Event_response request(::dave_interfaces::srv::SetCurrentVelocity_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetCurrentVelocity_Event_response(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentVelocity_Event msg_;
};

class Init_SetCurrentVelocity_Event_info
{
public:
  Init_SetCurrentVelocity_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCurrentVelocity_Event_request info(::dave_interfaces::srv::SetCurrentVelocity_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetCurrentVelocity_Event_request(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentVelocity_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::SetCurrentVelocity_Event>()
{
  return dave_interfaces::srv::builder::Init_SetCurrentVelocity_Event_info();
}

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__SRV__DETAIL__SET_CURRENT_VELOCITY__BUILDER_HPP_
