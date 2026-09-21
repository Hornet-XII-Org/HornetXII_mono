// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dave_interfaces:msg/DVLBeam.idl
// generated code does not contain a copyright notice
#include "dave_interfaces/msg/detail/dvl_beam__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reference`
#include "rosidl_runtime_c/string_functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"

bool
dave_interfaces__msg__DVLBeam__init(dave_interfaces__msg__DVLBeam * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // reference
  if (!rosidl_runtime_c__String__init(&msg->reference)) {
    dave_interfaces__msg__DVLBeam__fini(msg);
    return false;
  }
  // range
  // locked
  // velocity
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->velocity)) {
    dave_interfaces__msg__DVLBeam__fini(msg);
    return false;
  }
  return true;
}

void
dave_interfaces__msg__DVLBeam__fini(dave_interfaces__msg__DVLBeam * msg)
{
  if (!msg) {
    return;
  }
  // id
  // reference
  rosidl_runtime_c__String__fini(&msg->reference);
  // range
  // locked
  // velocity
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->velocity);
}

bool
dave_interfaces__msg__DVLBeam__are_equal(const dave_interfaces__msg__DVLBeam * lhs, const dave_interfaces__msg__DVLBeam * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // reference
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reference), &(rhs->reference)))
  {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // locked
  if (lhs->locked != rhs->locked) {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  return true;
}

bool
dave_interfaces__msg__DVLBeam__copy(
  const dave_interfaces__msg__DVLBeam * input,
  dave_interfaces__msg__DVLBeam * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // reference
  if (!rosidl_runtime_c__String__copy(
      &(input->reference), &(output->reference)))
  {
    return false;
  }
  // range
  output->range = input->range;
  // locked
  output->locked = input->locked;
  // velocity
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  return true;
}

dave_interfaces__msg__DVLBeam *
dave_interfaces__msg__DVLBeam__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dave_interfaces__msg__DVLBeam * msg = (dave_interfaces__msg__DVLBeam *)allocator.allocate(sizeof(dave_interfaces__msg__DVLBeam), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dave_interfaces__msg__DVLBeam));
  bool success = dave_interfaces__msg__DVLBeam__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dave_interfaces__msg__DVLBeam__destroy(dave_interfaces__msg__DVLBeam * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dave_interfaces__msg__DVLBeam__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dave_interfaces__msg__DVLBeam__Sequence__init(dave_interfaces__msg__DVLBeam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dave_interfaces__msg__DVLBeam * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dave_interfaces__msg__DVLBeam)) {
      return false;
    }
    data = (dave_interfaces__msg__DVLBeam *)allocator.zero_allocate(size, sizeof(dave_interfaces__msg__DVLBeam), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dave_interfaces__msg__DVLBeam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dave_interfaces__msg__DVLBeam__fini(&data[i - 1]);
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
dave_interfaces__msg__DVLBeam__Sequence__fini(dave_interfaces__msg__DVLBeam__Sequence * array)
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
      dave_interfaces__msg__DVLBeam__fini(&array->data[i]);
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

dave_interfaces__msg__DVLBeam__Sequence *
dave_interfaces__msg__DVLBeam__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dave_interfaces__msg__DVLBeam__Sequence * array = (dave_interfaces__msg__DVLBeam__Sequence *)allocator.allocate(sizeof(dave_interfaces__msg__DVLBeam__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dave_interfaces__msg__DVLBeam__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dave_interfaces__msg__DVLBeam__Sequence__destroy(dave_interfaces__msg__DVLBeam__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dave_interfaces__msg__DVLBeam__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dave_interfaces__msg__DVLBeam__Sequence__are_equal(const dave_interfaces__msg__DVLBeam__Sequence * lhs, const dave_interfaces__msg__DVLBeam__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dave_interfaces__msg__DVLBeam__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dave_interfaces__msg__DVLBeam__Sequence__copy(
  const dave_interfaces__msg__DVLBeam__Sequence * input,
  dave_interfaces__msg__DVLBeam__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dave_interfaces__msg__DVLBeam)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dave_interfaces__msg__DVLBeam);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dave_interfaces__msg__DVLBeam * data =
      (dave_interfaces__msg__DVLBeam *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dave_interfaces__msg__DVLBeam__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dave_interfaces__msg__DVLBeam__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dave_interfaces__msg__DVLBeam__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
