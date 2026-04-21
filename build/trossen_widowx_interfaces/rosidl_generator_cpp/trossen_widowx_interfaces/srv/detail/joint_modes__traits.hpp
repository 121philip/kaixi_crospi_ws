// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from trossen_widowx_interfaces:srv/JointModes.idl
// generated code does not contain a copyright notice

#ifndef TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__JOINT_MODES__TRAITS_HPP_
#define TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__JOINT_MODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "trossen_widowx_interfaces/srv/detail/joint_modes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace trossen_widowx_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointModes_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_mode
  {
    if (msg.joint_mode.size() == 0) {
      out << "joint_mode: []";
    } else {
      out << "joint_mode: [";
      size_t pending_items = msg.joint_mode.size();
      for (auto item : msg.joint_mode) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointModes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_mode.size() == 0) {
      out << "joint_mode: []\n";
    } else {
      out << "joint_mode:\n";
      for (auto item : msg.joint_mode) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointModes_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace trossen_widowx_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use trossen_widowx_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const trossen_widowx_interfaces::srv::JointModes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  trossen_widowx_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use trossen_widowx_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const trossen_widowx_interfaces::srv::JointModes_Request & msg)
{
  return trossen_widowx_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<trossen_widowx_interfaces::srv::JointModes_Request>()
{
  return "trossen_widowx_interfaces::srv::JointModes_Request";
}

template<>
inline const char * name<trossen_widowx_interfaces::srv::JointModes_Request>()
{
  return "trossen_widowx_interfaces/srv/JointModes_Request";
}

template<>
struct has_fixed_size<trossen_widowx_interfaces::srv::JointModes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<trossen_widowx_interfaces::srv::JointModes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<trossen_widowx_interfaces::srv::JointModes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace trossen_widowx_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointModes_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointModes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointModes_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace trossen_widowx_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use trossen_widowx_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const trossen_widowx_interfaces::srv::JointModes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  trossen_widowx_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use trossen_widowx_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const trossen_widowx_interfaces::srv::JointModes_Response & msg)
{
  return trossen_widowx_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<trossen_widowx_interfaces::srv::JointModes_Response>()
{
  return "trossen_widowx_interfaces::srv::JointModes_Response";
}

template<>
inline const char * name<trossen_widowx_interfaces::srv::JointModes_Response>()
{
  return "trossen_widowx_interfaces/srv/JointModes_Response";
}

template<>
struct has_fixed_size<trossen_widowx_interfaces::srv::JointModes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<trossen_widowx_interfaces::srv::JointModes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<trossen_widowx_interfaces::srv::JointModes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<trossen_widowx_interfaces::srv::JointModes>()
{
  return "trossen_widowx_interfaces::srv::JointModes";
}

template<>
inline const char * name<trossen_widowx_interfaces::srv::JointModes>()
{
  return "trossen_widowx_interfaces/srv/JointModes";
}

template<>
struct has_fixed_size<trossen_widowx_interfaces::srv::JointModes>
  : std::integral_constant<
    bool,
    has_fixed_size<trossen_widowx_interfaces::srv::JointModes_Request>::value &&
    has_fixed_size<trossen_widowx_interfaces::srv::JointModes_Response>::value
  >
{
};

template<>
struct has_bounded_size<trossen_widowx_interfaces::srv::JointModes>
  : std::integral_constant<
    bool,
    has_bounded_size<trossen_widowx_interfaces::srv::JointModes_Request>::value &&
    has_bounded_size<trossen_widowx_interfaces::srv::JointModes_Response>::value
  >
{
};

template<>
struct is_service<trossen_widowx_interfaces::srv::JointModes>
  : std::true_type
{
};

template<>
struct is_service_request<trossen_widowx_interfaces::srv::JointModes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<trossen_widowx_interfaces::srv::JointModes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__JOINT_MODES__TRAITS_HPP_
