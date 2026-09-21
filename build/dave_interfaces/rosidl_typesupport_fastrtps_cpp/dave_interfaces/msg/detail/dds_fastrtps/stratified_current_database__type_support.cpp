// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dave_interfaces:msg/StratifiedCurrentDatabase.idl
// generated code does not contain a copyright notice
#include "dave_interfaces/msg/detail/stratified_current_database__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dave_interfaces/msg/detail/stratified_current_database__functions.h"
#include "dave_interfaces/msg/detail/stratified_current_database__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_key_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace dave_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
cdr_serialize(
  const dave_interfaces::msg::StratifiedCurrentDatabase & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: depths
  {
    cdr << ros_message.depths;
  }

  // Member: velocities
  {
    size_t size = ros_message.velocities.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.velocities[i],
        cdr);
    }
  }

  // Member: time_gmt_year
  {
    cdr << ros_message.time_gmt_year;
  }

  // Member: time_gmt_month
  {
    cdr << ros_message.time_gmt_month;
  }

  // Member: time_gmt_day
  {
    cdr << ros_message.time_gmt_day;
  }

  // Member: time_gmt_hour
  {
    cdr << ros_message.time_gmt_hour;
  }

  // Member: time_gmt_minute
  {
    cdr << ros_message.time_gmt_minute;
  }

  // Member: tidevelocities
  {
    cdr << ros_message.tidevelocities;
  }

  // Member: tideconstituents
  cdr << (ros_message.tideconstituents ? true : false);

  // Member: m2_amp
  cdr << ros_message.m2_amp;

  // Member: m2_phase
  cdr << ros_message.m2_phase;

  // Member: m2_speed
  cdr << ros_message.m2_speed;

  // Member: s2_amp
  cdr << ros_message.s2_amp;

  // Member: s2_phase
  cdr << ros_message.s2_phase;

  // Member: s2_speed
  cdr << ros_message.s2_speed;

  // Member: n2_amp
  cdr << ros_message.n2_amp;

  // Member: n2_phase
  cdr << ros_message.n2_phase;

  // Member: n2_speed
  cdr << ros_message.n2_speed;

  // Member: ebb_direction
  cdr << ros_message.ebb_direction;

  // Member: flood_direction
  cdr << ros_message.flood_direction;

  // Member: world_start_time_year
  cdr << ros_message.world_start_time_year;

  // Member: world_start_time_month
  cdr << ros_message.world_start_time_month;

  // Member: world_start_time_day
  cdr << ros_message.world_start_time_day;

  // Member: world_start_time_hour
  cdr << ros_message.world_start_time_hour;

  // Member: world_start_time_minute
  cdr << ros_message.world_start_time_minute;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dave_interfaces::msg::StratifiedCurrentDatabase & ros_message)
{
  // Member: depths
  {
    cdr >> ros_message.depths;
  }

  // Member: velocities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.velocities.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.velocities[i]);
    }
  }

  // Member: time_gmt_year
  {
    cdr >> ros_message.time_gmt_year;
  }

  // Member: time_gmt_month
  {
    cdr >> ros_message.time_gmt_month;
  }

  // Member: time_gmt_day
  {
    cdr >> ros_message.time_gmt_day;
  }

  // Member: time_gmt_hour
  {
    cdr >> ros_message.time_gmt_hour;
  }

  // Member: time_gmt_minute
  {
    cdr >> ros_message.time_gmt_minute;
  }

  // Member: tidevelocities
  {
    cdr >> ros_message.tidevelocities;
  }

  // Member: tideconstituents
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tideconstituents = tmp ? true : false;
  }

  // Member: m2_amp
  cdr >> ros_message.m2_amp;

  // Member: m2_phase
  cdr >> ros_message.m2_phase;

  // Member: m2_speed
  cdr >> ros_message.m2_speed;

  // Member: s2_amp
  cdr >> ros_message.s2_amp;

  // Member: s2_phase
  cdr >> ros_message.s2_phase;

  // Member: s2_speed
  cdr >> ros_message.s2_speed;

  // Member: n2_amp
  cdr >> ros_message.n2_amp;

  // Member: n2_phase
  cdr >> ros_message.n2_phase;

  // Member: n2_speed
  cdr >> ros_message.n2_speed;

  // Member: ebb_direction
  cdr >> ros_message.ebb_direction;

  // Member: flood_direction
  cdr >> ros_message.flood_direction;

  // Member: world_start_time_year
  cdr >> ros_message.world_start_time_year;

  // Member: world_start_time_month
  cdr >> ros_message.world_start_time_month;

  // Member: world_start_time_day
  cdr >> ros_message.world_start_time_day;

  // Member: world_start_time_hour
  cdr >> ros_message.world_start_time_hour;

  // Member: world_start_time_minute
  cdr >> ros_message.world_start_time_minute;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
