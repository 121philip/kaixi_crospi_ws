// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from crospi_interfaces:action/RunTask.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "crospi_interfaces/action/detail/run_task__struct.h"
#include "crospi_interfaces/action/detail/run_task__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace crospi_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunTask_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunTask_Goal_type_support_ids_t;

static const _RunTask_Goal_type_support_ids_t _RunTask_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunTask_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunTask_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunTask_Goal_type_support_symbol_names_t _RunTask_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crospi_interfaces, action, RunTask_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, action, RunTask_Goal)),
  }
};

typedef struct _RunTask_Goal_type_support_data_t
{
  void * data[2];
} _RunTask_Goal_type_support_data_t;

static _RunTask_Goal_type_support_data_t _RunTask_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunTask_Goal_message_typesupport_map = {
  2,
  "crospi_interfaces",
  &_RunTask_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_RunTask_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_RunTask_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunTask_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunTask_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crospi_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crospi_interfaces, action, RunTask_Goal)() {
  return &::crospi_interfaces::action::rosidl_typesupport_c::RunTask_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__type_support.h"
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

namespace crospi_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunTask_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunTask_Result_type_support_ids_t;

static const _RunTask_Result_type_support_ids_t _RunTask_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunTask_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunTask_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunTask_Result_type_support_symbol_names_t _RunTask_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crospi_interfaces, action, RunTask_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, action, RunTask_Result)),
  }
};

typedef struct _RunTask_Result_type_support_data_t
{
  void * data[2];
} _RunTask_Result_type_support_data_t;

static _RunTask_Result_type_support_data_t _RunTask_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunTask_Result_message_typesupport_map = {
  2,
  "crospi_interfaces",
  &_RunTask_Result_message_typesupport_ids.typesupport_identifier[0],
  &_RunTask_Result_message_typesupport_symbol_names.symbol_name[0],
  &_RunTask_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunTask_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunTask_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crospi_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crospi_interfaces, action, RunTask_Result)() {
  return &::crospi_interfaces::action::rosidl_typesupport_c::RunTask_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__type_support.h"
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

namespace crospi_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunTask_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunTask_Feedback_type_support_ids_t;

static const _RunTask_Feedback_type_support_ids_t _RunTask_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunTask_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunTask_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunTask_Feedback_type_support_symbol_names_t _RunTask_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crospi_interfaces, action, RunTask_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, action, RunTask_Feedback)),
  }
};

typedef struct _RunTask_Feedback_type_support_data_t
{
  void * data[2];
} _RunTask_Feedback_type_support_data_t;

static _RunTask_Feedback_type_support_data_t _RunTask_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunTask_Feedback_message_typesupport_map = {
  2,
  "crospi_interfaces",
  &_RunTask_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_RunTask_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_RunTask_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunTask_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunTask_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crospi_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crospi_interfaces, action, RunTask_Feedback)() {
  return &::crospi_interfaces::action::rosidl_typesupport_c::RunTask_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__type_support.h"
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

namespace crospi_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunTask_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunTask_SendGoal_Request_type_support_ids_t;

static const _RunTask_SendGoal_Request_type_support_ids_t _RunTask_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunTask_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunTask_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunTask_SendGoal_Request_type_support_symbol_names_t _RunTask_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crospi_interfaces, action, RunTask_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, action, RunTask_SendGoal_Request)),
  }
};

typedef struct _RunTask_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _RunTask_SendGoal_Request_type_support_data_t;

static _RunTask_SendGoal_Request_type_support_data_t _RunTask_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunTask_SendGoal_Request_message_typesupport_map = {
  2,
  "crospi_interfaces",
  &_RunTask_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RunTask_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RunTask_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunTask_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunTask_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crospi_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crospi_interfaces, action, RunTask_SendGoal_Request)() {
  return &::crospi_interfaces::action::rosidl_typesupport_c::RunTask_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__type_support.h"
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

namespace crospi_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunTask_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunTask_SendGoal_Response_type_support_ids_t;

static const _RunTask_SendGoal_Response_type_support_ids_t _RunTask_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunTask_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunTask_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunTask_SendGoal_Response_type_support_symbol_names_t _RunTask_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crospi_interfaces, action, RunTask_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, action, RunTask_SendGoal_Response)),
  }
};

typedef struct _RunTask_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _RunTask_SendGoal_Response_type_support_data_t;

static _RunTask_SendGoal_Response_type_support_data_t _RunTask_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunTask_SendGoal_Response_message_typesupport_map = {
  2,
  "crospi_interfaces",
  &_RunTask_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RunTask_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RunTask_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunTask_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunTask_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crospi_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crospi_interfaces, action, RunTask_SendGoal_Response)() {
  return &::crospi_interfaces::action::rosidl_typesupport_c::RunTask_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crospi_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunTask_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunTask_SendGoal_type_support_ids_t;

static const _RunTask_SendGoal_type_support_ids_t _RunTask_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunTask_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunTask_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunTask_SendGoal_type_support_symbol_names_t _RunTask_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crospi_interfaces, action, RunTask_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, action, RunTask_SendGoal)),
  }
};

