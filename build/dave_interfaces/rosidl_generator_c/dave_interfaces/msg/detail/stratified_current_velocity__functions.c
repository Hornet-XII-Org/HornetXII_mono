// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dave_interfaces:msg/StratifiedCurrentVelocity.idl
// generated code does not contain a copyright notice
#include "dave_interfaces/msg/detail/stratified_current_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `depths`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `velocities`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
dave_interfaces__msg__StratifiedCurrentVelocity__init(dave_interfaces__msg__StratifiedCurrentVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dave_interfaces__msg__StratifiedCurrentVelocity__fini(msg);
    return false;
  }
  // depths
  if (!rosidl_runtime_c__float__Sequence__init(&msg->depths, 0)) {
    dave_interfaces__msg__StratifiedCurrentVelocity__fini(msg);
    return false;
  }
  // velocities
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->velocities, 0)) {
    dave_interfaces__msg__StratifiedCurrentVelocity__fini(msg);
    return false;
  }
  return true;
}

void
dave_interfaces__msg__StratifiedCurrentVelocity__fini(dave_interfaces__msg__StratifiedCurrentVelocity * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // depths
  rosidl_runtime_c__float__Sequence__fini(&msg->depths);
  // velocities
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->velocities);
}

bool
dave_interfaces__msg__StratifiedCurrentVelocity__are_equal(const dave_interfaces__msg__StratifiedCurrentVelocity * lhs, const dave_interfaces__msg__StratifiedCurrentVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
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
  return true;
}

bool
dave_interfaces__msg__StratifiedCurrentVelocity__copy(
  const dave_interfaces__msg__StratifiedCurrentVelocity * input,
  dave_interfaces__msg__StratifiedCurrentVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
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
  return true;
}

dave_interfaces__msg__StratifiedCurrentVelocity *
dave_interfaces__msg__StratifiedCurrentVelocity__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dave_interfaces__msg__StratifiedCurrentVelocity * msg = (dave_interfaces__msg__StratifiedCurrentVelocity *)allocator.allocate(sizeof(dave_interfaces__msg__StratifiedCurrentVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dave_interfaces__msg__StratifiedCurrentVelocity));
  bool success = dave_interfaces__msg__StratifiedCurrentVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dave_interfaces__msg__StratifiedCurrentVelocity__destroy(dave_interfaces__msg__StratifiedCurrentVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dave_interfaces__msg__StratifiedCurrentVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__init(dave_interfaces__msg__StratifiedCurrentVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dave_interfaces__msg__StratifiedCurrentVelocity * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dave_interfaces__msg__StratifiedCurrentVelocity)) {
      return false;
    }
    data = (dave_interfaces__msg__StratifiedCurrentVelocity *)allocator.zero_allocate(size, sizeof(dave_interfaces__msg__StratifiedCurrentVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dave_interfaces__msg__StratifiedCurrentVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dave_interfaces__msg__StratifiedCurrentVelocity__fini(&data[i - 1]);
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
dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__fini(dave_interfaces__msg__StratifiedCurrentVelocity__Sequence * array)
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
      dave_interfaces__msg__StratifiedCurrentVelocity__fini(&array->data[i]);
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

dave_interfaces__msg__StratifiedCurrentVelocity__Sequence *
dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dave_interfaces__msg__StratifiedCurrentVelocity__Sequence * array = (dave_interfaces__msg__StratifiedCurrentVelocity__Sequence *)allocator.allocate(sizeof(dave_interfaces__msg__StratifiedCurrentVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__destroy(dave_interfaces__msg__StratifiedCurrentVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__are_equal(const dave_interfaces__msg__StratifiedCurrentVelocity__Sequence * lhs, const dave_interfaces__msg__StratifiedCurrentVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dave_interfaces__msg__StratifiedCurrentVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dave_interfaces__msg__StratifiedCurrentVelocity__Sequence__copy(
  const dave_interfaces__msg__StratifiedCurrentVelocity__Sequence * input,
  dave_interfaces__msg__StratifiedCurrentVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dave_interfaces__msg__StratifiedCurrentVelocity)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dave_interfaces__msg__StratifiedCurrentVelocity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dave_interfaces__msg__StratifiedCurrentVelocity * data =
      (dave_interfaces__msg__StratifiedCurrentVelocity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dave_interfaces__msg__StratifiedCurrentVelocity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dave_interfaces__msg__StratifiedCurrentVelocity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dave_interfaces__msg__StratifiedCurrentVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
