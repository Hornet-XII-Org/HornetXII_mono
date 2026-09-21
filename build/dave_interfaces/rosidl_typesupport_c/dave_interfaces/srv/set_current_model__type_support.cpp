// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from dave_interfaces:srv/SetCurrentModel.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dave_interfaces/srv/detail/set_current_model__struct.h"
#include "dave_interfaces/srv/detail/set_current_model__type_support.h"
#include "dave_interfaces/srv/detail/set_current_model__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dave_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetCurrentModel_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCurrentModel_Request_type_support_ids_t;

static const _SetCurrentModel_Request_type_support_ids_t _SetCurrentModel_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetCurrentModel_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCurrentModel_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCurrentModel_Request_type_support_symbol_names_t _SetCurrentModel_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dave_interfaces, srv, SetCurrentModel_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dave_interfaces, srv, SetCurrentModel_Request)),
  }
};

typedef struct _SetCurrentModel_Request_type_support_data_t
{
  void * data[2];
} _SetCurrentModel_Request_type_support_data_t;

static _SetCurrentModel_Request_type_support_data_t _SetCurrentModel_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCurrentModel_Request_message_typesupport_map = {
  2,
  "dave_interfaces",
  &_SetCurrentModel_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetCurrentModel_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetCurrentModel_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCurrentModel_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCurrentModel_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dave_interfaces__srv__SetCurrentModel_Request__get_type_hash,
  &dave_interfaces__srv__SetCurrentModel_Request__get_type_description,
  &dave_interfaces__srv__SetCurrentModel_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dave_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dave_interfaces, srv, SetCurrentModel_Request)() {
  return &::dave_interfaces::srv::rosidl_typesupport_c::SetCurrentModel_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dave_interfaces/srv/detail/set_current_model__struct.h"
// already included above
// #include "dave_interfaces/srv/detail/set_current_model__type_support.h"
// already included above
// #include "dave_interfaces/srv/detail/set_current_model__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dave_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetCurrentModel_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCurrentModel_Response_type_support_ids_t;

static const _SetCurrentModel_Response_type_support_ids_t _SetCurrentModel_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetCurrentModel_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCurrentModel_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCurrentModel_Response_type_support_symbol_names_t _SetCurrentModel_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dave_interfaces, srv, SetCurrentModel_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dave_interfaces, srv, SetCurrentModel_Response)),
  }
};

typedef struct _SetCurrentModel_Response_type_support_data_t
{
  void * data[2];
} _SetCurrentModel_Response_type_support_data_t;

static _SetCurrentModel_Response_type_support_data_t _SetCurrentModel_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCurrentModel_Response_message_typesupport_map = {
  2,
  "dave_interfaces",
  &_SetCurrentModel_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetCurrentModel_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetCurrentModel_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCurrentModel_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCurrentModel_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dave_interfaces__srv__SetCurrentModel_Response__get_type_hash,
  &dave_interfaces__srv__SetCurrentModel_Response__get_type_description,
  &dave_interfaces__srv__SetCurrentModel_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dave_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dave_interfaces, srv, SetCurrentModel_Response)() {
  return &::dave_interfaces::srv::rosidl_typesupport_c::SetCurrentModel_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dave_interfaces/srv/detail/set_current_model__struct.h"
// already included above
// #include "dave_interfaces/srv/detail/set_current_model__type_support.h"
// already included above
// #include "dave_interfaces/srv/detail/set_current_model__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dave_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetCurrentModel_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCurrentModel_Event_type_support_ids_t;

static const _SetCurrentModel_Event_type_support_ids_t _SetCurrentModel_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetCurrentModel_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCurrentModel_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCurrentModel_Event_type_support_symbol_names_t _SetCurrentModel_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dave_interfaces, srv, SetCurrentModel_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dave_interfaces, srv, SetCurrentModel_Event)),
  }
};

typedef struct _SetCurrentModel_Event_type_support_data_t
{
  void * data[2];
} _SetCurrentModel_Event_type_support_data_t;

static _SetCurrentModel_Event_type_support_data_t _SetCurrentModel_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCurrentModel_Event_message_typesupport_map = {
  2,
  "dave_interfaces",
  &_SetCurrentModel_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetCurrentModel_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetCurrentModel_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCurrentModel_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCurrentModel_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dave_interfaces__srv__SetCurrentModel_Event__get_type_hash,
  &dave_interfaces__srv__SetCurrentModel_Event__get_type_description,
  &dave_interfaces__srv__SetCurrentModel_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dave_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dave_interfaces, srv, SetCurrentModel_Event)() {
  return &::dave_interfaces::srv::rosidl_typesupport_c::SetCurrentModel_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dave_interfaces/srv/detail/set_current_model__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace dave_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetCurrentModel_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCurrentModel_type_support_ids_t;

static const _SetCurrentModel_type_support_ids_t _SetCurrentModel_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetCurrentModel_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCurrentModel_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCurrentModel_type_support_symbol_names_t _SetCurrentModel_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dave_interfaces, srv, SetCurrentModel)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dave_interfaces, srv, SetCurrentModel)),
  }
};

typedef struct _SetCurrentModel_type_support_data_t
{
  void * data[2];
} _SetCurrentModel_type_support_data_t;

static _SetCurrentModel_type_support_data_t _SetCurrentModel_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCurrentModel_service_typesupport_map = {
  2,
  "dave_interfaces",
  &_SetCurrentModel_service_typesupport_ids.typesupport_identifier[0],
  &_SetCurrentModel_service_typesupport_symbol_names.symbol_name[0],
  &_SetCurrentModel_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetCurrentModel_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCurrentModel_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetCurrentModel_Request_message_type_support_handle,
  &SetCurrentModel_Response_message_type_support_handle,
  &SetCurrentModel_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dave_interfaces,
    srv,
    SetCurrentModel
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dave_interfaces,
    srv,
    SetCurrentModel
  ),
  &dave_interfaces__srv__SetCurrentModel__get_type_hash,
  &dave_interfaces__srv__SetCurrentModel__get_type_description,
  &dave_interfaces__srv__SetCurrentModel__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dave_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, dave_interfaces, srv, SetCurrentModel)() {
  return &::dave_interfaces::srv::rosidl_typesupport_c::SetCurrentModel_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
