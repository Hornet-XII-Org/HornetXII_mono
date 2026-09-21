// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dave_interfaces:msg/StratifiedCurrentDatabase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dave_interfaces/msg/stratified_current_database.hpp"


#ifndef DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_DATABASE__BUILDER_HPP_
#define DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_DATABASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dave_interfaces/msg/detail/stratified_current_database__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dave_interfaces
{

namespace msg
{

namespace builder
{

class Init_StratifiedCurrentDatabase_world_start_time_minute
{
public:
  explicit Init_StratifiedCurrentDatabase_world_start_time_minute(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::msg::StratifiedCurrentDatabase world_start_time_minute(::dave_interfaces::msg::StratifiedCurrentDatabase::_world_start_time_minute_type arg)
  {
    msg_.world_start_time_minute = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_world_start_time_hour
{
public:
  explicit Init_StratifiedCurrentDatabase_world_start_time_hour(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_world_start_time_minute world_start_time_hour(::dave_interfaces::msg::StratifiedCurrentDatabase::_world_start_time_hour_type arg)
  {
    msg_.world_start_time_hour = std::move(arg);
    return Init_StratifiedCurrentDatabase_world_start_time_minute(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_world_start_time_day
{
public:
  explicit Init_StratifiedCurrentDatabase_world_start_time_day(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_world_start_time_hour world_start_time_day(::dave_interfaces::msg::StratifiedCurrentDatabase::_world_start_time_day_type arg)
  {
    msg_.world_start_time_day = std::move(arg);
    return Init_StratifiedCurrentDatabase_world_start_time_hour(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_world_start_time_month
{
public:
  explicit Init_StratifiedCurrentDatabase_world_start_time_month(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_world_start_time_day world_start_time_month(::dave_interfaces::msg::StratifiedCurrentDatabase::_world_start_time_month_type arg)
  {
    msg_.world_start_time_month = std::move(arg);
    return Init_StratifiedCurrentDatabase_world_start_time_day(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_world_start_time_year
{
public:
  explicit Init_StratifiedCurrentDatabase_world_start_time_year(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_world_start_time_month world_start_time_year(::dave_interfaces::msg::StratifiedCurrentDatabase::_world_start_time_year_type arg)
  {
    msg_.world_start_time_year = std::move(arg);
    return Init_StratifiedCurrentDatabase_world_start_time_month(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_flood_direction
{
public:
  explicit Init_StratifiedCurrentDatabase_flood_direction(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_world_start_time_year flood_direction(::dave_interfaces::msg::StratifiedCurrentDatabase::_flood_direction_type arg)
  {
    msg_.flood_direction = std::move(arg);
    return Init_StratifiedCurrentDatabase_world_start_time_year(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_ebb_direction
{
public:
  explicit Init_StratifiedCurrentDatabase_ebb_direction(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_flood_direction ebb_direction(::dave_interfaces::msg::StratifiedCurrentDatabase::_ebb_direction_type arg)
  {
    msg_.ebb_direction = std::move(arg);
    return Init_StratifiedCurrentDatabase_flood_direction(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_n2_speed
{
public:
  explicit Init_StratifiedCurrentDatabase_n2_speed(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_ebb_direction n2_speed(::dave_interfaces::msg::StratifiedCurrentDatabase::_n2_speed_type arg)
  {
    msg_.n2_speed = std::move(arg);
    return Init_StratifiedCurrentDatabase_ebb_direction(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_n2_phase
{
public:
  explicit Init_StratifiedCurrentDatabase_n2_phase(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_n2_speed n2_phase(::dave_interfaces::msg::StratifiedCurrentDatabase::_n2_phase_type arg)
  {
    msg_.n2_phase = std::move(arg);
    return Init_StratifiedCurrentDatabase_n2_speed(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_n2_amp
{
public:
  explicit Init_StratifiedCurrentDatabase_n2_amp(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_n2_phase n2_amp(::dave_interfaces::msg::StratifiedCurrentDatabase::_n2_amp_type arg)
  {
    msg_.n2_amp = std::move(arg);
    return Init_StratifiedCurrentDatabase_n2_phase(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_s2_speed
{
public:
  explicit Init_StratifiedCurrentDatabase_s2_speed(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_n2_amp s2_speed(::dave_interfaces::msg::StratifiedCurrentDatabase::_s2_speed_type arg)
  {
    msg_.s2_speed = std::move(arg);
    return Init_StratifiedCurrentDatabase_n2_amp(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_s2_phase
{
public:
  explicit Init_StratifiedCurrentDatabase_s2_phase(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_s2_speed s2_phase(::dave_interfaces::msg::StratifiedCurrentDatabase::_s2_phase_type arg)
  {
    msg_.s2_phase = std::move(arg);
    return Init_StratifiedCurrentDatabase_s2_speed(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_s2_amp
{
public:
  explicit Init_StratifiedCurrentDatabase_s2_amp(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_s2_phase s2_amp(::dave_interfaces::msg::StratifiedCurrentDatabase::_s2_amp_type arg)
  {
    msg_.s2_amp = std::move(arg);
    return Init_StratifiedCurrentDatabase_s2_phase(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_m2_speed
{
public:
  explicit Init_StratifiedCurrentDatabase_m2_speed(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_s2_amp m2_speed(::dave_interfaces::msg::StratifiedCurrentDatabase::_m2_speed_type arg)
  {
    msg_.m2_speed = std::move(arg);
    return Init_StratifiedCurrentDatabase_s2_amp(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_m2_phase
{
public:
  explicit Init_StratifiedCurrentDatabase_m2_phase(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_m2_speed m2_phase(::dave_interfaces::msg::StratifiedCurrentDatabase::_m2_phase_type arg)
  {
    msg_.m2_phase = std::move(arg);
    return Init_StratifiedCurrentDatabase_m2_speed(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_m2_amp
{
public:
  explicit Init_StratifiedCurrentDatabase_m2_amp(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_m2_phase m2_amp(::dave_interfaces::msg::StratifiedCurrentDatabase::_m2_amp_type arg)
  {
    msg_.m2_amp = std::move(arg);
    return Init_StratifiedCurrentDatabase_m2_phase(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_tideconstituents
{
public:
  explicit Init_StratifiedCurrentDatabase_tideconstituents(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_m2_amp tideconstituents(::dave_interfaces::msg::StratifiedCurrentDatabase::_tideconstituents_type arg)
  {
    msg_.tideconstituents = std::move(arg);
    return Init_StratifiedCurrentDatabase_m2_amp(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_tidevelocities
{
public:
  explicit Init_StratifiedCurrentDatabase_tidevelocities(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_tideconstituents tidevelocities(::dave_interfaces::msg::StratifiedCurrentDatabase::_tidevelocities_type arg)
  {
    msg_.tidevelocities = std::move(arg);
    return Init_StratifiedCurrentDatabase_tideconstituents(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_time_gmt_minute
{
public:
  explicit Init_StratifiedCurrentDatabase_time_gmt_minute(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_tidevelocities time_gmt_minute(::dave_interfaces::msg::StratifiedCurrentDatabase::_time_gmt_minute_type arg)
  {
    msg_.time_gmt_minute = std::move(arg);
    return Init_StratifiedCurrentDatabase_tidevelocities(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_time_gmt_hour
{
public:
  explicit Init_StratifiedCurrentDatabase_time_gmt_hour(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_time_gmt_minute time_gmt_hour(::dave_interfaces::msg::StratifiedCurrentDatabase::_time_gmt_hour_type arg)
  {
    msg_.time_gmt_hour = std::move(arg);
    return Init_StratifiedCurrentDatabase_time_gmt_minute(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_time_gmt_day
{
public:
  explicit Init_StratifiedCurrentDatabase_time_gmt_day(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_time_gmt_hour time_gmt_day(::dave_interfaces::msg::StratifiedCurrentDatabase::_time_gmt_day_type arg)
  {
    msg_.time_gmt_day = std::move(arg);
    return Init_StratifiedCurrentDatabase_time_gmt_hour(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_time_gmt_month
{
public:
  explicit Init_StratifiedCurrentDatabase_time_gmt_month(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_time_gmt_day time_gmt_month(::dave_interfaces::msg::StratifiedCurrentDatabase::_time_gmt_month_type arg)
  {
    msg_.time_gmt_month = std::move(arg);
    return Init_StratifiedCurrentDatabase_time_gmt_day(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_time_gmt_year
{
public:
  explicit Init_StratifiedCurrentDatabase_time_gmt_year(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_time_gmt_month time_gmt_year(::dave_interfaces::msg::StratifiedCurrentDatabase::_time_gmt_year_type arg)
  {
    msg_.time_gmt_year = std::move(arg);
    return Init_StratifiedCurrentDatabase_time_gmt_month(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_velocities
{
public:
  explicit Init_StratifiedCurrentDatabase_velocities(::dave_interfaces::msg::StratifiedCurrentDatabase & msg)
  : msg_(msg)
  {}
  Init_StratifiedCurrentDatabase_time_gmt_year velocities(::dave_interfaces::msg::StratifiedCurrentDatabase::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_StratifiedCurrentDatabase_time_gmt_year(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

class Init_StratifiedCurrentDatabase_depths
{
public:
  Init_StratifiedCurrentDatabase_depths()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StratifiedCurrentDatabase_velocities depths(::dave_interfaces::msg::StratifiedCurrentDatabase::_depths_type arg)
  {
    msg_.depths = std::move(arg);
    return Init_StratifiedCurrentDatabase_velocities(msg_);
  }

private:
  ::dave_interfaces::msg::StratifiedCurrentDatabase msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::msg::StratifiedCurrentDatabase>()
{
  return dave_interfaces::msg::builder::Init_StratifiedCurrentDatabase_depths();
}

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__MSG__DETAIL__STRATIFIED_CURRENT_DATABASE__BUILDER_HPP_