get_serialized_size(
  const dave_interfaces::msg::StratifiedCurrentDatabase & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: depths
  {
    size_t array_size = ros_message.depths.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.depths[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: velocities
  {
    size_t array_size = ros_message.velocities.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.velocities[index], current_alignment);
    }
  }

  // Member: time_gmt_year
  {
    size_t array_size = ros_message.time_gmt_year.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.time_gmt_year[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: time_gmt_month
  {
    size_t array_size = ros_message.time_gmt_month.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.time_gmt_month[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: time_gmt_day
  {
    size_t array_size = ros_message.time_gmt_day.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.time_gmt_day[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: time_gmt_hour
  {
    size_t array_size = ros_message.time_gmt_hour.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.time_gmt_hour[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: time_gmt_minute
  {
    size_t array_size = ros_message.time_gmt_minute.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.time_gmt_minute[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tidevelocities
  {
    size_t array_size = ros_message.tidevelocities.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tidevelocities[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tideconstituents
  {
    size_t item_size = sizeof(ros_message.tideconstituents);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m2_amp
  {
    size_t item_size = sizeof(ros_message.m2_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m2_phase
  {
    size_t item_size = sizeof(ros_message.m2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m2_speed
  {
    size_t item_size = sizeof(ros_message.m2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: s2_amp
  {
    size_t item_size = sizeof(ros_message.s2_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: s2_phase
  {
    size_t item_size = sizeof(ros_message.s2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: s2_speed
  {
    size_t item_size = sizeof(ros_message.s2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: n2_amp
  {
    size_t item_size = sizeof(ros_message.n2_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: n2_phase
  {
    size_t item_size = sizeof(ros_message.n2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: n2_speed
  {
    size_t item_size = sizeof(ros_message.n2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ebb_direction
  {
    size_t item_size = sizeof(ros_message.ebb_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: flood_direction
  {
    size_t item_size = sizeof(ros_message.flood_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: world_start_time_year
  {
    size_t item_size = sizeof(ros_message.world_start_time_year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: world_start_time_month
  {
    size_t item_size = sizeof(ros_message.world_start_time_month);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: world_start_time_day
  {
    size_t item_size = sizeof(ros_message.world_start_time_day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: world_start_time_hour
  {
    size_t item_size = sizeof(ros_message.world_start_time_hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: world_start_time_minute
  {
    size_t item_size = sizeof(ros_message.world_start_time_minute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
max_serialized_size_StratifiedCurrentDatabase(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: depths
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: velocities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: time_gmt_year
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: time_gmt_month
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: time_gmt_day
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: time_gmt_hour
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: time_gmt_minute
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: tidevelocities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: tideconstituents
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: m2_amp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: m2_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: m2_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: s2_amp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: s2_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: s2_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: n2_amp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: n2_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: n2_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: ebb_direction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: flood_direction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: world_start_time_year
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: world_start_time_month
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: world_start_time_day
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: world_start_time_hour
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: world_start_time_minute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dave_interfaces::msg::StratifiedCurrentDatabase;
    is_plain =
      (
      offsetof(DataType, world_start_time_minute) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
cdr_serialize_key(
  const dave_interfaces::msg::StratifiedCurrentDatabase & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: depths
  {
    cdr << ros_message.depths;
  }

  // Member: velocities
  {
    size_t size = ros_message.velocities.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.velocities[i],
        cdr);
    }
  }

  // Member: time_gmt_year
  {
    cdr << ros_message.time_gmt_year;
  }

  // Member: time_gmt_month
  {
    cdr << ros_message.time_gmt_month;
  }

  // Member: time_gmt_day
  {
    cdr << ros_message.time_gmt_day;
  }

  // Member: time_gmt_hour
  {
    cdr << ros_message.time_gmt_hour;
  }

  // Member: time_gmt_minute
  {
    cdr << ros_message.time_gmt_minute;
  }

  // Member: tidevelocities
  {
    cdr << ros_message.tidevelocities;
  }

  // Member: tideconstituents
  cdr << (ros_message.tideconstituents ? true : false);

  // Member: m2_amp
  cdr << ros_message.m2_amp;

  // Member: m2_phase
  cdr << ros_message.m2_phase;

  // Member: m2_speed
  cdr << ros_message.m2_speed;

  // Member: s2_amp
  cdr << ros_message.s2_amp;

  // Member: s2_phase
  cdr << ros_message.s2_phase;

  // Member: s2_speed
  cdr << ros_message.s2_speed;

  // Member: n2_amp
  cdr << ros_message.n2_amp;

  // Member: n2_phase
  cdr << ros_message.n2_phase;

  // Member: n2_speed
  cdr << ros_message.n2_speed;

  // Member: ebb_direction
  cdr << ros_message.ebb_direction;

  // Member: flood_direction
  cdr << ros_message.flood_direction;

  // Member: world_start_time_year
  cdr << ros_message.world_start_time_year;

  // Member: world_start_time_month
  cdr << ros_message.world_start_time_month;

  // Member: world_start_time_day
  cdr << ros_message.world_start_time_day;

  // Member: world_start_time_hour
  cdr << ros_message.world_start_time_hour;

  // Member: world_start_time_minute
  cdr << ros_message.world_start_time_minute;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
get_serialized_size_key(
  const dave_interfaces::msg::StratifiedCurrentDatabase & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: depths
  {
    size_t array_size = ros_message.depths.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.depths[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: velocities
  {
    size_t array_size = ros_message.velocities.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.velocities[index], current_alignment);
    }
  }

  // Member: time_gmt_year
  {
    size_t array_size = ros_message.time_gmt_year.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.time_gmt_year[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: time_gmt_month
  {
    size_t array_size = ros_message.time_gmt_month.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.time_gmt_month[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: time_gmt_day
  {
    size_t array_size = ros_message.time_gmt_day.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.time_gmt_day[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: time_gmt_hour
  {
    size_t array_size = ros_message.time_gmt_hour.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.time_gmt_hour[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: time_gmt_minute
  {
    size_t array_size = ros_message.time_gmt_minute.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.time_gmt_minute[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tidevelocities
  {
    size_t array_size = ros_message.tidevelocities.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tidevelocities[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tideconstituents
  {
    size_t item_size = sizeof(ros_message.tideconstituents);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m2_amp
  {
    size_t item_size = sizeof(ros_message.m2_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m2_phase
  {
    size_t item_size = sizeof(ros_message.m2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m2_speed
  {
    size_t item_size = sizeof(ros_message.m2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: s2_amp
  {
    size_t item_size = sizeof(ros_message.s2_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: s2_phase
  {
    size_t item_size = sizeof(ros_message.s2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: s2_speed
  {
    size_t item_size = sizeof(ros_message.s2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: n2_amp
  {
    size_t item_size = sizeof(ros_message.n2_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: n2_phase
  {
    size_t item_size = sizeof(ros_message.n2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: n2_speed
  {
    size_t item_size = sizeof(ros_message.n2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ebb_direction
  {
    size_t item_size = sizeof(ros_message.ebb_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: flood_direction
  {
    size_t item_size = sizeof(ros_message.flood_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: world_start_time_year
  {
    size_t item_size = sizeof(ros_message.world_start_time_year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: world_start_time_month
  {
    size_t item_size = sizeof(ros_message.world_start_time_month);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: world_start_time_day
  {
    size_t item_size = sizeof(ros_message.world_start_time_day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: world_start_time_hour
  {
    size_t item_size = sizeof(ros_message.world_start_time_hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: world_start_time_minute
  {
    size_t item_size = sizeof(ros_message.world_start_time_minute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
max_serialized_size_key_StratifiedCurrentDatabase(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: depths
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: time_gmt_year
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: time_gmt_month
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: time_gmt_day
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: time_gmt_hour
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: time_gmt_minute
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: tidevelocities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tideconstituents
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: m2_amp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m2_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m2_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: s2_amp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: s2_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: s2_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: n2_amp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: n2_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: n2_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ebb_direction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: flood_direction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: world_start_time_year
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: world_start_time_month
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: world_start_time_day
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: world_start_time_hour
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: world_start_time_minute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dave_interfaces::msg::StratifiedCurrentDatabase;
    is_plain =
      (
      offsetof(DataType, world_start_time_minute) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _StratifiedCurrentDatabase__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dave_interfaces::msg::StratifiedCurrentDatabase *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StratifiedCurrentDatabase__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dave_interfaces::msg::StratifiedCurrentDatabase *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StratifiedCurrentDatabase__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dave_interfaces::msg::StratifiedCurrentDatabase *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StratifiedCurrentDatabase__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StratifiedCurrentDatabase(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StratifiedCurrentDatabase__callbacks = {
  "dave_interfaces::msg",
  "StratifiedCurrentDatabase",
  _StratifiedCurrentDatabase__cdr_serialize,
  _StratifiedCurrentDatabase__cdr_deserialize,
  _StratifiedCurrentDatabase__get_serialized_size,
  _StratifiedCurrentDatabase__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _StratifiedCurrentDatabase__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StratifiedCurrentDatabase__callbacks,
  get_message_typesupport_handle_function,
  &dave_interfaces__msg__StratifiedCurrentDatabase__get_type_hash,
  &dave_interfaces__msg__StratifiedCurrentDatabase__get_type_description,
  &dave_interfaces__msg__StratifiedCurrentDatabase__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dave_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dave_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<dave_interfaces::msg::StratifiedCurrentDatabase>()
{
  return &dave_interfaces::msg::typesupport_fastrtps_cpp::_StratifiedCurrentDatabase__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dave_interfaces, msg, StratifiedCurrentDatabase)() {
  return &dave_interfaces::msg::typesupport_fastrtps_cpp::_StratifiedCurrentDatabase__handle;
}

#ifdef __cplusplus
}
#endif
