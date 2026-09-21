// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dave_interfaces:msg/DVLTarget.idl
// generated code does not contain a copyright notice

#include "dave_interfaces/msg/detail/dvl_target__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dave_interfaces
const rosidl_type_hash_t *
dave_interfaces__msg__DVLTarget__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x52, 0x4a, 0x5c, 0x93, 0xef, 0x0d, 0xca, 0x7b,
      0xd7, 0xef, 0x00, 0xd1, 0x56, 0xe8, 0x71, 0x56,
      0xbd, 0x46, 0x27, 0x72, 0xde, 0xba, 0x76, 0x56,
      0x2f, 0xc7, 0xa8, 0x25, 0x61, 0xcf, 0xc8, 0x35,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dave_interfaces__msg__DVLTarget__TYPE_NAME[] = "dave_interfaces/msg/DVLTarget";

// Define type names, field names, and default values
static char dave_interfaces__msg__DVLTarget__FIELD_NAME__type[] = "type";
static char dave_interfaces__msg__DVLTarget__FIELD_NAME__range[] = "range";

static rosidl_runtime_c__type_description__Field dave_interfaces__msg__DVLTarget__FIELDS[] = {
  {
    {dave_interfaces__msg__DVLTarget__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__DVLTarget__FIELD_NAME__range, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dave_interfaces__msg__DVLTarget__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dave_interfaces__msg__DVLTarget__TYPE_NAME, 29, 29},
      {dave_interfaces__msg__DVLTarget__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string type\n"
  "float64 range";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dave_interfaces__msg__DVLTarget__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dave_interfaces__msg__DVLTarget__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 26, 26},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dave_interfaces__msg__DVLTarget__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dave_interfaces__msg__DVLTarget__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
