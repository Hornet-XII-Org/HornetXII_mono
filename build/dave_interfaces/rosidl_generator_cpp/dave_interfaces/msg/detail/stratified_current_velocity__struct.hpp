// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dave_interfaces:msg/StratifiedCurrentVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/stratified_current_velocity.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_VELOCITY__STRUCT_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'velocities'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dave_interfaces__msg__StratifiedCurrentVelocity __attribute__((deprecated))
#else
# define DEPRECATED__dave_interfaces__msg__StratifiedCurrentVelocity __declspec(deprecated)
#endif

namespace dave_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StratifiedCurrentVelocity_
{
  using Type = StratifiedCurrentVelocity_<ContainerAllocator>;

  explicit StratifiedCurrentVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit StratifiedCurrentVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _depths_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _depths_type depths;
  using _velocities_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _velocities_type velocities;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__depths(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->depths = _arg;
    return *this;
  }
  Type & set__velocities(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->velocities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dave_interfaces::msg::StratifiedCurrentVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const dave_interfaces::msg::StratifiedCurrentVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dave_interfaces::msg::StratifiedCurrentVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dave_interfaces::msg::StratifiedCurrentVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::msg::StratifiedCurrentVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::msg::StratifiedCurrentVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::msg::StratifiedCurrentVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::msg::StratifiedCurrentVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dave_interfaces::msg::StratifiedCurrentVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dave_interfaces::msg::StratifiedCurrentVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dave_interfaces__msg__StratifiedCurrentVelocity
    std::shared_ptr<dave_interfaces::msg::StratifiedCurrentVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dave_interfaces__msg__StratifiedCurrentVelocity
    std::shared_ptr<dave_interfaces::msg::StratifiedCurrentVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StratifiedCurrentVelocity_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->depths != other.depths) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    return true;
  }
  bool operator!=(const StratifiedCurrentVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StratifiedCurrentVelocity_

// alias to use template instance with default allocator
using StratifiedCurrentVelocity =
  dave_interfaces::msg::StratifiedCurrentVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_VELOCITY__STRUCT_HPP_
