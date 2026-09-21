// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dave_interfaces:msg/StratifiedCurrentVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/stratified_current_velocity.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_VELOCITY__TRAITS_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dave_interfaces/msg/detail/stratified_current_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'velocities'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace dave_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const StratifiedCurrentVelocity & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: depths
  {
    if (msg.depths.size() == 0) {
      out << "depths: []";
    } else {
      out << "depths: [";
      size_t pending_items = msg.depths.size();
      for (auto item : msg.depths) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocities
  {
    if (msg.velocities.size() == 0) {
      out << "velocities: []";
    } else {
      out << "velocities: [";
      size_t pending_items = msg.velocities.size();
      for (auto item : msg.velocities) {
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
  const StratifiedCurrentVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: depths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.depths.size() == 0) {
      out << "depths: []\n";
    } else {
      out << "depths:\n";
      for (auto item : msg.depths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocities.size() == 0) {
      out << "velocities: []\n";
    } else {
      out << "velocities:\n";
      for (auto item : msg.velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StratifiedCurrentVelocity & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dave_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dave_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dave_interfaces::msg::StratifiedCurrentVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::msg::StratifiedCurrentVelocity & msg)
{
  return dave_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::msg::StratifiedCurrentVelocity>()
{
  return "dave_interfaces::msg::StratifiedCurrentVelocity";
}

template<>
inline const char * name<dave_interfaces::msg::StratifiedCurrentVelocity>()
{
  return "dave_interfaces/msg/StratifiedCurrentVelocity";
}

template<>
struct has_fixed_size<dave_interfaces::msg::StratifiedCurrentVelocity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dave_interfaces::msg::StratifiedCurrentVelocity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dave_interfaces::msg::StratifiedCurrentVelocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_VELOCITY__TRAITS_HPP_
