// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crospi_interfaces:msg/Vector3Parameters.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__VECTOR3_PARAMETERS__STRUCT_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__VECTOR3_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'value'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crospi_interfaces__msg__Vector3Parameters __attribute__((deprecated))
#else
# define DEPRECATED__crospi_interfaces__msg__Vector3Parameters __declspec(deprecated)
#endif

namespace crospi_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vector3Parameters_
{
  using Type = Vector3Parameters_<ContainerAllocator>;

  explicit Vector3Parameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Vector3Parameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    value(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _value_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__value(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crospi_interfaces__msg__Vector3Parameters
    std::shared_ptr<crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crospi_interfaces__msg__Vector3Parameters
    std::shared_ptr<crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vector3Parameters_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vector3Parameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vector3Parameters_

// alias to use template instance with default allocator
using Vector3Parameters =
  crospi_interfaces::msg::Vector3Parameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__MSG__DETAIL__VECTOR3_PARAMETERS__STRUCT_HPP_
