// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crospi_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__INPUT__STRUCT_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__crospi_interfaces__msg__Input __attribute__((deprecated))
#else
# define DEPRECATED__crospi_interfaces__msg__Input __declspec(deprecated)
#endif

namespace crospi_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Input_
{
  using Type = Input_<ContainerAllocator>;

  explicit Input_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Input_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;
  using _data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->names = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crospi_interfaces::msg::Input_<ContainerAllocator> *;
  using ConstRawPtr =
    const crospi_interfaces::msg::Input_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crospi_interfaces::msg::Input_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crospi_interfaces::msg::Input_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::msg::Input_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::msg::Input_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::msg::Input_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::msg::Input_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crospi_interfaces::msg::Input_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crospi_interfaces::msg::Input_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crospi_interfaces__msg__Input
    std::shared_ptr<crospi_interfaces::msg::Input_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crospi_interfaces__msg__Input
    std::shared_ptr<crospi_interfaces::msg::Input_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Input_ & other) const
  {
    if (this->names != other.names) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Input_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Input_

// alias to use template instance with default allocator
using Input =
  crospi_interfaces::msg::Input_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__MSG__DETAIL__INPUT__STRUCT_HPP_
