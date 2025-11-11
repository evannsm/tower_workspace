// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mocap4r2_msgs:msg/FullState.idl
// generated code does not contain a copyright notice
#include "mocap4r2_msgs/msg/detail/full_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mocap4r2_msgs__msg__FullState__init(mocap4r2_msgs__msg__FullState * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // velocity
  // acceleration
  // q
  // angular_velocity
  return true;
}

void
mocap4r2_msgs__msg__FullState__fini(mocap4r2_msgs__msg__FullState * msg)
{
  if (!msg) {
    return;
  }
  // position
  // velocity
  // acceleration
  // q
  // angular_velocity
}

bool
mocap4r2_msgs__msg__FullState__are_equal(const mocap4r2_msgs__msg__FullState * lhs, const mocap4r2_msgs__msg__FullState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->velocity[i] != rhs->velocity[i]) {
      return false;
    }
  }
  // acceleration
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->acceleration[i] != rhs->acceleration[i]) {
      return false;
    }
  }
  // q
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->q[i] != rhs->q[i]) {
      return false;
    }
  }
  // angular_velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->angular_velocity[i] != rhs->angular_velocity[i]) {
      return false;
    }
  }
  return true;
}

bool
mocap4r2_msgs__msg__FullState__copy(
  const mocap4r2_msgs__msg__FullState * input,
  mocap4r2_msgs__msg__FullState * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  for (size_t i = 0; i < 3; ++i) {
    output->position[i] = input->position[i];
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    output->velocity[i] = input->velocity[i];
  }
  // acceleration
  for (size_t i = 0; i < 3; ++i) {
    output->acceleration[i] = input->acceleration[i];
  }
  // q
  for (size_t i = 0; i < 4; ++i) {
    output->q[i] = input->q[i];
  }
  // angular_velocity
  for (size_t i = 0; i < 3; ++i) {
    output->angular_velocity[i] = input->angular_velocity[i];
  }
  return true;
}

mocap4r2_msgs__msg__FullState *
mocap4r2_msgs__msg__FullState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_msgs__msg__FullState * msg = (mocap4r2_msgs__msg__FullState *)allocator.allocate(sizeof(mocap4r2_msgs__msg__FullState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap4r2_msgs__msg__FullState));
  bool success = mocap4r2_msgs__msg__FullState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mocap4r2_msgs__msg__FullState__destroy(mocap4r2_msgs__msg__FullState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mocap4r2_msgs__msg__FullState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mocap4r2_msgs__msg__FullState__Sequence__init(mocap4r2_msgs__msg__FullState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_msgs__msg__FullState * data = NULL;

  if (size) {
    data = (mocap4r2_msgs__msg__FullState *)allocator.zero_allocate(size, sizeof(mocap4r2_msgs__msg__FullState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap4r2_msgs__msg__FullState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap4r2_msgs__msg__FullState__fini(&data[i - 1]);
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
mocap4r2_msgs__msg__FullState__Sequence__fini(mocap4r2_msgs__msg__FullState__Sequence * array)
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
      mocap4r2_msgs__msg__FullState__fini(&array->data[i]);
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

mocap4r2_msgs__msg__FullState__Sequence *
mocap4r2_msgs__msg__FullState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_msgs__msg__FullState__Sequence * array = (mocap4r2_msgs__msg__FullState__Sequence *)allocator.allocate(sizeof(mocap4r2_msgs__msg__FullState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mocap4r2_msgs__msg__FullState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mocap4r2_msgs__msg__FullState__Sequence__destroy(mocap4r2_msgs__msg__FullState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mocap4r2_msgs__msg__FullState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mocap4r2_msgs__msg__FullState__Sequence__are_equal(const mocap4r2_msgs__msg__FullState__Sequence * lhs, const mocap4r2_msgs__msg__FullState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mocap4r2_msgs__msg__FullState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mocap4r2_msgs__msg__FullState__Sequence__copy(
  const mocap4r2_msgs__msg__FullState__Sequence * input,
  mocap4r2_msgs__msg__FullState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mocap4r2_msgs__msg__FullState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mocap4r2_msgs__msg__FullState * data =
      (mocap4r2_msgs__msg__FullState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mocap4r2_msgs__msg__FullState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mocap4r2_msgs__msg__FullState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mocap4r2_msgs__msg__FullState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
