// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dave_interfaces:srv/GetCurrentModel.idl
// generated code does not contain a copyright notice

#include "dave_interfaces/srv/detail/get_current_model__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dave_interfaces
const rosidl_type_hash_t *
dave_interfaces__srv__GetCurrentModel__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x92, 0x7d, 0x3a, 0xa8, 0x47, 0xce, 0x01,
      0x92, 0x01, 0x39, 0x66, 0xb6, 0xe6, 0x4f, 0xdc,
      0x46, 0x6d, 0xc9, 0x7b, 0x49, 0xb2, 0x03, 0x76,
      0xd7, 0x09, 0xfb, 0x64, 0x25, 0x54, 0x9a, 0xb8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dave_interfaces
const rosidl_type_hash_t *
dave_interfaces__srv__GetCurrentModel_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0x32, 0xfc, 0x0b, 0xf0, 0x01, 0x26, 0x2f,
      0xb5, 0x0d, 0x46, 0x45, 0xe3, 0x56, 0x5d, 0xed,
      0x79, 0xb6, 0x83, 0x33, 0x59, 0x35, 0xe0, 0x2b,
      0x04, 0x15, 0x3a, 0x34, 0xbc, 0xd6, 0x26, 0xf6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dave_interfaces
const rosidl_type_hash_t *
dave_interfaces__srv__GetCurrentModel_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0x66, 0x1c, 0x51, 0x70, 0x99, 0x60, 0xeb,
      0x49, 0x59, 0xa4, 0xa4, 0xb4, 0x95, 0xfc, 0x84,
      0x30, 0x6f, 0x06, 0xf6, 0xc1, 0xed, 0x4c, 0x94,
      0xae, 0x0a, 0x41, 0x9c, 0xa5, 0xcc, 0x6a, 0xcf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dave_interfaces
const rosidl_type_hash_t *
dave_interfaces__srv__GetCurrentModel_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0xaa, 0xaa, 0xce, 0x45, 0x8a, 0xbf, 0x28,
      0xbb, 0xc0, 0x36, 0x73, 0x1f, 0x6d, 0x57, 0xf3,
      0x25, 0xb4, 0xd9, 0x15, 0x61, 0xc6, 0x6c, 0x5b,
      0x18, 0x1f, 0x61, 0xb7, 0x14, 0x3b, 0x4f, 0x6e,
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

