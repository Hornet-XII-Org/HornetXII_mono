// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dave_interfaces:msg/DVL.idl
// generated code does not contain a copyright notice

#include "dave_interfaces/msg/detail/dvl__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dave_interfaces
const rosidl_type_hash_t *
dave_interfaces__msg__DVL__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0x96, 0xf4, 0x78, 0x6a, 0xa1, 0x54, 0x8a,
      0x8d, 0xa2, 0x0a, 0xf5, 0x00, 0x17, 0x71, 0x18,
      0xf9, 0x13, 0x42, 0x31, 0x56, 0x4f, 0x14, 0x34,
      0x75, 0x46, 0xa4, 0xab, 0xaa, 0xc6, 0x09, 0x84,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "dave_interfaces/msg/detail/dvl_beam__functions.h"
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "dave_interfaces/msg/detail/dvl_target__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "geometry_msgs/msg/detail/twist__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t dave_interfaces__msg__DVLBeam__EXPECTED_HASH = {1, {
    0x12, 0x13, 0x9a, 0xce, 0xdb, 0xa6, 0x01, 0xfd,
    0x84, 0xf4, 0x71, 0x51, 0x3e, 0x4e, 0x7e, 0xca,
    0x73, 0xd8, 0xee, 0xdd, 0xdd, 0xd6, 0x21, 0x67,
    0x12, 0x6e, 0x33, 0x0d, 0xac, 0x5b, 0x61, 0xb5,
  }};
static const rosidl_type_hash_t dave_interfaces__msg__DVLTarget__EXPECTED_HASH = {1, {
    0x52, 0x4a, 0x5c, 0x93, 0xef, 0x0d, 0xca, 0x7b,
    0xd7, 0xef, 0x00, 0xd1, 0x56, 0xe8, 0x71, 0x56,
    0xbd, 0x46, 0x27, 0x72, 0xde, 0xba, 0x76, 0x56,
    0x2f, 0xc7, 0xa8, 0x25, 0x61, 0xcf, 0xc8, 0x35,
  }};
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char dave_interfaces__msg__DVL__TYPE_NAME[] = "dave_interfaces/msg/DVL";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dave_interfaces__msg__DVLBeam__TYPE_NAME[] = "dave_interfaces/msg/DVLBeam";
static char dave_interfaces__msg__DVLTarget__TYPE_NAME[] = "dave_interfaces/msg/DVLTarget";
static char geometry_msgs__msg__Twist__TYPE_NAME[] = "geometry_msgs/msg/Twist";
static char geometry_msgs__msg__TwistWithCovariance__TYPE_NAME[] = "geometry_msgs/msg/TwistWithCovariance";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dave_interfaces__msg__DVL__FIELD_NAME__header[] = "header";
static char dave_interfaces__msg__DVL__FIELD_NAME__type[] = "type";
static char dave_interfaces__msg__DVL__FIELD_NAME__target[] = "target";
static char dave_interfaces__msg__DVL__FIELD_NAME__velocity[] = "velocity";
static char dave_interfaces__msg__DVL__FIELD_NAME__beams[] = "beams";

static rosidl_runtime_c__type_description__Field dave_interfaces__msg__DVL__FIELDS[] = {
  {
    {dave_interfaces__msg__DVL__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__DVL__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__DVL__FIELD_NAME__target, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dave_interfaces__msg__DVLTarget__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__DVL__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__TwistWithCovariance__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__DVL__FIELD_NAME__beams, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {dave_interfaces__msg__DVLBeam__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dave_interfaces__msg__DVL__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__DVLBeam__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__DVLTarget__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
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
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dave_interfaces__msg__DVL__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dave_interfaces__msg__DVL__TYPE_NAME, 23, 23},
      {dave_interfaces__msg__DVL__FIELDS, 5, 5},
    },
    {dave_interfaces__msg__DVL__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dave_interfaces__msg__DVLBeam__EXPECTED_HASH, dave_interfaces__msg__DVLBeam__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = dave_interfaces__msg__DVLBeam__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dave_interfaces__msg__DVLTarget__EXPECTED_HASH, dave_interfaces__msg__DVLTarget__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = dave_interfaces__msg__DVLTarget__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__TwistWithCovariance__EXPECTED_HASH, geometry_msgs__msg__TwistWithCovariance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__TwistWithCovariance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "string type\n"
  "DVLTarget target\n"
  "geometry_msgs/TwistWithCovariance velocity\n"
  "DVLBeam[] beams";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dave_interfaces__msg__DVL__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dave_interfaces__msg__DVL__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 111, 111},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dave_interfaces__msg__DVL__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dave_interfaces__msg__DVL__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dave_interfaces__msg__DVLBeam__get_individual_type_description_source(NULL);
    sources[3] = *dave_interfaces__msg__DVLTarget__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__TwistWithCovariance__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
