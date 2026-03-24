// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from crospi_interfaces:msg/ReturnValue.idl
// generated code does not contain a copyright notice
#include "crospi_interfaces/msg/detail/return_value__rosidl_typesupport_fastrtps_cpp.hpp"
#include "crospi_interfaces/msg/detail/return_value__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace crospi_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crospi_interfaces
cdr_serialize(
  const crospi_interfaces::msg::ReturnValue & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: errorcode
  cdr << ros_message.errorcode;
  // Member: description
  cdr << ros_message.description;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crospi_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  crospi_interfaces::msg::ReturnValue & ros_message)
{
  // Member: errorcode
  cdr >> ros_message.errorcode;

  // Member: description
  cdr >> ros_message.description;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crospi_interfaces
get_serialized_size(
  const crospi_interfaces::msg::ReturnValue & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: errorcode
  {
    size_t item_size = sizeof(ros_message.errorcode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.description.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crospi_interfaces
max_serialized_size_ReturnValue(
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


  // Member: errorcode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: description
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = crospi_interfaces::msg::ReturnValue;
    is_plain =
      (
      offsetof(DataType, description) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ReturnValue__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const crospi_interfaces::msg::ReturnValue *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ReturnValue__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<crospi_interfaces::msg::ReturnValue *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ReturnValue__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const crospi_interfaces::msg::ReturnValue *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ReturnValue__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ReturnValue(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ReturnValue__callbacks = {
  "crospi_interfaces::msg",
  "ReturnValue",
  _ReturnValue__cdr_serialize,
  _ReturnValue__cdr_deserialize,
  _ReturnValue__get_serialized_size,
  _ReturnValue__max_serialized_size
};

static rosidl_message_type_support_t _ReturnValue__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ReturnValue__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace crospi_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_crospi_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<crospi_interfaces::msg::ReturnValue>()
{
  return &crospi_interfaces::msg::typesupport_fastrtps_cpp::_ReturnValue__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crospi_interfaces, msg, ReturnValue)() {
  return &crospi_interfaces::msg::typesupport_fastrtps_cpp::_ReturnValue__handle;
}

#ifdef __cplusplus
}
#endif
