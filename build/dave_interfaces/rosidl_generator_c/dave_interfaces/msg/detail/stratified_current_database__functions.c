// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dave_interfaces:msg/StratifiedCurrentDatabase.idl
// generated code does not contain a copyright notice
#include "dave_interfaces/msg/detail/stratified_current_database__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `depths`
// Member `time_gmt_year`
// Member `time_gmt_month`
// Member `time_gmt_day`
// Member `time_gmt_hour`
// Member `time_gmt_minute`
// Member `tidevelocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `velocities`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
dave_interfaces__msg__StratifiedCurrentDatabase__init(dave_interfaces__msg__StratifiedCurrentDatabase * msg)
{
  if (!msg) {
    return false;
  }
  // depths
  if (!rosidl_runtime_c__float__Sequence__init(&msg->depths, 0)) {
    dave_interfaces__msg__StratifiedCurrentDatabase__fini(msg);
    return false;
  }
  // velocities
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->velocities, 0)) {
    dave_interfaces__msg__StratifiedCurrentDatabase__fini(msg);
    return false;
  }
  // time_gmt_year
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->time_gmt_year, 0)) {
    dave_interfaces__msg__StratifiedCurrentDatabase__fini(msg);
    return false;
  }
  // time_gmt_month
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->time_gmt_month, 0)) {
    dave_interfaces__msg__StratifiedCurrentDatabase__fini(msg);
    return false;
  }
  // time_gmt_day
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->time_gmt_day, 0)) {
    dave_interfaces__msg__StratifiedCurrentDatabase__fini(msg);
    return false;
  }
  // time_gmt_hour
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->time_gmt_hour, 0)) {
    dave_interfaces__msg__StratifiedCurrentDatabase__fini(msg);
    return false;
  }
  // time_gmt_minute
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->time_gmt_minute, 0)) {
    dave_interfaces__msg__StratifiedCurrentDatabase__fini(msg);
    return false;
  }
  // tidevelocities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->tidevelocities, 0)) {
    dave_interfaces__msg__StratifiedCurrentDatabase__fini(msg);
    return false;
  }
  // tideconstituents
  // m2_amp
  // m2_phase
  // m2_speed
  // s2_amp
  // s2_phase
  // s2_speed
  // n2_amp
  // n2_phase
  // n2_speed
  // ebb_direction
  // flood_direction
  // world_start_time_year
  // world_start_time_month
  // world_start_time_day
  // world_start_time_hour
  // world_start_time_minute
  return true;
}

void
dave_interfaces__msg__StratifiedCurrentDatabase__fini(dave_interfaces__msg__StratifiedCurrentDatabase * msg)
{
  if (!msg) {
    return;
  }
  // depths
  rosidl_runtime_c__float__Sequence__fini(&msg->depths);
  // velocities
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->velocities);
  // time_gmt_year
  rosidl_runtime_c__int16__Sequence__fini(&msg->time_gmt_year);
  // time_gmt_month
  rosidl_runtime_c__int16__Sequence__fini(&msg->time_gmt_month);
  // time_gmt_day
  rosidl_runtime_c__int16__Sequence__fini(&msg->time_gmt_day);
  // time_gmt_hour
  rosidl_runtime_c__int16__Sequence__fini(&msg->time_gmt_hour);
  // time_gmt_minute
  rosidl_runtime_c__int16__Sequence__fini(&msg->time_gmt_minute);
  // tidevelocities
  rosidl_runtime_c__float__Sequence__fini(&msg->tidevelocities);
  // tideconstituents
  // m2_amp
  // m2_phase
  // m2_speed
  // s2_amp
  // s2_phase
  // s2_speed
  // n2_amp
  // n2_phase
  // n2_speed
  // ebb_direction
  // flood_direction
  // world_start_time_year
  // world_start_time_month
  // world_start_time_day
  // world_start_time_hour
  // world_start_time_minute
}

