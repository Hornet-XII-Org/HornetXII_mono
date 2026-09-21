// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dave_interfaces:msg/DVL.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/dvl.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__DVL__TRAITS_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__DVL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dave_interfaces/msg/detail/dvl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'target'
#include "dave_interfaces/msg/detail/dvl_target__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'beams'
#include "dave_interfaces/msg/detail/dvl_beam__traits.hpp"

namespace dave_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DVL & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: beams
  {
    if (msg.beams.size() == 0) {
      out << "beams: []";
    } else {
      out << "beams: [";
      size_t pending_items = msg.beams.size();
      for (auto item : msg.beams) {
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
  const DVL & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: beams
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.beams.size() == 0) {
      out << "beams: []\n";
    } else {
      out << "beams:\n";
      for (auto item : msg.beams) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DVL & msg, bool use_flow_style = false)
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
  const dave_interfaces::msg::DVL & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::msg::DVL & msg)
{
  return dave_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::msg::DVL>()
{
  return "dave_interfaces::msg::DVL";
}

template<>
inline const char * name<dave_interfaces::msg::DVL>()
{
  return "dave_interfaces/msg/DVL";
}

template<>
struct has_fixed_size<dave_interfaces::msg::DVL>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dave_interfaces::msg::DVL>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dave_interfaces::msg::DVL>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DAVE_INTERFACES__MSG__DETAIL__DVL__TRAITS_HPP_