static char dave_interfaces__srv__GetCurrentModel__TYPE_NAME[] = "dave_interfaces/srv/GetCurrentModel";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dave_interfaces__srv__GetCurrentModel_Event__TYPE_NAME[] = "dave_interfaces/srv/GetCurrentModel_Event";
static char dave_interfaces__srv__GetCurrentModel_Request__TYPE_NAME[] = "dave_interfaces/srv/GetCurrentModel_Request";
static char dave_interfaces__srv__GetCurrentModel_Response__TYPE_NAME[] = "dave_interfaces/srv/GetCurrentModel_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dave_interfaces__srv__GetCurrentModel__FIELD_NAME__request_message[] = "request_message";
static char dave_interfaces__srv__GetCurrentModel__FIELD_NAME__response_message[] = "response_message";
static char dave_interfaces__srv__GetCurrentModel__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dave_interfaces__srv__GetCurrentModel__FIELDS[] = {
  {
    {dave_interfaces__srv__GetCurrentModel__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dave_interfaces__srv__GetCurrentModel_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dave_interfaces__srv__GetCurrentModel_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dave_interfaces__srv__GetCurrentModel_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dave_interfaces__srv__GetCurrentModel__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dave_interfaces__srv__GetCurrentModel__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dave_interfaces__srv__GetCurrentModel__TYPE_NAME, 35, 35},
      {dave_interfaces__srv__GetCurrentModel__FIELDS, 3, 3},
    },
    {dave_interfaces__srv__GetCurrentModel__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dave_interfaces__srv__GetCurrentModel_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dave_interfaces__srv__GetCurrentModel_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dave_interfaces__srv__GetCurrentModel_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dave_interfaces__srv__GetCurrentModel_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field dave_interfaces__srv__GetCurrentModel_Request__FIELDS[] = {
  {
    {dave_interfaces__srv__GetCurrentModel_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dave_interfaces__srv__GetCurrentModel_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dave_interfaces__srv__GetCurrentModel_Request__TYPE_NAME, 43, 43},
      {dave_interfaces__srv__GetCurrentModel_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dave_interfaces__srv__GetCurrentModel_Response__FIELD_NAME__mean[] = "mean";
static char dave_interfaces__srv__GetCurrentModel_Response__FIELD_NAME__min[] = "min";
static char dave_interfaces__srv__GetCurrentModel_Response__FIELD_NAME__max[] = "max";
static char dave_interfaces__srv__GetCurrentModel_Response__FIELD_NAME__noise[] = "noise";
static char dave_interfaces__srv__GetCurrentModel_Response__FIELD_NAME__mu[] = "mu";

static rosidl_runtime_c__type_description__Field dave_interfaces__srv__GetCurrentModel_Response__FIELDS[] = {
  {
    {dave_interfaces__srv__GetCurrentModel_Response__FIELD_NAME__mean, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel_Response__FIELD_NAME__min, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel_Response__FIELD_NAME__max, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel_Response__FIELD_NAME__noise, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel_Response__FIELD_NAME__mu, 2, 2},
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
dave_interfaces__srv__GetCurrentModel_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dave_interfaces__srv__GetCurrentModel_Response__TYPE_NAME, 44, 44},
      {dave_interfaces__srv__GetCurrentModel_Response__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dave_interfaces__srv__GetCurrentModel_Event__FIELD_NAME__info[] = "info";
static char dave_interfaces__srv__GetCurrentModel_Event__FIELD_NAME__request[] = "request";
static char dave_interfaces__srv__GetCurrentModel_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dave_interfaces__srv__GetCurrentModel_Event__FIELDS[] = {
  {
    {dave_interfaces__srv__GetCurrentModel_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dave_interfaces__srv__GetCurrentModel_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dave_interfaces__srv__GetCurrentModel_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dave_interfaces__srv__GetCurrentModel_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {dave_interfaces__srv__GetCurrentModel_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dave_interfaces__srv__GetCurrentModel_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dave_interfaces__srv__GetCurrentModel_Event__TYPE_NAME, 41, 41},
      {dave_interfaces__srv__GetCurrentModel_Event__FIELDS, 3, 3},
    },
    {dave_interfaces__srv__GetCurrentModel_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dave_interfaces__srv__GetCurrentModel_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dave_interfaces__srv__GetCurrentModel_Response__get_type_description(NULL)->type_description.fields;
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
  "---\n"
  "float64 mean\n"
  "float64 min\n"
  "float64 max\n"
  "float64 noise\n"
  "float64 mu";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dave_interfaces__srv__GetCurrentModel__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dave_interfaces__srv__GetCurrentModel__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 685, 685},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dave_interfaces__srv__GetCurrentModel_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dave_interfaces__srv__GetCurrentModel_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dave_interfaces__srv__GetCurrentModel_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dave_interfaces__srv__GetCurrentModel_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dave_interfaces__srv__GetCurrentModel_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dave_interfaces__srv__GetCurrentModel_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dave_interfaces__srv__GetCurrentModel__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dave_interfaces__srv__GetCurrentModel__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dave_interfaces__srv__GetCurrentModel_Event__get_individual_type_description_source(NULL);
    sources[3] = *dave_interfaces__srv__GetCurrentModel_Request__get_individual_type_description_source(NULL);
    sources[4] = *dave_interfaces__srv__GetCurrentModel_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dave_interfaces__srv__GetCurrentModel_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dave_interfaces__srv__GetCurrentModel_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dave_interfaces__srv__GetCurrentModel_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dave_interfaces__srv__GetCurrentModel_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dave_interfaces__srv__GetCurrentModel_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dave_interfaces__srv__GetCurrentModel_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dave_interfaces__srv__GetCurrentModel_Request__get_individual_type_description_source(NULL);
    sources[3] = *dave_interfaces__srv__GetCurrentModel_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
