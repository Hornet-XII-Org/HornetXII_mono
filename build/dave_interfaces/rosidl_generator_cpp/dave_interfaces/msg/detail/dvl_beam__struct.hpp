// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dave_interfaces:msg/DVLBeam.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/dvl_beam.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__DVL_BEAM__STRUCT_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__DVL_BEAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dave_interfaces__msg__DVLBeam __attribute__((deprecated))
#else
# define DEPRECATED__dave_interfaces__msg__DVLBeam __declspec(deprecated)
#endif

namespace dave_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DVLBeam_
{
  using Type = DVLBeam_<ContainerAllocator>;

  explicit DVLBeam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->reference = "";
      this->range = 0.0;
      this->locked = false;
    }
  }

  explicit DVLBeam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference(_alloc),
    velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->reference = "";
      this->range = 0.0;
      this->locked = false;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _reference_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reference_type reference;
  using _range_type =
    double;
  _range_type range;
  using _locked_type =
    bool;
  _locked_type locked;
  using _velocity_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__reference(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reference = _arg;
    return *this;
  }
  Type & set__range(
    const double & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__locked(
    const bool & _arg)
  {
    this->locked = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dave_interfaces::msg::DVLBeam_<ContainerAllocator> *;
  using ConstRawPtr =
    const dave_interfaces::msg::DVLBeam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dave_interfaces::msg::DVLBeam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dave_interfaces::msg::DVLBeam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::msg::DVLBeam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::msg::DVLBeam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::msg::DVLBeam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::msg::DVLBeam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dave_interfaces::msg::DVLBeam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dave_interfaces::msg::DVLBeam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dave_interfaces__msg__DVLBeam
    std::shared_ptr<dave_interfaces::msg::DVLBeam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dave_interfaces__msg__DVLBeam
    std::shared_ptr<dave_interfaces::msg::DVLBeam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DVLBeam_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->reference != other.reference) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->locked != other.locked) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const DVLBeam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DVLBeam_

// alias to use template instance with default allocator
using DVLBeam =
  dave_interfaces::msg::DVLBeam_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__MSG__DETAIL__DVL_BEAM__STRUCT_HPP_
