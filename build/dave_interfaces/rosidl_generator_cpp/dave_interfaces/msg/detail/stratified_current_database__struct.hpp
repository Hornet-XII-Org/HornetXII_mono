// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dave_interfaces:msg/StratifiedCurrentDatabase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/stratified_current_database.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_DATABASE__STRUCT_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_DATABASE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'velocities'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dave_interfaces__msg__StratifiedCurrentDatabase __attribute__((deprecated))
#else
# define DEPRECATED__dave_interfaces__msg__StratifiedCurrentDatabase __declspec(deprecated)
#endif

namespace dave_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StratifiedCurrentDatabase_
{
  using Type = StratifiedCurrentDatabase_<ContainerAllocator>;

  explicit StratifiedCurrentDatabase_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tideconstituents = false;
      this->m2_amp = 0.0f;
      this->m2_phase = 0.0f;
      this->m2_speed = 0.0f;
      this->s2_amp = 0.0f;
      this->s2_phase = 0.0f;
      this->s2_speed = 0.0f;
      this->n2_amp = 0.0f;
      this->n2_phase = 0.0f;
      this->n2_speed = 0.0f;
      this->ebb_direction = 0.0f;
      this->flood_direction = 0.0f;
      this->world_start_time_year = 0;
      this->world_start_time_month = 0;
      this->world_start_time_day = 0;
      this->world_start_time_hour = 0;
      this->world_start_time_minute = 0;
    }
  }

  explicit StratifiedCurrentDatabase_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tideconstituents = false;
      this->m2_amp = 0.0f;
      this->m2_phase = 0.0f;
      this->m2_speed = 0.0f;
      this->s2_amp = 0.0f;
      this->s2_phase = 0.0f;
      this->s2_speed = 0.0f;
      this->n2_amp = 0.0f;
      this->n2_phase = 0.0f;
      this->n2_speed = 0.0f;
      this->ebb_direction = 0.0f;
      this->flood_direction = 0.0f;
      this->world_start_time_year = 0;
      this->world_start_time_month = 0;
      this->world_start_time_day = 0;
      this->world_start_time_hour = 0;
      this->world_start_time_minute = 0;
    }
  }

  // field types and members
  using _depths_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _depths_type depths;
  using _velocities_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _velocities_type velocities;
  using _time_gmt_year_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _time_gmt_year_type time_gmt_year;
  using _time_gmt_month_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _time_gmt_month_type time_gmt_month;
  using _time_gmt_day_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _time_gmt_day_type time_gmt_day;
  using _time_gmt_hour_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _time_gmt_hour_type time_gmt_hour;
  using _time_gmt_minute_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _time_gmt_minute_type time_gmt_minute;
  using _tidevelocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _tidevelocities_type tidevelocities;
  using _tideconstituents_type =
    bool;
  _tideconstituents_type tideconstituents;
  using _m2_amp_type =
    float;
  _m2_amp_type m2_amp;
  using _m2_phase_type =
    float;
  _m2_phase_type m2_phase;
  using _m2_speed_type =
    float;
  _m2_speed_type m2_speed;
  using _s2_amp_type =
    float;
  _s2_amp_type s2_amp;
  using _s2_phase_type =
    float;
  _s2_phase_type s2_phase;
  using _s2_speed_type =
    float;
  _s2_speed_type s2_speed;
  using _n2_amp_type =
    float;
  _n2_amp_type n2_amp;
  using _n2_phase_type =
    float;
  _n2_phase_type n2_phase;
  using _n2_speed_type =
    float;
  _n2_speed_type n2_speed;
  using _ebb_direction_type =
    float;
  _ebb_direction_type ebb_direction;
  using _flood_direction_type =
    float;
  _flood_direction_type flood_direction;
  using _world_start_time_year_type =
    int16_t;
  _world_start_time_year_type world_start_time_year;
  using _world_start_time_month_type =
    int16_t;
  _world_start_time_month_type world_start_time_month;
  using _world_start_time_day_type =
    int16_t;
  _world_start_time_day_type world_start_time_day;
  using _world_start_time_hour_type =
    int16_t;
  _world_start_time_hour_type world_start_time_hour;
  using _world_start_time_minute_type =
    int16_t;
  _world_start_time_minute_type world_start_time_minute;

  // setters for named parameter idiom
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
  Type & set__time_gmt_year(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->time_gmt_year = _arg;
    return *this;
  }
  Type & set__time_gmt_month(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->time_gmt_month = _arg;
    return *this;
  }
  Type & set__time_gmt_day(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->time_gmt_day = _arg;
    return *this;
  }
  Type & set__time_gmt_hour(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->time_gmt_hour = _arg;
    return *this;
  }
  Type & set__time_gmt_minute(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->time_gmt_minute = _arg;
    return *this;
  }
  Type & set__tidevelocities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->tidevelocities = _arg;
    return *this;
  }
  Type & set__tideconstituents(
    const bool & _arg)
  {
    this->tideconstituents = _arg;
    return *this;
  }
  Type & set__m2_amp(
    const float & _arg)
  {
    this->m2_amp = _arg;
    return *this;
  }
  Type & set__m2_phase(
    const float & _arg)
  {
    this->m2_phase = _arg;
    return *this;
  }
  Type & set__m2_speed(
    const float & _arg)
  {
    this->m2_speed = _arg;
    return *this;
  }
  Type & set__s2_amp(
    const float & _arg)
  {
    this->s2_amp = _arg;
    return *this;
  }
  Type & set__s2_phase(
    const float & _arg)
  {
    this->s2_phase = _arg;
    return *this;
  }
  Type & set__s2_speed(
    const float & _arg)
  {
    this->s2_speed = _arg;
    return *this;
  }
  Type & set__n2_amp(
    const float & _arg)
  {
    this->n2_amp = _arg;
    return *this;
  }
  Type & set__n2_phase(
    const float & _arg)
  {
    this->n2_phase = _arg;
    return *this;
  }
  Type & set__n2_speed(
    const float & _arg)
  {
    this->n2_speed = _arg;
    return *this;
  }
  Type & set__ebb_direction(
    const float & _arg)
  {
    this->ebb_direction = _arg;
    return *this;
  }
  Type & set__flood_direction(
    const float & _arg)
  {
    this->flood_direction = _arg;
    return *this;
  }
  Type & set__world_start_time_year(
    const int16_t & _arg)
  {
    this->world_start_time_year = _arg;
    return *this;
  }
  Type & set__world_start_time_month(
    const int16_t & _arg)
  {
    this->world_start_time_month = _arg;
    return *this;
  }
  Type & set__world_start_time_day(
    const int16_t & _arg)
  {
    this->world_start_time_day = _arg;
    return *this;
  }
  Type & set__world_start_time_hour(
    const int16_t & _arg)
  {
    this->world_start_time_hour = _arg;
    return *this;
  }
  Type & set__world_start_time_minute(
    const int16_t & _arg)
  {
    this->world_start_time_minute = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dave_interfaces::msg::StratifiedCurrentDatabase_<ContainerAllocator> *;
  using ConstRawPtr =
    const dave_interfaces::msg::StratifiedCurrentDatabase_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dave_interfaces::msg::StratifiedCurrentDatabase_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dave_interfaces::msg::StratifiedCurrentDatabase_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::msg::StratifiedCurrentDatabase_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::msg::StratifiedCurrentDatabase_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dave_interfaces::msg::StratifiedCurrentDatabase_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dave_interfaces::msg::StratifiedCurrentDatabase_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dave_interfaces::msg::StratifiedCurrentDatabase_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dave_interfaces::msg::StratifiedCurrentDatabase_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dave_interfaces__msg__StratifiedCurrentDatabase
    std::shared_ptr<dave_interfaces::msg::StratifiedCurrentDatabase_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dave_interfaces__msg__StratifiedCurrentDatabase
    std::shared_ptr<dave_interfaces::msg::StratifiedCurrentDatabase_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StratifiedCurrentDatabase_ & other) const
  {
    if (this->depths != other.depths) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    if (this->time_gmt_year != other.time_gmt_year) {
      return false;
    }
    if (this->time_gmt_month != other.time_gmt_month) {
      return false;
    }
    if (this->time_gmt_day != other.time_gmt_day) {
      return false;
    }
    if (this->time_gmt_hour != other.time_gmt_hour) {
      return false;
    }
    if (this->time_gmt_minute != other.time_gmt_minute) {
      return false;
    }
    if (this->tidevelocities != other.tidevelocities) {
      return false;
    }
    if (this->tideconstituents != other.tideconstituents) {
      return false;
    }
    if (this->m2_amp != other.m2_amp) {
      return false;
    }
    if (this->m2_phase != other.m2_phase) {
      return false;
    }
    if (this->m2_speed != other.m2_speed) {
      return false;
    }
    if (this->s2_amp != other.s2_amp) {
      return false;
    }
    if (this->s2_phase != other.s2_phase) {
      return false;
    }
    if (this->s2_speed != other.s2_speed) {
      return false;
    }
    if (this->n2_amp != other.n2_amp) {
      return false;
    }
    if (this->n2_phase != other.n2_phase) {
      return false;
    }
    if (this->n2_speed != other.n2_speed) {
      return false;
    }
    if (this->ebb_direction != other.ebb_direction) {
      return false;
    }
    if (this->flood_direction != other.flood_direction) {
      return false;
    }
    if (this->world_start_time_year != other.world_start_time_year) {
      return false;
    }
    if (this->world_start_time_month != other.world_start_time_month) {
      return false;
    }
    if (this->world_start_time_day != other.world_start_time_day) {
      return false;
    }
    if (this->world_start_time_hour != other.world_start_time_hour) {
      return false;
    }
    if (this->world_start_time_minute != other.world_start_time_minute) {
      return false;
    }
    return true;
  }
  bool operator!=(const StratifiedCurrentDatabase_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StratifiedCurrentDatabase_

// alias to use template instance with default allocator
using StratifiedCurrentDatabase =
  dave_interfaces::msg::StratifiedCurrentDatabase_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_DATABASE__STRUCT_HPP_
