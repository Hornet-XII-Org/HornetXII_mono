// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dave_interfaces:msg/DVLBeam.idl
// generated code does not contain a copyright notice
#include "dave_interfaces/msg/detail/dvl_beam__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dave_interfaces/msg/detail/dvl_beam__functions.h"
#include "dave_interfaces/msg/detail/dvl_beam__struct.hpp"

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
  const geometry_msgs::msg::TwistWithCovariance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::TwistWithCovariance &);
size_t get_serialized_size(
  const geometry_msgs::msg::TwistWithCovariance &,
  size_t current_alignment);
size_t
max_serialized_size_TwistWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const geometry_msgs::msg::TwistWithCovariance &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const geometry_msgs::msg::TwistWithCovariance &,
  size_t current_alignment);
size_t
max_serialized_size_key_TwistWithCovariance(
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
  const dave_interfaces::msg::DVLBeam & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;

  // Member: reference
  cdr << ros_message.reference;

  // Member: range
  cdr << ros_message.range;

  // Member: locked
  cdr << (ros_message.locked ? true : false);

  // Member: velocity
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.velocity,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dave_interfaces::msg::DVLBeam & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: reference
  cdr >> ros_message.reference;

  // Member: range
  cdr >> ros_message.range;

  // Member: locked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.locked = tmp ? true : false;
  }

  // Member: velocity
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.velocity);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
get_serialized_size(
  const dave_interfaces::msg::DVLBeam & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: reference
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.reference.size() + 1);

  // Member: range
  {
    size_t item_size = sizeof(ros_message.range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: locked
  {
    size_t item_size = sizeof(ros_message.locked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: velocity
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.velocity, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
max_serialized_size_DVLBeam(
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

  // Member: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: reference
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: range
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: locked
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TwistWithCovariance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dave_interfaces::msg::DVLBeam;
    is_plain =
      (
      offsetof(DataType, velocity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
cdr_serialize_key(
  const dave_interfaces::msg::DVLBeam & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;

  // Member: reference
  cdr << ros_message.reference;

  // Member: range
  cdr << ros_message.range;

  // Member: locked
  cdr << (ros_message.locked ? true : false);

  // Member: velocity
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.velocity,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
get_serialized_size_key(
  const dave_interfaces::msg::DVLBeam & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: reference
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.reference.size() + 1);

  // Member: range
  {
    size_t item_size = sizeof(ros_message.range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: locked
  {
    size_t item_size = sizeof(ros_message.locked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: velocity
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.velocity, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dave_interfaces
max_serialized_size_key_DVLBeam(
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

  // Member: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reference
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: range
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: locked
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_TwistWithCovariance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dave_interfaces::msg::DVLBeam;
    is_plain =
      (
      offsetof(DataType, velocity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _DVLBeam__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dave_interfaces::msg::DVLBeam *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DVLBeam__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dave_interfaces::msg::DVLBeam *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DVLBeam__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dave_interfaces::msg::DVLBeam *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DVLBeam__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DVLBeam(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DVLBeam__callbacks = {
  "dave_interfaces::msg",
  "DVLBeam",
  _DVLBeam__cdr_serialize,
  _DVLBeam__cdr_deserialize,
  _DVLBeam__get_serialized_size,
  _DVLBeam__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DVLBeam__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DVLBeam__callbacks,
  get_message_typesupport_handle_function,
  &dave_interfaces__msg__DVLBeam__get_type_hash,
  &dave_interfaces__msg__DVLBeam__get_type_description,
  &dave_interfaces__msg__DVLBeam__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dave_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dave_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<dave_interfaces::msg::DVLBeam>()
{
  return &dave_interfaces::msg::typesupport_fastrtps_cpp::_DVLBeam__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dave_interfaces, msg, DVLBeam)() {
  return &dave_interfaces::msg::typesupport_fastrtps_cpp::_DVLBeam__handle;
}

#ifdef __cplusplus
}
#endif
