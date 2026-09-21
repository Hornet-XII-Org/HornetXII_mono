// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dave_interfaces:msg/StratifiedCurrentDatabase.idl
// generated code does not contain a copyright notice

#include "dave_interfaces/msg/detail/stratified_current_database__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dave_interfaces
const rosidl_type_hash_t *
dave_interfaces__msg__StratifiedCurrentDatabase__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x68, 0x9f, 0x10, 0xd8, 0x01, 0xc4, 0xb0,
      0xc6, 0xde, 0xd7, 0x8a, 0xe7, 0x51, 0x02, 0x10,
      0x90, 0x95, 0x4f, 0xef, 0xf7, 0x5a, 0x7e, 0xd9,
      0x51, 0x37, 0x3a, 0x9d, 0x08, 0x36, 0x19, 0x53,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char dave_interfaces__msg__StratifiedCurrentDatabase__TYPE_NAME[] = "dave_interfaces/msg/StratifiedCurrentDatabase";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__depths[] = "depths";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__velocities[] = "velocities";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__time_gmt_year[] = "time_gmt_year";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__time_gmt_month[] = "time_gmt_month";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__time_gmt_day[] = "time_gmt_day";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__time_gmt_hour[] = "time_gmt_hour";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__time_gmt_minute[] = "time_gmt_minute";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__tidevelocities[] = "tidevelocities";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__tideconstituents[] = "tideconstituents";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__m2_amp[] = "m2_amp";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__m2_phase[] = "m2_phase";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__m2_speed[] = "m2_speed";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__s2_amp[] = "s2_amp";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__s2_phase[] = "s2_phase";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__s2_speed[] = "s2_speed";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__n2_amp[] = "n2_amp";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__n2_phase[] = "n2_phase";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__n2_speed[] = "n2_speed";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__ebb_direction[] = "ebb_direction";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__flood_direction[] = "flood_direction";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__world_start_time_year[] = "world_start_time_year";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__world_start_time_month[] = "world_start_time_month";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__world_start_time_day[] = "world_start_time_day";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__world_start_time_hour[] = "world_start_time_hour";
static char dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__world_start_time_minute[] = "world_start_time_minute";

static rosidl_runtime_c__type_description__Field dave_interfaces__msg__StratifiedCurrentDatabase__FIELDS[] = {
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__depths, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__velocities, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__time_gmt_year, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__time_gmt_month, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__time_gmt_day, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__time_gmt_hour, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__time_gmt_minute, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__tidevelocities, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__tideconstituents, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__m2_amp, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__m2_phase, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__m2_speed, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__s2_amp, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__s2_phase, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__s2_speed, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__n2_amp, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__n2_phase, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__n2_speed, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__ebb_direction, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__flood_direction, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__world_start_time_year, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__world_start_time_month, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__world_start_time_day, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__world_start_time_hour, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__msg__StratifiedCurrentDatabase__FIELD_NAME__world_start_time_minute, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dave_interfaces__msg__StratifiedCurrentDatabase__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dave_interfaces__msg__StratifiedCurrentDatabase__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dave_interfaces__msg__StratifiedCurrentDatabase__TYPE_NAME, 45, 45},
      {dave_interfaces__msg__StratifiedCurrentDatabase__FIELDS, 25, 25},
    },
    {dave_interfaces__msg__StratifiedCurrentDatabase__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Publishes depths and velocities read from the csv database\n"
  "\n"
  "# Depths\n"
  "float32[] depths\n"
  "\n"
  "# Velocities\n"
  "geometry_msgs/Vector3[] velocities\n"
  "\n"
  "# Tide time (GMT)\n"
  "int16[] time_gmt_year\n"
  "int16[] time_gmt_month\n"
  "int16[] time_gmt_day\n"
  "int16[] time_gmt_hour\n"
  "int16[] time_gmt_minute\n"
  "\n"
  "# Tide velocities\n"
  "float32[] tidevelocities\n"
  "\n"
  "# Tide constituents\n"
  "bool tideconstituents\n"
  "float32 m2_amp\n"
  "float32 m2_phase\n"
  "float32 m2_speed\n"
  "float32 s2_amp\n"
  "float32 s2_phase\n"
  "float32 s2_speed\n"
  "float32 n2_amp\n"
  "float32 n2_phase\n"
  "float32 n2_speed\n"
  "\n"
  "# Tide direction\n"
  "float32 ebb_direction\n"
  "float32 flood_direction\n"
  "\n"
  "# World start time (GMT)\n"
  "int16 world_start_time_year\n"
  "int16 world_start_time_month\n"
  "int16 world_start_time_day\n"
  "int16 world_start_time_hour\n"
  "int16 world_start_time_minute\n"
  "\n"
  "# Everything is written in lowercase according to ROS 2 conventions old(v)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dave_interfaces__msg__StratifiedCurrentDatabase__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dave_interfaces__msg__StratifiedCurrentDatabase__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 809, 809},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dave_interfaces__msg__StratifiedCurrentDatabase__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dave_interfaces__msg__StratifiedCurrentDatabase__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