bool
dave_interfaces__msg__StratifiedCurrentDatabase__are_equal(const dave_interfaces__msg__StratifiedCurrentDatabase * lhs, const dave_interfaces__msg__StratifiedCurrentDatabase * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // depths
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->depths), &(rhs->depths)))
  {
    return false;
  }
  // velocities
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->velocities), &(rhs->velocities)))
  {
    return false;
  }
  // time_gmt_year
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->time_gmt_year), &(rhs->time_gmt_year)))
  {
    return false;
  }
  // time_gmt_month
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->time_gmt_month), &(rhs->time_gmt_month)))
  {
    return false;
  }
  // time_gmt_day
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->time_gmt_day), &(rhs->time_gmt_day)))
  {
    return false;
  }
  // time_gmt_hour
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->time_gmt_hour), &(rhs->time_gmt_hour)))
  {
    return false;
  }
  // time_gmt_minute
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->time_gmt_minute), &(rhs->time_gmt_minute)))
  {
    return false;
  }
  // tidevelocities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->tidevelocities), &(rhs->tidevelocities)))
  {
    return false;
  }
  // tideconstituents
  if (lhs->tideconstituents != rhs->tideconstituents) {
    return false;
  }
  // m2_amp
  if (lhs->m2_amp != rhs->m2_amp) {
    return false;
  }
  // m2_phase
  if (lhs->m2_phase != rhs->m2_phase) {
    return false;
  }
  // m2_speed
  if (lhs->m2_speed != rhs->m2_speed) {
    return false;
  }
  // s2_amp
  if (lhs->s2_amp != rhs->s2_amp) {
    return false;
  }
  // s2_phase
  if (lhs->s2_phase != rhs->s2_phase) {
    return false;
  }
  // s2_speed
  if (lhs->s2_speed != rhs->s2_speed) {
    return false;
  }
  // n2_amp
  if (lhs->n2_amp != rhs->n2_amp) {
    return false;
  }
  // n2_phase
  if (lhs->n2_phase != rhs->n2_phase) {
    return false;
  }
  // n2_speed
  if (lhs->n2_speed != rhs->n2_speed) {
    return false;
  }
  // ebb_direction
  if (lhs->ebb_direction != rhs->ebb_direction) {
    return false;
  }
  // flood_direction
  if (lhs->flood_direction != rhs->flood_direction) {
    return false;
  }
  // world_start_time_year
  if (lhs->world_start_time_year != rhs->world_start_time_year) {
    return false;
  }
  // world_start_time_month
  if (lhs->world_start_time_month != rhs->world_start_time_month) {
    return false;
  }
  // world_start_time_day
  if (lhs->world_start_time_day != rhs->world_start_time_day) {
    return false;
  }
  // world_start_time_hour
  if (lhs->world_start_time_hour != rhs->world_start_time_hour) {
    return false;
  }
  // world_start_time_minute
  if (lhs->world_start_time_minute != rhs->world_start_time_minute) {
    return false;
  }
  return true;
}

