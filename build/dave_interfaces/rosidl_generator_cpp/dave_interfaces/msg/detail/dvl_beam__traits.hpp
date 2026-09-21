// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dave_interfaces:msg/DVLBeam.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/dvl_beam.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__DVL_BEAM__TRAITS_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__DVL_BEAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dave_interfaces/msg/detail/dvl_beam__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"

namespace dave_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DVLBeam & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: reference
  {
    out << "reference: ";
    rosidl_generator_traits::value_to_yaml(msg.reference, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: locked
  {
    out << "locked: ";
    rosidl_generator_traits::value_to_yaml(msg.locked, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DVLBeam & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference: ";
    rosidl_generator_traits::value_to_yaml(msg.reference, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: locked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locked: ";
    rosidl_generator_traits::value_to_yaml(msg.locked, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DVLBeam & msg, bool use_flow_style = false)
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
  const dave_interfaces::msg::DVLBeam & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::msg::DVLBeam & msg)
{
  return dave_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::msg::DVLBeam>()
{
  return "dave_interfaces::msg::DVLBeam";
}

template<>
inline const char * name<dave_interfaces::msg::DVLBeam>()
{
  return "dave_interfaces/msg/DVLBeam";
}

template<>
struct has_fixed_size<dave_interfaces::msg::DVLBeam>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dave_interfaces::msg::DVLBeam>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dave_interfaces::msg::DVLBeam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DAVE_INTERFACES__MSG__DETAIL__DVL_BEAM__TRAITS_HPP_