typedef struct _RunTask_SendGoal_type_support_data_t
{
  void * data[2];
} _RunTask_SendGoal_type_support_data_t;

static _RunTask_SendGoal_type_support_data_t _RunTask_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunTask_SendGoal_service_typesupport_map = {
  2,
  "crospi_interfaces",
  &_RunTask_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_RunTask_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_RunTask_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RunTask_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunTask_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crospi_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, crospi_interfaces, action, RunTask_SendGoal)() {
  return &::crospi_interfaces::action::rosidl_typesupport_c::RunTask_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__type_support.h"
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

namespace crospi_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunTask_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunTask_GetResult_Request_type_support_ids_t;

static const _RunTask_GetResult_Request_type_support_ids_t _RunTask_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunTask_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunTask_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunTask_GetResult_Request_type_support_symbol_names_t _RunTask_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crospi_interfaces, action, RunTask_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, action, RunTask_GetResult_Request)),
  }
};

typedef struct _RunTask_GetResult_Request_type_support_data_t
{
  void * data[2];
} _RunTask_GetResult_Request_type_support_data_t;

static _RunTask_GetResult_Request_type_support_data_t _RunTask_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunTask_GetResult_Request_message_typesupport_map = {
  2,
  "crospi_interfaces",
  &_RunTask_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RunTask_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RunTask_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunTask_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunTask_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crospi_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crospi_interfaces, action, RunTask_GetResult_Request)() {
  return &::crospi_interfaces::action::rosidl_typesupport_c::RunTask_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__type_support.h"
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

namespace crospi_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunTask_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunTask_GetResult_Response_type_support_ids_t;

static const _RunTask_GetResult_Response_type_support_ids_t _RunTask_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunTask_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunTask_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunTask_GetResult_Response_type_support_symbol_names_t _RunTask_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crospi_interfaces, action, RunTask_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, action, RunTask_GetResult_Response)),
  }
};

typedef struct _RunTask_GetResult_Response_type_support_data_t
{
  void * data[2];
} _RunTask_GetResult_Response_type_support_data_t;

static _RunTask_GetResult_Response_type_support_data_t _RunTask_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunTask_GetResult_Response_message_typesupport_map = {
  2,
  "crospi_interfaces",
  &_RunTask_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RunTask_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RunTask_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunTask_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunTask_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crospi_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crospi_interfaces, action, RunTask_GetResult_Response)() {
  return &::crospi_interfaces::action::rosidl_typesupport_c::RunTask_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crospi_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunTask_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunTask_GetResult_type_support_ids_t;

static const _RunTask_GetResult_type_support_ids_t _RunTask_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunTask_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunTask_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunTask_GetResult_type_support_symbol_names_t _RunTask_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crospi_interfaces, action, RunTask_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, action, RunTask_GetResult)),
  }
};

typedef struct _RunTask_GetResult_type_support_data_t
{
  void * data[2];
} _RunTask_GetResult_type_support_data_t;

static _RunTask_GetResult_type_support_data_t _RunTask_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunTask_GetResult_service_typesupport_map = {
  2,
  "crospi_interfaces",
  &_RunTask_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_RunTask_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_RunTask_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RunTask_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunTask_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crospi_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, crospi_interfaces, action, RunTask_GetResult)() {
  return &::crospi_interfaces::action::rosidl_typesupport_c::RunTask_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__struct.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__type_support.h"
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

namespace crospi_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunTask_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunTask_FeedbackMessage_type_support_ids_t;

static const _RunTask_FeedbackMessage_type_support_ids_t _RunTask_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunTask_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunTask_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunTask_FeedbackMessage_type_support_symbol_names_t _RunTask_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crospi_interfaces, action, RunTask_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, action, RunTask_FeedbackMessage)),
  }
};

typedef struct _RunTask_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _RunTask_FeedbackMessage_type_support_data_t;

static _RunTask_FeedbackMessage_type_support_data_t _RunTask_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunTask_FeedbackMessage_message_typesupport_map = {
  2,
  "crospi_interfaces",
  &_RunTask_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_RunTask_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_RunTask_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunTask_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunTask_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace crospi_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crospi_interfaces, action, RunTask_FeedbackMessage)() {
  return &::crospi_interfaces::action::rosidl_typesupport_c::RunTask_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "crospi_interfaces/action/run_task.h"
// already included above
// #include "crospi_interfaces/action/detail/run_task__type_support.h"

static rosidl_action_type_support_t _crospi_interfaces__action__RunTask__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, crospi_interfaces, action, RunTask)()
{
  // Thread-safe by always writing the same values to the static struct
  _crospi_interfaces__action__RunTask__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, crospi_interfaces, action, RunTask_SendGoal)();
  _crospi_interfaces__action__RunTask__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, crospi_interfaces, action, RunTask_GetResult)();
  _crospi_interfaces__action__RunTask__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _crospi_interfaces__action__RunTask__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, crospi_interfaces, action, RunTask_FeedbackMessage)();
  _crospi_interfaces__action__RunTask__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_crospi_interfaces__action__RunTask__typesupport_c;
}

#ifdef __cplusplus
}
#endif