bool
dave_interfaces__msg__StratifiedCurrentDatabase__copy(
  const dave_interfaces__msg__StratifiedCurrentDatabase * input,
  dave_interfaces__msg__StratifiedCurrentDatabase * output)
{
  if (!input || !output) {
    return false;
  }
  // depths
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->depths), &(output->depths)))
  {
    return false;
  }
  // velocities
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->velocities), &(output->velocities)))
  {
    return false;
  }
  // time_gmt_year
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->time_gmt_year), &(output->time_gmt_year)))
  {
    return false;
  }
  // time_gmt_month
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->time_gmt_month), &(output->time_gmt_month)))
  {
    return false;
  }
  // time_gmt_day
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->time_gmt_day), &(output->time_gmt_day)))
  {
    return false;
  }
  // time_gmt_hour
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->time_gmt_hour), &(output->time_gmt_hour)))
  {
    return false;
  }
  // time_gmt_minute
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->time_gmt_minute), &(output->time_gmt_minute)))
  {
    return false;
  }
  // tidevelocities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->tidevelocities), &(output->tidevelocities)))
  {
    return false;
  }
  // tideconstituents
  output->tideconstituents = input->tideconstituents;
  // m2_amp
  output->m2_amp = input->m2_amp;
  // m2_phase
  output->m2_phase = input->m2_phase;
  // m2_speed
  output->m2_speed = input->m2_speed;
  // s2_amp
  output->s2_amp = input->s2_amp;
  // s2_phase
  output->s2_phase = input->s2_phase;
  // s2_speed
  output->s2_speed = input->s2_speed;
  // n2_amp
  output->n2_amp = input->n2_amp;
  // n2_phase
  output->n2_phase = input->n2_phase;
  // n2_speed
  output->n2_speed = input->n2_speed;
  // ebb_direction
  output->ebb_direction = input->ebb_direction;
  // flood_direction
  output->flood_direction = input->flood_direction;
  // world_start_time_year
  output->world_start_time_year = input->world_start_time_year;
  // world_start_time_month
  output->world_start_time_month = input->world_start_time_month;
  // world_start_time_day
  output->world_start_time_day = input->world_start_time_day;
  // world_start_time_hour
  output->world_start_time_hour = input->world_start_time_hour;
  // world_start_time_minute
  output->world_start_time_minute = input->world_start_time_minute;
  return true;
}

dave_interfaces__msg__StratifiedCurrentDatabase *
dave_interfaces__msg__StratifiedCurrentDatabase__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dave_interfaces__msg__StratifiedCurrentDatabase * msg = (dave_interfaces__msg__StratifiedCurrentDatabase *)allocator.allocate(sizeof(dave_interfaces__msg__StratifiedCurrentDatabase), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dave_interfaces__msg__StratifiedCurrentDatabase));
  bool success = dave_interfaces__msg__StratifiedCurrentDatabase__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dave_interfaces__msg__StratifiedCurrentDatabase__destroy(dave_interfaces__msg__StratifiedCurrentDatabase * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dave_interfaces__msg__StratifiedCurrentDatabase__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__init(dave_interfaces__msg__StratifiedCurrentDatabase__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dave_interfaces__msg__StratifiedCurrentDatabase * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dave_interfaces__msg__StratifiedCurrentDatabase)) {
      return false;
    }
    data = (dave_interfaces__msg__StratifiedCurrentDatabase *)allocator.zero_allocate(size, sizeof(dave_interfaces__msg__StratifiedCurrentDatabase), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dave_interfaces__msg__StratifiedCurrentDatabase__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dave_interfaces__msg__StratifiedCurrentDatabase__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__fini(dave_interfaces__msg__StratifiedCurrentDatabase__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dave_interfaces__msg__StratifiedCurrentDatabase__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dave_interfaces__msg__StratifiedCurrentDatabase__Sequence *
dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dave_interfaces__msg__StratifiedCurrentDatabase__Sequence * array = (dave_interfaces__msg__StratifiedCurrentDatabase__Sequence *)allocator.allocate(sizeof(dave_interfaces__msg__StratifiedCurrentDatabase__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__destroy(dave_interfaces__msg__StratifiedCurrentDatabase__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__are_equal(const dave_interfaces__msg__StratifiedCurrentDatabase__Sequence * lhs, const dave_interfaces__msg__StratifiedCurrentDatabase__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dave_interfaces__msg__StratifiedCurrentDatabase__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dave_interfaces__msg__StratifiedCurrentDatabase__Sequence__copy(
  const dave_interfaces__msg__StratifiedCurrentDatabase__Sequence * input,
  dave_interfaces__msg__StratifiedCurrentDatabase__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dave_interfaces__msg__StratifiedCurrentDatabase)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dave_interfaces__msg__StratifiedCurrentDatabase);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dave_interfaces__msg__StratifiedCurrentDatabase * data =
      (dave_interfaces__msg__StratifiedCurrentDatabase *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dave_interfaces__msg__StratifiedCurrentDatabase__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dave_interfaces__msg__StratifiedCurrentDatabase__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dave_interfaces__msg__StratifiedCurrentDatabase__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
