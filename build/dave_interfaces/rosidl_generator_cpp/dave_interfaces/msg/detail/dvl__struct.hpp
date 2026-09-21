// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dave_interfaces:msg/DVL.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/dvl.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__DVL__STRUCT_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__DVL__STRUCT_HPP_

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
// Member 'target'
#include "dave_interfaces/msg/detail/dvl_target__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"
// Member 'beams'
#include "dave_interfaces/msg/detail/dvl_beam__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dave_interfaces__msg__DVL __attribute__((deprecated))
#else
# define DEPRECATED__dave_interfaces__msg__DVL __declspec(deprecated)
#endif

namespace dave_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DVL_
{
  using Type = DVL_<ContainerAllocator>;

  explicit DVL_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    target(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  explicit DVL_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    type(_alloc),
    target(_alloc, _init),
    velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _target_type =
    dave_interfaces::msg::DVLTarget_<ContainerAllocator>;
  _target_type target;
  using _velocity_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _velocity_type velocity;
  using _beams_type =
    std::vector<dave_interfaces::msg::DVLBeam_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dave_interfaces::msg::DVLBeam_<ContainerAllocator>>>;
  _beams_type beams;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__target(
    const dave_interfaces::msg::DVLTarget_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__beams(
    const std::vector<dave_interfaces::msg::DVLBeam_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dave_interfaces::msg::DVLBeam_<ContainerAllocator>>> & _arg)
  {
    this->beams = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dave_interfaces::msg::DVL_<ContainerAllocator> *;
  using ConstRawPtr =
    const dave_interfaces::msg::DVL_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dave_interfaces::msg::DVL_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dave_interfaces::msg::DVL_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::msg::DVL_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::msg::DVL_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::msg::DVL_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::msg::DVL_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dave_interfaces::msg::DVL_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dave_interfaces::msg::DVL_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dave_interfaces__msg__DVL
    std::shared_ptr<dave_interfaces::msg::DVL_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dave_interfaces__msg__DVL
    std::shared_ptr<dave_interfaces::msg::DVL_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DVL_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->beams != other.beams) {
      return false;
    }
    return true;
  }
  bool operator!=(const DVL_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DVL_

// alias to use template instance with default allocator
using DVL =
  dave_interfaces::msg::DVL_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__MSG__DETAIL__DVL__STRUCT_HPP_
