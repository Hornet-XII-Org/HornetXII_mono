// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dave_interfaces:msg/DVLBeam.idl
// generated code does not contain a copyright notice
#include "dave_interfaces/msg/detail/dvl_beam__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dave_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dave_interfaces/msg/detail/dvl_beam__struct.h"
#include "dave_interfaces/msg/detail/dvl_beam__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"  // velocity
#include "rosidl_runtime_c/string.h"  // reference
#include "rosidl_runtime_c/string_functions.h"  // reference

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dave_interfaces
bool cdr_serialize_geometry_msgs__msg__TwistWithCovariance(
  const geometry_msgs__msg__TwistWithCovariance * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dave_interfaces
bool cdr_deserialize_geometry_msgs__msg__TwistWithCovariance(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__TwistWithCovariance * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dave_interfaces
size_t get_serialized_size_geometry_msgs__msg__TwistWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dave_interfaces
size_t max_serialized_size_geometry_msgs__msg__TwistWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dave_interfaces
bool cdr_serialize_key_geometry_msgs__msg__TwistWithCovariance(
  const geometry_msgs__msg__TwistWithCovariance * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dave_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__TwistWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dave_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__TwistWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dave_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistWithCovariance)();


using _DVLBeam__ros_msg_type = dave_interfaces__msg__DVLBeam;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
bool cdr_serialize_dave_interfaces__msg__DVLBeam(
  const dave_interfaces__msg__DVLBeam * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: reference
  {
    const rosidl_runtime_c__String * str = &ros_message->reference;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: range
  {
    cdr << ros_message->range;
  }

  // Field name: locked
  {
    cdr << (ros_message->locked ? true : false);
  }

  // Field name: velocity
  {
    cdr_serialize_geometry_msgs__msg__TwistWithCovariance(
      &ros_message->velocity, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
bool cdr_deserialize_dave_interfaces__msg__DVLBeam(
  eprosima::fastcdr::Cdr & cdr,
  dave_interfaces__msg__DVLBeam * ros_message)
{
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: reference
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reference.data) {
      rosidl_runtime_c__String__init(&ros_message->reference);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reference,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reference'\n");
      return false;
    }
  }

  // Field name: range
  {
    cdr >> ros_message->range;
  }

  // Field name: locked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->locked = tmp ? true : false;
  }

  // Field name: velocity
  {
    cdr_deserialize_geometry_msgs__msg__TwistWithCovariance(cdr, &ros_message->velocity);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
size_t get_serialized_size_dave_interfaces__msg__DVLBeam(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DVLBeam__ros_msg_type * ros_message = static_cast<const _DVLBeam__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reference
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reference.size + 1);

  // Field name: range
  {
    size_t item_size = sizeof(ros_message->range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: locked
  {
    size_t item_size = sizeof(ros_message->locked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  current_alignment += get_serialized_size_geometry_msgs__msg__TwistWithCovariance(
    &(ros_message->velocity), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
size_t max_serialized_size_dave_interfaces__msg__DVLBeam(
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

  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: reference
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

  // Field name: range
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: locked
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__TwistWithCovariance(
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
    using DataType = dave_interfaces__msg__DVLBeam;
    is_plain =
      (
      offsetof(DataType, velocity) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
bool cdr_serialize_key_dave_interfaces__msg__DVLBeam(
  const dave_interfaces__msg__DVLBeam * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: reference
  {
    const rosidl_runtime_c__String * str = &ros_message->reference;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: range
  {
    cdr << ros_message->range;
  }

  // Field name: locked
  {
    cdr << (ros_message->locked ? true : false);
  }

  // Field name: velocity
  {
    cdr_serialize_key_geometry_msgs__msg__TwistWithCovariance(
      &ros_message->velocity, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
size_t get_serialized_size_key_dave_interfaces__msg__DVLBeam(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DVLBeam__ros_msg_type * ros_message = static_cast<const _DVLBeam__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reference
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reference.size + 1);

  // Field name: range
  {
    size_t item_size = sizeof(ros_message->range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: locked
  {
    size_t item_size = sizeof(ros_message->locked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  current_alignment += get_serialized_size_key_geometry_msgs__msg__TwistWithCovariance(
    &(ros_message->velocity), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dave_interfaces
size_t max_serialized_size_key_dave_interfaces__msg__DVLBeam(
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
  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: reference
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

  // Field name: range
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: locked
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__TwistWithCovariance(
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
    using DataType = dave_interfaces__msg__DVLBeam;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const dave_interfaces__msg__DVLBeam * ros_message = static_cast<const dave_interfaces__msg__DVLBeam *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_dave_interfaces__msg__DVLBeam(ros_message, cdr);
}

static bool _DVLBeam__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  dave_interfaces__msg__DVLBeam * ros_message = static_cast<dave_interfaces__msg__DVLBeam *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_dave_interfaces__msg__DVLBeam(cdr, ros_message);
}

static uint32_t _DVLBeam__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dave_interfaces__msg__DVLBeam(
      untyped_ros_message, 0));
}

static size_t _DVLBeam__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dave_interfaces__msg__DVLBeam(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DVLBeam = {
  "dave_interfaces::msg",
  "DVLBeam",
  _DVLBeam__cdr_serialize,
  _DVLBeam__cdr_deserialize,
  _DVLBeam__get_serialized_size,
  _DVLBeam__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DVLBeam__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DVLBeam,
  get_message_typesupport_handle_function,
  &dave_interfaces__msg__DVLBeam__get_type_hash,
  &dave_interfaces__msg__DVLBeam__get_type_description,
  &dave_interfaces__msg__DVLBeam__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dave_interfaces, msg, DVLBeam)() {
  return &_DVLBeam__type_support;
}

#if defined(__cplusplus)
}
#endif
