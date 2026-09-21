// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dave_interfaces:msg/StratifiedCurrentDatabase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/stratified_current_database.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_DATABASE__TRAITS_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_DATABASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dave_interfaces/msg/detail/stratified_current_database__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'velocities'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace dave_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const StratifiedCurrentDatabase & msg,
  std::ostream & out)
{
  out << "{";
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
    out << ", ";
  }

  // member: time_gmt_year
  {
    if (msg.time_gmt_year.size() == 0) {
      out << "time_gmt_year: []";
    } else {
      out << "time_gmt_year: [";
      size_t pending_items = msg.time_gmt_year.size();
      for (auto item : msg.time_gmt_year) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_gmt_month
  {
    if (msg.time_gmt_month.size() == 0) {
      out << "time_gmt_month: []";
    } else {
      out << "time_gmt_month: [";
      size_t pending_items = msg.time_gmt_month.size();
      for (auto item : msg.time_gmt_month) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_gmt_day
  {
    if (msg.time_gmt_day.size() == 0) {
      out << "time_gmt_day: []";
    } else {
      out << "time_gmt_day: [";
      size_t pending_items = msg.time_gmt_day.size();
      for (auto item : msg.time_gmt_day) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_gmt_hour
  {
    if (msg.time_gmt_hour.size() == 0) {
      out << "time_gmt_hour: []";
    } else {
      out << "time_gmt_hour: [";
      size_t pending_items = msg.time_gmt_hour.size();
      for (auto item : msg.time_gmt_hour) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_gmt_minute
  {
    if (msg.time_gmt_minute.size() == 0) {
      out << "time_gmt_minute: []";
    } else {
      out << "time_gmt_minute: [";
      size_t pending_items = msg.time_gmt_minute.size();
      for (auto item : msg.time_gmt_minute) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tidevelocities
  {
    if (msg.tidevelocities.size() == 0) {
      out << "tidevelocities: []";
    } else {
      out << "tidevelocities: [";
      size_t pending_items = msg.tidevelocities.size();
      for (auto item : msg.tidevelocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tideconstituents
  {
    out << "tideconstituents: ";
    rosidl_generator_traits::value_to_yaml(msg.tideconstituents, out);
    out << ", ";
  }

  // member: m2_amp
  {
    out << "m2_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.m2_amp, out);
    out << ", ";
  }

  // member: m2_phase
  {
    out << "m2_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.m2_phase, out);
    out << ", ";
  }

  // member: m2_speed
  {
    out << "m2_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.m2_speed, out);
    out << ", ";
  }

  // member: s2_amp
  {
    out << "s2_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.s2_amp, out);
    out << ", ";
  }

  // member: s2_phase
  {
    out << "s2_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.s2_phase, out);
    out << ", ";
  }

  // member: s2_speed
  {
    out << "s2_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.s2_speed, out);
    out << ", ";
  }

  // member: n2_amp
  {
    out << "n2_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.n2_amp, out);
    out << ", ";
  }

  // member: n2_phase
  {
    out << "n2_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.n2_phase, out);
    out << ", ";
  }

  // member: n2_speed
  {
    out << "n2_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.n2_speed, out);
    out << ", ";
  }

  // member: ebb_direction
  {
    out << "ebb_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.ebb_direction, out);
    out << ", ";
  }

  // member: flood_direction
  {
    out << "flood_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.flood_direction, out);
    out << ", ";
  }

  // member: world_start_time_year
  {
    out << "world_start_time_year: ";
    rosidl_generator_traits::value_to_yaml(msg.world_start_time_year, out);
    out << ", ";
  }

  // member: world_start_time_month
  {
    out << "world_start_time_month: ";
    rosidl_generator_traits::value_to_yaml(msg.world_start_time_month, out);
    out << ", ";
  }

  // member: world_start_time_day
  {
    out << "world_start_time_day: ";
    rosidl_generator_traits::value_to_yaml(msg.world_start_time_day, out);
    out << ", ";
  }

  // member: world_start_time_hour
  {
    out << "world_start_time_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.world_start_time_hour, out);
    out << ", ";
  }

  // member: world_start_time_minute
  {
    out << "world_start_time_minute: ";
    rosidl_generator_traits::value_to_yaml(msg.world_start_time_minute, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StratifiedCurrentDatabase & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: time_gmt_year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.time_gmt_year.size() == 0) {
      out << "time_gmt_year: []\n";
    } else {
      out << "time_gmt_year:\n";
      for (auto item : msg.time_gmt_year) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time_gmt_month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.time_gmt_month.size() == 0) {
      out << "time_gmt_month: []\n";
    } else {
      out << "time_gmt_month:\n";
      for (auto item : msg.time_gmt_month) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time_gmt_day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.time_gmt_day.size() == 0) {
      out << "time_gmt_day: []\n";
    } else {
      out << "time_gmt_day:\n";
      for (auto item : msg.time_gmt_day) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time_gmt_hour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.time_gmt_hour.size() == 0) {
      out << "time_gmt_hour: []\n";
    } else {
      out << "time_gmt_hour:\n";
      for (auto item : msg.time_gmt_hour) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time_gmt_minute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.time_gmt_minute.size() == 0) {
      out << "time_gmt_minute: []\n";
    } else {
      out << "time_gmt_minute:\n";
      for (auto item : msg.time_gmt_minute) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tidevelocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tidevelocities.size() == 0) {
      out << "tidevelocities: []\n";
    } else {
      out << "tidevelocities:\n";
      for (auto item : msg.tidevelocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tideconstituents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tideconstituents: ";
    rosidl_generator_traits::value_to_yaml(msg.tideconstituents, out);
    out << "\n";
  }

  // member: m2_amp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m2_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.m2_amp, out);
    out << "\n";
  }

  // member: m2_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m2_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.m2_phase, out);
    out << "\n";
  }

  // member: m2_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m2_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.m2_speed, out);
    out << "\n";
  }

  // member: s2_amp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s2_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.s2_amp, out);
    out << "\n";
  }

  // member: s2_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s2_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.s2_phase, out);
    out << "\n";
  }

  // member: s2_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s2_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.s2_speed, out);
    out << "\n";
  }

  // member: n2_amp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n2_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.n2_amp, out);
    out << "\n";
  }

  // member: n2_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n2_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.n2_phase, out);
    out << "\n";
  }

  // member: n2_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n2_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.n2_speed, out);
    out << "\n";
  }

  // member: ebb_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ebb_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.ebb_direction, out);
    out << "\n";
  }

  // member: flood_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flood_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.flood_direction, out);
    out << "\n";
  }

  // member: world_start_time_year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_start_time_year: ";
    rosidl_generator_traits::value_to_yaml(msg.world_start_time_year, out);
    out << "\n";
  }

  // member: world_start_time_month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_start_time_month: ";
    rosidl_generator_traits::value_to_yaml(msg.world_start_time_month, out);
    out << "\n";
  }

  // member: world_start_time_day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_start_time_day: ";
    rosidl_generator_traits::value_to_yaml(msg.world_start_time_day, out);
    out << "\n";
  }

  // member: world_start_time_hour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_start_time_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.world_start_time_hour, out);
    out << "\n";
  }

  // member: world_start_time_minute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_start_time_minute: ";
    rosidl_generator_traits::value_to_yaml(msg.world_start_time_minute, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StratifiedCurrentDatabase & msg, bool use_flow_style = false)
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
  const dave_interfaces::msg::StratifiedCurrentDatabase & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::msg::StratifiedCurrentDatabase & msg)
{
  return dave_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::msg::StratifiedCurrentDatabase>()
{
  return "dave_interfaces::msg::StratifiedCurrentDatabase";
}

template<>
inline const char * name<dave_interfaces::msg::StratifiedCurrentDatabase>()
{
  return "dave_interfaces/msg/StratifiedCurrentDatabase";
}

template<>
struct has_fixed_size<dave_interfaces::msg::StratifiedCurrentDatabase>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dave_interfaces::msg::StratifiedCurrentDatabase>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dave_interfaces::msg::StratifiedCurrentDatabase>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_DATABASE__TRAITS_HPP_
