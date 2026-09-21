// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dave_interfaces:msg/DVLTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/dvl_target.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__DVL_TARGET__STRUCT_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__DVL_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dave_interfaces__msg__DVLTarget __attribute__((deprecated))
#else
# define DEPRECATED__dave_interfaces__msg__DVLTarget __declspec(deprecated)
#endif

namespace dave_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DVLTarget_
{
  using Type = DVLTarget_<ContainerAllocator>;

  explicit DVLTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->range = 0.0;
    }
  }

  explicit DVLTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->range = 0.0;
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _range_type =
    double;
  _range_type range;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__range(
    const double & _arg)
  {
    this->range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dave_interfaces::msg::DVLTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const dave_interfaces::msg::DVLTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dave_interfaces::msg::DVLTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dave_interfaces::msg::DVLTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::msg::DVLTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::msg::DVLTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::msg::DVLTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::msg::DVLTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dave_interfaces::msg::DVLTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dave_interfaces::msg::DVLTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dave_interfaces__msg__DVLTarget
    std::shared_ptr<dave_interfaces::msg::DVLTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dave_interfaces__msg__DVLTarget
    std::shared_ptr<dave_interfaces::msg::DVLTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DVLTarget_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    return true;
  }
  bool operator!=(const DVLTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DVLTarget_

// alias to use template instance with default allocator
using DVLTarget =
  dave_interfaces::msg::DVLTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__MSG__DETAIL__DVL_TARGET__STRUCT_HPP_
