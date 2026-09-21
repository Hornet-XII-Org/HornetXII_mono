// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dave_interfaces:srv/SetCurrentModel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/srv/set_current_model.hpp"


#ifndef DAVE_INTERFACES__SRV__DETAIL__SET_CURRENT_MODEL__BUILDER_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__SET_CURRENT_MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dave_interfaces/srv/detail/set_current_model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCurrentModel_Request_mu
{
public:
  explicit Init_SetCurrentModel_Request_mu(::dave_interfaces::srv::SetCurrentModel_Request & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::srv::SetCurrentModel_Request mu(::dave_interfaces::srv::SetCurrentModel_Request::_mu_type arg)
  {
    msg_.mu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentModel_Request msg_;
};

class Init_SetCurrentModel_Request_noise
{
public:
  explicit Init_SetCurrentModel_Request_noise(::dave_interfaces::srv::SetCurrentModel_Request & msg)
  : msg_(msg)
  {}
  Init_SetCurrentModel_Request_mu noise(::dave_interfaces::srv::SetCurrentModel_Request::_noise_type arg)
  {
    msg_.noise = std::move(arg);
    return Init_SetCurrentModel_Request_mu(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentModel_Request msg_;
};

class Init_SetCurrentModel_Request_max
{
public:
  explicit Init_SetCurrentModel_Request_max(::dave_interfaces::srv::SetCurrentModel_Request & msg)
  : msg_(msg)
  {}
  Init_SetCurrentModel_Request_noise max(::dave_interfaces::srv::SetCurrentModel_Request::_max_type arg)
  {
    msg_.max = std::move(arg);
    return Init_SetCurrentModel_Request_noise(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentModel_Request msg_;
};

class Init_SetCurrentModel_Request_min
{
public:
  explicit Init_SetCurrentModel_Request_min(::dave_interfaces::srv::SetCurrentModel_Request & msg)
  : msg_(msg)
  {}
  Init_SetCurrentModel_Request_max min(::dave_interfaces::srv::SetCurrentModel_Request::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_SetCurrentModel_Request_max(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentModel_Request msg_;
};

class Init_SetCurrentModel_Request_mean
{
public:
  Init_SetCurrentModel_Request_mean()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCurrentModel_Request_min mean(::dave_interfaces::srv::SetCurrentModel_Request::_mean_type arg)
  {
    msg_.mean = std::move(arg);
    return Init_SetCurrentModel_Request_min(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentModel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::SetCurrentModel_Request>()
{
  return dave_interfaces::srv::builder::Init_SetCurrentModel_Request_mean();
}

}  // namespace dave_interfaces


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCurrentModel_Response_success
{
public:
  Init_SetCurrentModel_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dave_interfaces::srv::SetCurrentModel_Response success(::dave_interfaces::srv::SetCurrentModel_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentModel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::SetCurrentModel_Response>()
{
  return dave_interfaces::srv::builder::Init_SetCurrentModel_Response_success();
}

}  // namespace dave_interfaces


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCurrentModel_Event_response
{
public:
  explicit Init_SetCurrentModel_Event_response(::dave_interfaces::srv::SetCurrentModel_Event & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::srv::SetCurrentModel_Event response(::dave_interfaces::srv::SetCurrentModel_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentModel_Event msg_;
};

class Init_SetCurrentModel_Event_request
{
public:
  explicit Init_SetCurrentModel_Event_request(::dave_interfaces::srv::SetCurrentModel_Event & msg)
  : msg_(msg)
  {}
  Init_SetCurrentModel_Event_response request(::dave_interfaces::srv::SetCurrentModel_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetCurrentModel_Event_response(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentModel_Event msg_;
};

class Init_SetCurrentModel_Event_info
{
public:
  Init_SetCurrentModel_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCurrentModel_Event_request info(::dave_interfaces::srv::SetCurrentModel_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetCurrentModel_Event_request(msg_);
  }

private:
  ::dave_interfaces::srv::SetCurrentModel_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::SetCurrentModel_Event>()
{
  return dave_interfaces::srv::builder::Init_SetCurrentModel_Event_info();
}

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__SRV__DETAIL__SET_CURRENT_MODEL__BUILDER_HPP_
