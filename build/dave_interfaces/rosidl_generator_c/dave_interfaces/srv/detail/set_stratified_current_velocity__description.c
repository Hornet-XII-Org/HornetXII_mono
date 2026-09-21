// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dave_interfaces:srv/SetStratifiedCurrentVelocity.idl
// generated code does not contain a copyright notice

#include "dave_interfaces/srv/detail/set_stratified_current_velocity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dave_interfaces
const rosidl_type_hash_t *
dave_interfaces__srv__SetStratifiedCurrentVelocity__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfc, 0x33, 0x53, 0x71, 0xd1, 0x58, 0xe2, 0xcf,
      0xbc, 0x43, 0x59, 0x8c, 0x5b, 0x2b, 0xc0, 0xae,
      0xb8, 0xc1, 0x58, 0x3a, 0x5e, 0x8c, 0x89, 0xdb,
      0xb4, 0xf2, 0x9b, 0xe8, 0xb7, 0x96, 0xf5, 0xdc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dave_interfaces
const rosidl_type_hash_t *
dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0x07, 0xab, 0xb9, 0x6c, 0x6d, 0x3d, 0x5a,
      0xf2, 0xb2, 0x27, 0xed, 0xed, 0xf3, 0x1b, 0x5b,
      0x31, 0xe2, 0x42, 0xb7, 0x89, 0x1e, 0x6c, 0x59,
      0x1b, 0x9a, 0x54, 0x41, 0xe5, 0x71, 0xc8, 0x65,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dave_interfaces
const rosidl_type_hash_t *
dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0x04, 0xd9, 0x79, 0xe1, 0xb2, 0xbf, 0x1e,
      0xc0, 0x02, 0x1e, 0xea, 0xc3, 0xf5, 0xff, 0xc1,
      0xd8, 0x62, 0xae, 0xfc, 0x93, 0xbe, 0x69, 0x64,
      0xf1, 0xae, 0x2a, 0xc0, 0xdf, 0xd9, 0x0d, 0x80,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dave_interfaces
const rosidl_type_hash_t *
dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0xbc, 0x45, 0x40, 0xf1, 0x49, 0xc2, 0xe6,
      0x0a, 0xd7, 0xc4, 0x7d, 0x74, 0x63, 0xaf, 0x7c,
      0x60, 0xae, 0xc9, 0x4b, 0xaf, 0xe3, 0xd4, 0x88,
      0xf1, 0x57, 0x0b, 0xe2, 0x3a, 0x20, 0x23, 0xb7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char dave_interfaces__srv__SetStratifiedCurrentVelocity__TYPE_NAME[] = "dave_interfaces/srv/SetStratifiedCurrentVelocity";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__TYPE_NAME[] = "dave_interfaces/srv/SetStratifiedCurrentVelocity_Event";
static char dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__TYPE_NAME[] = "dave_interfaces/srv/SetStratifiedCurrentVelocity_Request";
static char dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__TYPE_NAME[] = "dave_interfaces/srv/SetStratifiedCurrentVelocity_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dave_interfaces__srv__SetStratifiedCurrentVelocity__FIELD_NAME__request_message[] = "request_message";
static char dave_interfaces__srv__SetStratifiedCurrentVelocity__FIELD_NAME__response_message[] = "response_message";
static char dave_interfaces__srv__SetStratifiedCurrentVelocity__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dave_interfaces__srv__SetStratifiedCurrentVelocity__FIELDS[] = {
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dave_interfaces__srv__SetStratifiedCurrentVelocity__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dave_interfaces__srv__SetStratifiedCurrentVelocity__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dave_interfaces__srv__SetStratifiedCurrentVelocity__TYPE_NAME, 48, 48},
      {dave_interfaces__srv__SetStratifiedCurrentVelocity__FIELDS, 3, 3},
    },
    {dave_interfaces__srv__SetStratifiedCurrentVelocity__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__FIELD_NAME__layer[] = "layer";
static char dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__FIELD_NAME__velocity[] = "velocity";
static char dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__FIELD_NAME__horizontal_angle[] = "horizontal_angle";
static char dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__FIELD_NAME__vertical_angle[] = "vertical_angle";

static rosidl_runtime_c__type_description__Field dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__FIELDS[] = {
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__FIELD_NAME__layer, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__FIELD_NAME__horizontal_angle, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__FIELD_NAME__vertical_angle, 14, 14},
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
dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__TYPE_NAME, 56, 56},
      {dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__FIELDS[] = {
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__TYPE_NAME, 57, 57},
      {dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__FIELD_NAME__info[] = "info";
static char dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__FIELD_NAME__request[] = "request";
static char dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__FIELDS[] = {
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__TYPE_NAME, 54, 54},
      {dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__FIELDS, 3, 3},
    },
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Copyright (c) 2024 The dave Simulator Authors.\n"
  "# All rights reserved.\n"
  "#\n"
  "# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
  "# you may not use this file except in compliance with the License.\n"
  "# You may obtain a copy of the License at\n"
  "#\n"
  "#     http://www.apache.org/licenses/LICENSE-2.0\n"
  "#\n"
  "# Unless required by applicable law or agreed to in writing, software\n"
  "# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
  "# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
  "# See the License for the specific language governing permissions and\n"
  "# limitations under the License.\n"
  "\n"
  "uint16 layer\n"
  "float64 velocity\n"
  "float64 horizontal_angle\n"
  "float64 vertical_angle\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dave_interfaces__srv__SetStratifiedCurrentVelocity__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity__TYPE_NAME, 48, 48},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 714, 714},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__TYPE_NAME, 57, 57},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dave_interfaces__srv__SetStratifiedCurrentVelocity__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dave_interfaces__srv__SetStratifiedCurrentVelocity__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__get_individual_type_description_source(NULL);
    sources[3] = *dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__get_individual_type_description_source(NULL);
    sources[4] = *dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dave_interfaces__srv__SetStratifiedCurrentVelocity_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__get_individual_type_description_source(NULL);
    sources[3] = *dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
