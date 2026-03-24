// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from crospi_interfaces:msg/PoseParameters.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "crospi_interfaces/msg/detail/pose_parameters__struct.h"
#include "crospi_interfaces/msg/detail/pose_parameters__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace crospi_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _PoseParameters_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseParameters_type_support_ids_t;

static const _PoseParameters_type_support_ids_t _PoseParameters_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseParameters_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseParameters_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseParameters_type_support_symbol_names_t _PoseParameters_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crospi_interfaces, msg, PoseParameters)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, msg, PoseParameters)),
  }
};

typedef struct _PoseParameters_type_support_data_t
{
  void * data[2];
} _PoseParameters_type_support_data_t;

static _PoseParameters_type_support_data_t _PoseParameters_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseParameters_message_typesupport_map = {
  2,
  "crospi_interfaces",
  &_PoseParameters_message_typesupport_ids.typesupport_identifier[0],
  &_PoseParameters_message_typesupport_symbol_names.symbol_name[0],
  &_PoseParameters_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseParameters_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseParameters_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace crospi_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crospi_interfaces, msg, PoseParameters)() {
  return &::crospi_interfaces::msg::rosidl_typesupport_c::PoseParameters_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
