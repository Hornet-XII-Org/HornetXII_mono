// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dave_interfaces:srv/SetStratifiedCurrentVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/srv/set_stratified_current_velocity.hpp"


#ifndef DAVE_INTERFACES__SRV__DETAIL__SET_STRATIFIED_CURRENT_VELOCITY__TRAITS_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__SET_STRATIFIED_CURRENT_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dave_interfaces/srv/detail/set_stratified_current_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dave_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetStratifiedCurrentVelocity_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: layer
  {
    out << "layer: ";
    rosidl_generator_traits::value_to_yaml(msg.layer, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: horizontal_angle
  {
    out << "horizontal_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_angle, out);
    out << ", ";
  }

  // member: vertical_angle
  {
    out << "vertical_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetStratifiedCurrentVelocity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: layer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layer: ";
    rosidl_generator_traits::value_to_yaml(msg.layer, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: horizontal_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_angle, out);
    out << "\n";
  }

  // member: vertical_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetStratifiedCurrentVelocity_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dave_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dave_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dave_interfaces::srv::SetStratifiedCurrentVelocity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::srv::SetStratifiedCurrentVelocity_Request & msg)
{
  return dave_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request>()
{
  return "dave_interfaces::srv::SetStratifiedCurrentVelocity_Request";
}

template<>
inline const char * name<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request>()
{
  return "dave_interfaces/srv/SetStratifiedCurrentVelocity_Request";
}

template<>
struct has_fixed_size<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dave_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetStratifiedCurrentVelocity_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetStratifiedCurrentVelocity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetStratifiedCurrentVelocity_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dave_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dave_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dave_interfaces::srv::SetStratifiedCurrentVelocity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::srv::SetStratifiedCurrentVelocity_Response & msg)
{
  return dave_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response>()
{
  return "dave_interfaces::srv::SetStratifiedCurrentVelocity_Response";
}

template<>
inline const char * name<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response>()
{
  return "dave_interfaces/srv/SetStratifiedCurrentVelocity_Response";
}

template<>
struct has_fixed_size<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace dave_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetStratifiedCurrentVelocity_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetStratifiedCurrentVelocity_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetStratifiedCurrentVelocity_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dave_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dave_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dave_interfaces::srv::SetStratifiedCurrentVelocity_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::srv::SetStratifiedCurrentVelocity_Event & msg)
{
  return dave_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::srv::SetStratifiedCurrentVelocity_Event>()
{
  return "dave_interfaces::srv::SetStratifiedCurrentVelocity_Event";
}

template<>
inline const char * name<dave_interfaces::srv::SetStratifiedCurrentVelocity_Event>()
{
  return "dave_interfaces/srv/SetStratifiedCurrentVelocity_Event";
}

template<>
struct has_fixed_size<dave_interfaces::srv::SetStratifiedCurrentVelocity_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dave_interfaces::srv::SetStratifiedCurrentVelocity_Event>
  : std::integral_constant<bool, has_bounded_size<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request>::value && has_bounded_size<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dave_interfaces::srv::SetStratifiedCurrentVelocity_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dave_interfaces::srv::SetStratifiedCurrentVelocity>()
{
  return "dave_interfaces::srv::SetStratifiedCurrentVelocity";
}

template<>
inline const char * name<dave_interfaces::srv::SetStratifiedCurrentVelocity>()
{
  return "dave_interfaces/srv/SetStratifiedCurrentVelocity";
}

template<>
struct has_fixed_size<dave_interfaces::srv::SetStratifiedCurrentVelocity>
  : std::integral_constant<
    bool,
    has_fixed_size<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request>::value &&
    has_fixed_size<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response>::value
  >
{
};

template<>
struct has_bounded_size<dave_interfaces::srv::SetStratifiedCurrentVelocity>
  : std::integral_constant<
    bool,
    has_bounded_size<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request>::value &&
    has_bounded_size<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response>::value
  >
{
};

template<>
struct is_service<dave_interfaces::srv::SetStratifiedCurrentVelocity>
  : std::true_type
{
};

template<>
struct is_service_request<dave_interfaces::srv::SetStratifiedCurrentVelocity_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dave_interfaces::srv::SetStratifiedCurrentVelocity_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DAVE_INTERFACES__SRV__DETAIL__SET_STRATIFIED_CURRENT_VELOCITY__TRAITS_HPP_
