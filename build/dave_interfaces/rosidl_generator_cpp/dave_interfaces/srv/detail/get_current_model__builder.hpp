// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dave_interfaces:srv/GetCurrentModel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/srv/get_current_model.hpp"


#ifndef DAVE_INTERFACES__SRV__DETAIL__GET_CURRENT_MODEL__BUILDER_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__GET_CURRENT_MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dave_interfaces/srv/detail/get_current_model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dave_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::GetCurrentModel_Request>()
{
  return ::dave_interfaces::srv::GetCurrentModel_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace dave_interfaces


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetCurrentModel_Response_mu
{
public:
  explicit Init_GetCurrentModel_Response_mu(::dave_interfaces::srv::GetCurrentModel_Response & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::srv::GetCurrentModel_Response mu(::dave_interfaces::srv::GetCurrentModel_Response::_mu_type arg)
  {
    msg_.mu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::GetCurrentModel_Response msg_;
};

class Init_GetCurrentModel_Response_noise
{
public:
  explicit Init_GetCurrentModel_Response_noise(::dave_interfaces::srv::GetCurrentModel_Response & msg)
  : msg_(msg)
  {}
  Init_GetCurrentModel_Response_mu noise(::dave_interfaces::srv::GetCurrentModel_Response::_noise_type arg)
  {
    msg_.noise = std::move(arg);
    return Init_GetCurrentModel_Response_mu(msg_);
  }

private:
  ::dave_interfaces::srv::GetCurrentModel_Response msg_;
};

class Init_GetCurrentModel_Response_max
{
public:
  explicit Init_GetCurrentModel_Response_max(::dave_interfaces::srv::GetCurrentModel_Response & msg)
  : msg_(msg)
  {}
  Init_GetCurrentModel_Response_noise max(::dave_interfaces::srv::GetCurrentModel_Response::_max_type arg)
  {
    msg_.max = std::move(arg);
    return Init_GetCurrentModel_Response_noise(msg_);
  }

private:
  ::dave_interfaces::srv::GetCurrentModel_Response msg_;
};

class Init_GetCurrentModel_Response_min
{
public:
  explicit Init_GetCurrentModel_Response_min(::dave_interfaces::srv::GetCurrentModel_Response & msg)
  : msg_(msg)
  {}
  Init_GetCurrentModel_Response_max min(::dave_interfaces::srv::GetCurrentModel_Response::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_GetCurrentModel_Response_max(msg_);
  }

private:
  ::dave_interfaces::srv::GetCurrentModel_Response msg_;
};

class Init_GetCurrentModel_Response_mean
{
public:
  Init_GetCurrentModel_Response_mean()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCurrentModel_Response_min mean(::dave_interfaces::srv::GetCurrentModel_Response::_mean_type arg)
  {
    msg_.mean = std::move(arg);
    return Init_GetCurrentModel_Response_min(msg_);
  }

private:
  ::dave_interfaces::srv::GetCurrentModel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::GetCurrentModel_Response>()
{
  return dave_interfaces::srv::builder::Init_GetCurrentModel_Response_mean();
}

}  // namespace dave_interfaces


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetCurrentModel_Event_response
{
public:
  explicit Init_GetCurrentModel_Event_response(::dave_interfaces::srv::GetCurrentModel_Event & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::srv::GetCurrentModel_Event response(::dave_interfaces::srv::GetCurrentModel_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::GetCurrentModel_Event msg_;
};

class Init_GetCurrentModel_Event_request
{
public:
  explicit Init_GetCurrentModel_Event_request(::dave_interfaces::srv::GetCurrentModel_Event & msg)
  : msg_(msg)
  {}
  Init_GetCurrentModel_Event_response request(::dave_interfaces::srv::GetCurrentModel_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetCurrentModel_Event_response(msg_);
  }

private:
  ::dave_interfaces::srv::GetCurrentModel_Event msg_;
};

class Init_GetCurrentModel_Event_info
{
public:
  Init_GetCurrentModel_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCurrentModel_Event_request info(::dave_interfaces::srv::GetCurrentModel_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetCurrentModel_Event_request(msg_);
  }

private:
  ::dave_interfaces::srv::GetCurrentModel_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::GetCurrentModel_Event>()
{
  return dave_interfaces::srv::builder::Init_GetCurrentModel_Event_info();
}

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__SRV__DETAIL__GET_CURRENT_MODEL__BUILDER_HPP_
