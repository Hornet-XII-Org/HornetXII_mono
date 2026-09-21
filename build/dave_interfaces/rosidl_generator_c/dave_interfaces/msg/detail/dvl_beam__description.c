// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dave_interfaces:msg/DVLBeam.idl
// generated code does not contain a copyright notice

#include "dave_interfaces/msg/detail/dvl_beam__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dave_interfaces
const rosidl_type_hash_t *
dave_interfaces__msg__DVLBeam__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x13, 0x9a, 0xce, 0xdb, 0xa6, 0x01, 0xfd,
      0x84, 0xf4, 0x71, 0x51, 0x3e, 0x4e, 0x7e, 0xca,
      0x73, 0xd8, 0xee, 0xdd, 0xdd, 0xd6, 0x21, 0x67,
      0x12, 0x6e, 0x33, 0x0d, 0xac, 0x5b, 0x61, 0xb5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/twist__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Twist__EXPECTED_HASH = {1, {
    0x9c, 0x45, 0xbf, 0x16, 0xfe, 0x09, 0x83, 0xd8,
    0x0e, 0x3c, 0xfe, 0x75, 0x0d, 0x68, 0x35, 0x84,
    0x3d, 0x26, 0x5a, 0x9a, 0x6c, 0x46, 0xbd, 0x2e,
    0x60, 0x9f, 0xcd, 0xdd, 0xe6, 0xfb, 0x8d, 0x2a,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__TwistWithCovariance__EXPECTED_HASH = {1, {
    0x49, 0xf5, 0x74, 0xf0, 0x33, 0xf0, 0x95, 0xd8,
    0xb6, 0xcd, 0x1b, 0xea, 0xca, 0x5c, 0xa7, 0x92,
    0x5e, 0x29, 0x6e, 0x84, 0xaf, 0x17, 0x16, 0xd1,
    0x6c, 0x89, 0xd3, 0x8b, 0x05, 0x9c, 0x8c, 0x18,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char dave_interfaces__msg__DVLBeam__TYPE_NAME[] = "dave_interfaces/msg/DVLBeam";
static char geometry_msgs__msg__Twist__TYPE_NAME[] = "geometry_msgs/msg/Twist";
static char geometry_msgs__msg__TwistWithCovariance__TYPE_NAME[] = "geometry_msgs/msg/TwistWithCovariance";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char dave_interfaces__msg__DVLBeam__FIELD_NAME__id[] = "id";
static char dave_interfaces__msg__DVLBeam__FIELD_NAME__reference[] = "reference";
static char dave_interfaces__msg__DVLBeam__FIELD_NAME__range[] = "range";
static char dave_interfaces__msg__DVLBeam__FIELD_NAME__locked[] = "locked";
static char dave_interfaces__msg__DVLBeam__FIELD_NAME__velocity[] = "velocity";

static rosidl_runtime_c__type_description__Field dave_interfaces__msg__DVLBeam__FIELDS[] = {
  {
    {dave_interfaces__msg__DVLBeam__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__DVLBeam__FIELD_NAME__reference, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__DVLBeam__FIELD_NAME__range, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__DVLBeam__FIELD_NAME__locked, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__DVLBeam__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__TwistWithCovariance__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dave_interfaces__msg__DVLBeam__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__TwistWithCovariance__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dave_interfaces__msg__DVLBeam__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dave_interfaces__msg__DVLBeam__TYPE_NAME, 27, 27},
      {dave_interfaces__msg__DVLBeam__FIELDS, 5, 5},
    },
    {dave_interfaces__msg__DVLBeam__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__TwistWithCovariance__EXPECTED_HASH, geometry_msgs__msg__TwistWithCovariance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__TwistWithCovariance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 id\n"
  "string reference\n"
  "float64 range\n"
  "bool locked\n"
  "geometry_msgs/TwistWithCovariance velocity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dave_interfaces__msg__DVLBeam__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dave_interfaces__msg__DVLBeam__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 95, 95},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dave_interfaces__msg__DVLBeam__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dave_interfaces__msg__DVLBeam__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__TwistWithCovariance__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
