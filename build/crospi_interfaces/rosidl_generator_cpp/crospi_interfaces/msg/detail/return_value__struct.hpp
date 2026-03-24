// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crospi_interfaces:msg/ReturnValue.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__RETURN_VALUE__STRUCT_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__RETURN_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__crospi_interfaces__msg__ReturnValue __attribute__((deprecated))
#else
# define DEPRECATED__crospi_interfaces__msg__ReturnValue __declspec(deprecated)
#endif

namespace crospi_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReturnValue_
{
  using Type = ReturnValue_<ContainerAllocator>;

  explicit ReturnValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->errorcode = 0ul;
      this->description = "";
    }
  }

  explicit ReturnValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->errorcode = 0ul;
      this->description = "";
    }
  }

  // field types and members
  using _errorcode_type =
    uint32_t;
  _errorcode_type errorcode;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__errorcode(
    const uint32_t & _arg)
  {
    this->errorcode = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t SUCCESS =
    0u;
  static constexpr uint32_t SYNTAX_ERROR =
    1u;
  static constexpr uint32_t FEATUREVAR_DID_NOT_CONVERGE =
    1000u;
  static constexpr uint32_t SOLVER_DID_NOT_CONVERGE =
    2000u;
  static constexpr uint32_t CANCELLED =
    2u;

  // pointer types
  using RawPtr =
    crospi_interfaces::msg::ReturnValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const crospi_interfaces::msg::ReturnValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crospi_interfaces::msg::ReturnValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crospi_interfaces::msg::ReturnValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::msg::ReturnValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::msg::ReturnValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::msg::ReturnValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::msg::ReturnValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crospi_interfaces::msg::ReturnValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crospi_interfaces::msg::ReturnValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crospi_interfaces__msg__ReturnValue
    std::shared_ptr<crospi_interfaces::msg::ReturnValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crospi_interfaces__msg__ReturnValue
    std::shared_ptr<crospi_interfaces::msg::ReturnValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReturnValue_ & other) const
  {
    if (this->errorcode != other.errorcode) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReturnValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReturnValue_

// alias to use template instance with default allocator
using ReturnValue =
  crospi_interfaces::msg::ReturnValue_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ReturnValue_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ReturnValue_<ContainerAllocator>::SYNTAX_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ReturnValue_<ContainerAllocator>::FEATUREVAR_DID_NOT_CONVERGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ReturnValue_<ContainerAllocator>::SOLVER_DID_NOT_CONVERGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ReturnValue_<ContainerAllocator>::CANCELLED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__MSG__DETAIL__RETURN_VALUE__STRUCT_HPP_
