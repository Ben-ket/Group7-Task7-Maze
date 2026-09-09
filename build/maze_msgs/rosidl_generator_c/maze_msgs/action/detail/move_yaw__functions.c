// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from maze_msgs:action/MoveYaw.idl
// generated code does not contain a copyright notice
#include "maze_msgs/action/detail/move_yaw__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
maze_msgs__action__MoveYaw_Goal__init(maze_msgs__action__MoveYaw_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // angle
  // speed
  return true;
}

void
maze_msgs__action__MoveYaw_Goal__fini(maze_msgs__action__MoveYaw_Goal * msg)
{
  if (!msg) {
    return;
  }
  // angle
  // speed
}

bool
maze_msgs__action__MoveYaw_Goal__are_equal(const maze_msgs__action__MoveYaw_Goal * lhs, const maze_msgs__action__MoveYaw_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_Goal__copy(
  const maze_msgs__action__MoveYaw_Goal * input,
  maze_msgs__action__MoveYaw_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // angle
  output->angle = input->angle;
  // speed
  output->speed = input->speed;
  return true;
}

maze_msgs__action__MoveYaw_Goal *
maze_msgs__action__MoveYaw_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_Goal * msg = (maze_msgs__action__MoveYaw_Goal *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_msgs__action__MoveYaw_Goal));
  bool success = maze_msgs__action__MoveYaw_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_msgs__action__MoveYaw_Goal__destroy(maze_msgs__action__MoveYaw_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_msgs__action__MoveYaw_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_msgs__action__MoveYaw_Goal__Sequence__init(maze_msgs__action__MoveYaw_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_Goal)) {
      return false;
    }
    data = (maze_msgs__action__MoveYaw_Goal *)allocator.zero_allocate(size, sizeof(maze_msgs__action__MoveYaw_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_msgs__action__MoveYaw_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_msgs__action__MoveYaw_Goal__fini(&data[i - 1]);
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
maze_msgs__action__MoveYaw_Goal__Sequence__fini(maze_msgs__action__MoveYaw_Goal__Sequence * array)
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
      maze_msgs__action__MoveYaw_Goal__fini(&array->data[i]);
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

maze_msgs__action__MoveYaw_Goal__Sequence *
maze_msgs__action__MoveYaw_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_Goal__Sequence * array = (maze_msgs__action__MoveYaw_Goal__Sequence *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_msgs__action__MoveYaw_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_msgs__action__MoveYaw_Goal__Sequence__destroy(maze_msgs__action__MoveYaw_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_msgs__action__MoveYaw_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_msgs__action__MoveYaw_Goal__Sequence__are_equal(const maze_msgs__action__MoveYaw_Goal__Sequence * lhs, const maze_msgs__action__MoveYaw_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_msgs__action__MoveYaw_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_Goal__Sequence__copy(
  const maze_msgs__action__MoveYaw_Goal__Sequence * input,
  maze_msgs__action__MoveYaw_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_msgs__action__MoveYaw_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_msgs__action__MoveYaw_Goal * data =
      (maze_msgs__action__MoveYaw_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_msgs__action__MoveYaw_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_msgs__action__MoveYaw_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_msgs__action__MoveYaw_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
maze_msgs__action__MoveYaw_Result__init(maze_msgs__action__MoveYaw_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // total_angle_turned
  return true;
}

void
maze_msgs__action__MoveYaw_Result__fini(maze_msgs__action__MoveYaw_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // total_angle_turned
}

bool
maze_msgs__action__MoveYaw_Result__are_equal(const maze_msgs__action__MoveYaw_Result * lhs, const maze_msgs__action__MoveYaw_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // total_angle_turned
  if (lhs->total_angle_turned != rhs->total_angle_turned) {
    return false;
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_Result__copy(
  const maze_msgs__action__MoveYaw_Result * input,
  maze_msgs__action__MoveYaw_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // total_angle_turned
  output->total_angle_turned = input->total_angle_turned;
  return true;
}

maze_msgs__action__MoveYaw_Result *
maze_msgs__action__MoveYaw_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_Result * msg = (maze_msgs__action__MoveYaw_Result *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_msgs__action__MoveYaw_Result));
  bool success = maze_msgs__action__MoveYaw_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_msgs__action__MoveYaw_Result__destroy(maze_msgs__action__MoveYaw_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_msgs__action__MoveYaw_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_msgs__action__MoveYaw_Result__Sequence__init(maze_msgs__action__MoveYaw_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_Result)) {
      return false;
    }
    data = (maze_msgs__action__MoveYaw_Result *)allocator.zero_allocate(size, sizeof(maze_msgs__action__MoveYaw_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_msgs__action__MoveYaw_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_msgs__action__MoveYaw_Result__fini(&data[i - 1]);
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
maze_msgs__action__MoveYaw_Result__Sequence__fini(maze_msgs__action__MoveYaw_Result__Sequence * array)
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
      maze_msgs__action__MoveYaw_Result__fini(&array->data[i]);
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

maze_msgs__action__MoveYaw_Result__Sequence *
maze_msgs__action__MoveYaw_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_Result__Sequence * array = (maze_msgs__action__MoveYaw_Result__Sequence *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_msgs__action__MoveYaw_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_msgs__action__MoveYaw_Result__Sequence__destroy(maze_msgs__action__MoveYaw_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_msgs__action__MoveYaw_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_msgs__action__MoveYaw_Result__Sequence__are_equal(const maze_msgs__action__MoveYaw_Result__Sequence * lhs, const maze_msgs__action__MoveYaw_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_msgs__action__MoveYaw_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_Result__Sequence__copy(
  const maze_msgs__action__MoveYaw_Result__Sequence * input,
  maze_msgs__action__MoveYaw_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_msgs__action__MoveYaw_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_msgs__action__MoveYaw_Result * data =
      (maze_msgs__action__MoveYaw_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_msgs__action__MoveYaw_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_msgs__action__MoveYaw_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_msgs__action__MoveYaw_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
maze_msgs__action__MoveYaw_Feedback__init(maze_msgs__action__MoveYaw_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_angle
  return true;
}

void
maze_msgs__action__MoveYaw_Feedback__fini(maze_msgs__action__MoveYaw_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_angle
}

bool
maze_msgs__action__MoveYaw_Feedback__are_equal(const maze_msgs__action__MoveYaw_Feedback * lhs, const maze_msgs__action__MoveYaw_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_angle
  if (lhs->current_angle != rhs->current_angle) {
    return false;
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_Feedback__copy(
  const maze_msgs__action__MoveYaw_Feedback * input,
  maze_msgs__action__MoveYaw_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_angle
  output->current_angle = input->current_angle;
  return true;
}

maze_msgs__action__MoveYaw_Feedback *
maze_msgs__action__MoveYaw_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_Feedback * msg = (maze_msgs__action__MoveYaw_Feedback *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_msgs__action__MoveYaw_Feedback));
  bool success = maze_msgs__action__MoveYaw_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_msgs__action__MoveYaw_Feedback__destroy(maze_msgs__action__MoveYaw_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_msgs__action__MoveYaw_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_msgs__action__MoveYaw_Feedback__Sequence__init(maze_msgs__action__MoveYaw_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_Feedback)) {
      return false;
    }
    data = (maze_msgs__action__MoveYaw_Feedback *)allocator.zero_allocate(size, sizeof(maze_msgs__action__MoveYaw_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_msgs__action__MoveYaw_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_msgs__action__MoveYaw_Feedback__fini(&data[i - 1]);
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
maze_msgs__action__MoveYaw_Feedback__Sequence__fini(maze_msgs__action__MoveYaw_Feedback__Sequence * array)
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
      maze_msgs__action__MoveYaw_Feedback__fini(&array->data[i]);
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

maze_msgs__action__MoveYaw_Feedback__Sequence *
maze_msgs__action__MoveYaw_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_Feedback__Sequence * array = (maze_msgs__action__MoveYaw_Feedback__Sequence *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_msgs__action__MoveYaw_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_msgs__action__MoveYaw_Feedback__Sequence__destroy(maze_msgs__action__MoveYaw_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_msgs__action__MoveYaw_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_msgs__action__MoveYaw_Feedback__Sequence__are_equal(const maze_msgs__action__MoveYaw_Feedback__Sequence * lhs, const maze_msgs__action__MoveYaw_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_msgs__action__MoveYaw_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_Feedback__Sequence__copy(
  const maze_msgs__action__MoveYaw_Feedback__Sequence * input,
  maze_msgs__action__MoveYaw_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_msgs__action__MoveYaw_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_msgs__action__MoveYaw_Feedback * data =
      (maze_msgs__action__MoveYaw_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_msgs__action__MoveYaw_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_msgs__action__MoveYaw_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_msgs__action__MoveYaw_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"

bool
maze_msgs__action__MoveYaw_SendGoal_Request__init(maze_msgs__action__MoveYaw_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    maze_msgs__action__MoveYaw_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!maze_msgs__action__MoveYaw_Goal__init(&msg->goal)) {
    maze_msgs__action__MoveYaw_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
maze_msgs__action__MoveYaw_SendGoal_Request__fini(maze_msgs__action__MoveYaw_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  maze_msgs__action__MoveYaw_Goal__fini(&msg->goal);
}

bool
maze_msgs__action__MoveYaw_SendGoal_Request__are_equal(const maze_msgs__action__MoveYaw_SendGoal_Request * lhs, const maze_msgs__action__MoveYaw_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!maze_msgs__action__MoveYaw_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_SendGoal_Request__copy(
  const maze_msgs__action__MoveYaw_SendGoal_Request * input,
  maze_msgs__action__MoveYaw_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!maze_msgs__action__MoveYaw_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

maze_msgs__action__MoveYaw_SendGoal_Request *
maze_msgs__action__MoveYaw_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_SendGoal_Request * msg = (maze_msgs__action__MoveYaw_SendGoal_Request *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_msgs__action__MoveYaw_SendGoal_Request));
  bool success = maze_msgs__action__MoveYaw_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_msgs__action__MoveYaw_SendGoal_Request__destroy(maze_msgs__action__MoveYaw_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_msgs__action__MoveYaw_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_msgs__action__MoveYaw_SendGoal_Request__Sequence__init(maze_msgs__action__MoveYaw_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_SendGoal_Request)) {
      return false;
    }
    data = (maze_msgs__action__MoveYaw_SendGoal_Request *)allocator.zero_allocate(size, sizeof(maze_msgs__action__MoveYaw_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_msgs__action__MoveYaw_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_msgs__action__MoveYaw_SendGoal_Request__fini(&data[i - 1]);
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
maze_msgs__action__MoveYaw_SendGoal_Request__Sequence__fini(maze_msgs__action__MoveYaw_SendGoal_Request__Sequence * array)
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
      maze_msgs__action__MoveYaw_SendGoal_Request__fini(&array->data[i]);
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

maze_msgs__action__MoveYaw_SendGoal_Request__Sequence *
maze_msgs__action__MoveYaw_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_SendGoal_Request__Sequence * array = (maze_msgs__action__MoveYaw_SendGoal_Request__Sequence *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_msgs__action__MoveYaw_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_msgs__action__MoveYaw_SendGoal_Request__Sequence__destroy(maze_msgs__action__MoveYaw_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_msgs__action__MoveYaw_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_msgs__action__MoveYaw_SendGoal_Request__Sequence__are_equal(const maze_msgs__action__MoveYaw_SendGoal_Request__Sequence * lhs, const maze_msgs__action__MoveYaw_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_msgs__action__MoveYaw_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_SendGoal_Request__Sequence__copy(
  const maze_msgs__action__MoveYaw_SendGoal_Request__Sequence * input,
  maze_msgs__action__MoveYaw_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_msgs__action__MoveYaw_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_msgs__action__MoveYaw_SendGoal_Request * data =
      (maze_msgs__action__MoveYaw_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_msgs__action__MoveYaw_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_msgs__action__MoveYaw_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_msgs__action__MoveYaw_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
maze_msgs__action__MoveYaw_SendGoal_Response__init(maze_msgs__action__MoveYaw_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    maze_msgs__action__MoveYaw_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
maze_msgs__action__MoveYaw_SendGoal_Response__fini(maze_msgs__action__MoveYaw_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
maze_msgs__action__MoveYaw_SendGoal_Response__are_equal(const maze_msgs__action__MoveYaw_SendGoal_Response * lhs, const maze_msgs__action__MoveYaw_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_SendGoal_Response__copy(
  const maze_msgs__action__MoveYaw_SendGoal_Response * input,
  maze_msgs__action__MoveYaw_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

maze_msgs__action__MoveYaw_SendGoal_Response *
maze_msgs__action__MoveYaw_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_SendGoal_Response * msg = (maze_msgs__action__MoveYaw_SendGoal_Response *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_msgs__action__MoveYaw_SendGoal_Response));
  bool success = maze_msgs__action__MoveYaw_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_msgs__action__MoveYaw_SendGoal_Response__destroy(maze_msgs__action__MoveYaw_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_msgs__action__MoveYaw_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_msgs__action__MoveYaw_SendGoal_Response__Sequence__init(maze_msgs__action__MoveYaw_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_SendGoal_Response)) {
      return false;
    }
    data = (maze_msgs__action__MoveYaw_SendGoal_Response *)allocator.zero_allocate(size, sizeof(maze_msgs__action__MoveYaw_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_msgs__action__MoveYaw_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_msgs__action__MoveYaw_SendGoal_Response__fini(&data[i - 1]);
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
maze_msgs__action__MoveYaw_SendGoal_Response__Sequence__fini(maze_msgs__action__MoveYaw_SendGoal_Response__Sequence * array)
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
      maze_msgs__action__MoveYaw_SendGoal_Response__fini(&array->data[i]);
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

maze_msgs__action__MoveYaw_SendGoal_Response__Sequence *
maze_msgs__action__MoveYaw_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_SendGoal_Response__Sequence * array = (maze_msgs__action__MoveYaw_SendGoal_Response__Sequence *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_msgs__action__MoveYaw_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_msgs__action__MoveYaw_SendGoal_Response__Sequence__destroy(maze_msgs__action__MoveYaw_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_msgs__action__MoveYaw_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_msgs__action__MoveYaw_SendGoal_Response__Sequence__are_equal(const maze_msgs__action__MoveYaw_SendGoal_Response__Sequence * lhs, const maze_msgs__action__MoveYaw_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_msgs__action__MoveYaw_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_SendGoal_Response__Sequence__copy(
  const maze_msgs__action__MoveYaw_SendGoal_Response__Sequence * input,
  maze_msgs__action__MoveYaw_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_msgs__action__MoveYaw_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_msgs__action__MoveYaw_SendGoal_Response * data =
      (maze_msgs__action__MoveYaw_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_msgs__action__MoveYaw_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_msgs__action__MoveYaw_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_msgs__action__MoveYaw_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"

bool
maze_msgs__action__MoveYaw_SendGoal_Event__init(maze_msgs__action__MoveYaw_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    maze_msgs__action__MoveYaw_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!maze_msgs__action__MoveYaw_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    maze_msgs__action__MoveYaw_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!maze_msgs__action__MoveYaw_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    maze_msgs__action__MoveYaw_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
maze_msgs__action__MoveYaw_SendGoal_Event__fini(maze_msgs__action__MoveYaw_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  maze_msgs__action__MoveYaw_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  maze_msgs__action__MoveYaw_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
maze_msgs__action__MoveYaw_SendGoal_Event__are_equal(const maze_msgs__action__MoveYaw_SendGoal_Event * lhs, const maze_msgs__action__MoveYaw_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!maze_msgs__action__MoveYaw_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!maze_msgs__action__MoveYaw_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_SendGoal_Event__copy(
  const maze_msgs__action__MoveYaw_SendGoal_Event * input,
  maze_msgs__action__MoveYaw_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!maze_msgs__action__MoveYaw_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!maze_msgs__action__MoveYaw_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

maze_msgs__action__MoveYaw_SendGoal_Event *
maze_msgs__action__MoveYaw_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_SendGoal_Event * msg = (maze_msgs__action__MoveYaw_SendGoal_Event *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_msgs__action__MoveYaw_SendGoal_Event));
  bool success = maze_msgs__action__MoveYaw_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_msgs__action__MoveYaw_SendGoal_Event__destroy(maze_msgs__action__MoveYaw_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_msgs__action__MoveYaw_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_msgs__action__MoveYaw_SendGoal_Event__Sequence__init(maze_msgs__action__MoveYaw_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_SendGoal_Event)) {
      return false;
    }
    data = (maze_msgs__action__MoveYaw_SendGoal_Event *)allocator.zero_allocate(size, sizeof(maze_msgs__action__MoveYaw_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_msgs__action__MoveYaw_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_msgs__action__MoveYaw_SendGoal_Event__fini(&data[i - 1]);
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
maze_msgs__action__MoveYaw_SendGoal_Event__Sequence__fini(maze_msgs__action__MoveYaw_SendGoal_Event__Sequence * array)
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
      maze_msgs__action__MoveYaw_SendGoal_Event__fini(&array->data[i]);
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

maze_msgs__action__MoveYaw_SendGoal_Event__Sequence *
maze_msgs__action__MoveYaw_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_SendGoal_Event__Sequence * array = (maze_msgs__action__MoveYaw_SendGoal_Event__Sequence *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_msgs__action__MoveYaw_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_msgs__action__MoveYaw_SendGoal_Event__Sequence__destroy(maze_msgs__action__MoveYaw_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_msgs__action__MoveYaw_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_msgs__action__MoveYaw_SendGoal_Event__Sequence__are_equal(const maze_msgs__action__MoveYaw_SendGoal_Event__Sequence * lhs, const maze_msgs__action__MoveYaw_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_msgs__action__MoveYaw_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_SendGoal_Event__Sequence__copy(
  const maze_msgs__action__MoveYaw_SendGoal_Event__Sequence * input,
  maze_msgs__action__MoveYaw_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_msgs__action__MoveYaw_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_msgs__action__MoveYaw_SendGoal_Event * data =
      (maze_msgs__action__MoveYaw_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_msgs__action__MoveYaw_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_msgs__action__MoveYaw_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_msgs__action__MoveYaw_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
maze_msgs__action__MoveYaw_GetResult_Request__init(maze_msgs__action__MoveYaw_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    maze_msgs__action__MoveYaw_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
maze_msgs__action__MoveYaw_GetResult_Request__fini(maze_msgs__action__MoveYaw_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
maze_msgs__action__MoveYaw_GetResult_Request__are_equal(const maze_msgs__action__MoveYaw_GetResult_Request * lhs, const maze_msgs__action__MoveYaw_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_GetResult_Request__copy(
  const maze_msgs__action__MoveYaw_GetResult_Request * input,
  maze_msgs__action__MoveYaw_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

maze_msgs__action__MoveYaw_GetResult_Request *
maze_msgs__action__MoveYaw_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_GetResult_Request * msg = (maze_msgs__action__MoveYaw_GetResult_Request *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_msgs__action__MoveYaw_GetResult_Request));
  bool success = maze_msgs__action__MoveYaw_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_msgs__action__MoveYaw_GetResult_Request__destroy(maze_msgs__action__MoveYaw_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_msgs__action__MoveYaw_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_msgs__action__MoveYaw_GetResult_Request__Sequence__init(maze_msgs__action__MoveYaw_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_GetResult_Request)) {
      return false;
    }
    data = (maze_msgs__action__MoveYaw_GetResult_Request *)allocator.zero_allocate(size, sizeof(maze_msgs__action__MoveYaw_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_msgs__action__MoveYaw_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_msgs__action__MoveYaw_GetResult_Request__fini(&data[i - 1]);
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
maze_msgs__action__MoveYaw_GetResult_Request__Sequence__fini(maze_msgs__action__MoveYaw_GetResult_Request__Sequence * array)
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
      maze_msgs__action__MoveYaw_GetResult_Request__fini(&array->data[i]);
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

maze_msgs__action__MoveYaw_GetResult_Request__Sequence *
maze_msgs__action__MoveYaw_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_GetResult_Request__Sequence * array = (maze_msgs__action__MoveYaw_GetResult_Request__Sequence *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_msgs__action__MoveYaw_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_msgs__action__MoveYaw_GetResult_Request__Sequence__destroy(maze_msgs__action__MoveYaw_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_msgs__action__MoveYaw_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_msgs__action__MoveYaw_GetResult_Request__Sequence__are_equal(const maze_msgs__action__MoveYaw_GetResult_Request__Sequence * lhs, const maze_msgs__action__MoveYaw_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_msgs__action__MoveYaw_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_GetResult_Request__Sequence__copy(
  const maze_msgs__action__MoveYaw_GetResult_Request__Sequence * input,
  maze_msgs__action__MoveYaw_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_msgs__action__MoveYaw_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_msgs__action__MoveYaw_GetResult_Request * data =
      (maze_msgs__action__MoveYaw_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_msgs__action__MoveYaw_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_msgs__action__MoveYaw_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_msgs__action__MoveYaw_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"

bool
maze_msgs__action__MoveYaw_GetResult_Response__init(maze_msgs__action__MoveYaw_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!maze_msgs__action__MoveYaw_Result__init(&msg->result)) {
    maze_msgs__action__MoveYaw_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
maze_msgs__action__MoveYaw_GetResult_Response__fini(maze_msgs__action__MoveYaw_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  maze_msgs__action__MoveYaw_Result__fini(&msg->result);
}

bool
maze_msgs__action__MoveYaw_GetResult_Response__are_equal(const maze_msgs__action__MoveYaw_GetResult_Response * lhs, const maze_msgs__action__MoveYaw_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!maze_msgs__action__MoveYaw_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_GetResult_Response__copy(
  const maze_msgs__action__MoveYaw_GetResult_Response * input,
  maze_msgs__action__MoveYaw_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!maze_msgs__action__MoveYaw_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

maze_msgs__action__MoveYaw_GetResult_Response *
maze_msgs__action__MoveYaw_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_GetResult_Response * msg = (maze_msgs__action__MoveYaw_GetResult_Response *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_msgs__action__MoveYaw_GetResult_Response));
  bool success = maze_msgs__action__MoveYaw_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_msgs__action__MoveYaw_GetResult_Response__destroy(maze_msgs__action__MoveYaw_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_msgs__action__MoveYaw_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_msgs__action__MoveYaw_GetResult_Response__Sequence__init(maze_msgs__action__MoveYaw_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_GetResult_Response)) {
      return false;
    }
    data = (maze_msgs__action__MoveYaw_GetResult_Response *)allocator.zero_allocate(size, sizeof(maze_msgs__action__MoveYaw_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_msgs__action__MoveYaw_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_msgs__action__MoveYaw_GetResult_Response__fini(&data[i - 1]);
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
maze_msgs__action__MoveYaw_GetResult_Response__Sequence__fini(maze_msgs__action__MoveYaw_GetResult_Response__Sequence * array)
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
      maze_msgs__action__MoveYaw_GetResult_Response__fini(&array->data[i]);
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

maze_msgs__action__MoveYaw_GetResult_Response__Sequence *
maze_msgs__action__MoveYaw_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_GetResult_Response__Sequence * array = (maze_msgs__action__MoveYaw_GetResult_Response__Sequence *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_msgs__action__MoveYaw_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_msgs__action__MoveYaw_GetResult_Response__Sequence__destroy(maze_msgs__action__MoveYaw_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_msgs__action__MoveYaw_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_msgs__action__MoveYaw_GetResult_Response__Sequence__are_equal(const maze_msgs__action__MoveYaw_GetResult_Response__Sequence * lhs, const maze_msgs__action__MoveYaw_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_msgs__action__MoveYaw_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_GetResult_Response__Sequence__copy(
  const maze_msgs__action__MoveYaw_GetResult_Response__Sequence * input,
  maze_msgs__action__MoveYaw_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_msgs__action__MoveYaw_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_msgs__action__MoveYaw_GetResult_Response * data =
      (maze_msgs__action__MoveYaw_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_msgs__action__MoveYaw_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_msgs__action__MoveYaw_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_msgs__action__MoveYaw_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"

bool
maze_msgs__action__MoveYaw_GetResult_Event__init(maze_msgs__action__MoveYaw_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    maze_msgs__action__MoveYaw_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!maze_msgs__action__MoveYaw_GetResult_Request__Sequence__init(&msg->request, 0)) {
    maze_msgs__action__MoveYaw_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!maze_msgs__action__MoveYaw_GetResult_Response__Sequence__init(&msg->response, 0)) {
    maze_msgs__action__MoveYaw_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
maze_msgs__action__MoveYaw_GetResult_Event__fini(maze_msgs__action__MoveYaw_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  maze_msgs__action__MoveYaw_GetResult_Request__Sequence__fini(&msg->request);
  // response
  maze_msgs__action__MoveYaw_GetResult_Response__Sequence__fini(&msg->response);
}

bool
maze_msgs__action__MoveYaw_GetResult_Event__are_equal(const maze_msgs__action__MoveYaw_GetResult_Event * lhs, const maze_msgs__action__MoveYaw_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!maze_msgs__action__MoveYaw_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!maze_msgs__action__MoveYaw_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_GetResult_Event__copy(
  const maze_msgs__action__MoveYaw_GetResult_Event * input,
  maze_msgs__action__MoveYaw_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!maze_msgs__action__MoveYaw_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!maze_msgs__action__MoveYaw_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

maze_msgs__action__MoveYaw_GetResult_Event *
maze_msgs__action__MoveYaw_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_GetResult_Event * msg = (maze_msgs__action__MoveYaw_GetResult_Event *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_msgs__action__MoveYaw_GetResult_Event));
  bool success = maze_msgs__action__MoveYaw_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_msgs__action__MoveYaw_GetResult_Event__destroy(maze_msgs__action__MoveYaw_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_msgs__action__MoveYaw_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_msgs__action__MoveYaw_GetResult_Event__Sequence__init(maze_msgs__action__MoveYaw_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_GetResult_Event)) {
      return false;
    }
    data = (maze_msgs__action__MoveYaw_GetResult_Event *)allocator.zero_allocate(size, sizeof(maze_msgs__action__MoveYaw_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_msgs__action__MoveYaw_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_msgs__action__MoveYaw_GetResult_Event__fini(&data[i - 1]);
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
maze_msgs__action__MoveYaw_GetResult_Event__Sequence__fini(maze_msgs__action__MoveYaw_GetResult_Event__Sequence * array)
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
      maze_msgs__action__MoveYaw_GetResult_Event__fini(&array->data[i]);
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

maze_msgs__action__MoveYaw_GetResult_Event__Sequence *
maze_msgs__action__MoveYaw_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_GetResult_Event__Sequence * array = (maze_msgs__action__MoveYaw_GetResult_Event__Sequence *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_msgs__action__MoveYaw_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_msgs__action__MoveYaw_GetResult_Event__Sequence__destroy(maze_msgs__action__MoveYaw_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_msgs__action__MoveYaw_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_msgs__action__MoveYaw_GetResult_Event__Sequence__are_equal(const maze_msgs__action__MoveYaw_GetResult_Event__Sequence * lhs, const maze_msgs__action__MoveYaw_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_msgs__action__MoveYaw_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_GetResult_Event__Sequence__copy(
  const maze_msgs__action__MoveYaw_GetResult_Event__Sequence * input,
  maze_msgs__action__MoveYaw_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_msgs__action__MoveYaw_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_msgs__action__MoveYaw_GetResult_Event * data =
      (maze_msgs__action__MoveYaw_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_msgs__action__MoveYaw_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_msgs__action__MoveYaw_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_msgs__action__MoveYaw_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"

bool
maze_msgs__action__MoveYaw_FeedbackMessage__init(maze_msgs__action__MoveYaw_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    maze_msgs__action__MoveYaw_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!maze_msgs__action__MoveYaw_Feedback__init(&msg->feedback)) {
    maze_msgs__action__MoveYaw_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
maze_msgs__action__MoveYaw_FeedbackMessage__fini(maze_msgs__action__MoveYaw_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  maze_msgs__action__MoveYaw_Feedback__fini(&msg->feedback);
}

bool
maze_msgs__action__MoveYaw_FeedbackMessage__are_equal(const maze_msgs__action__MoveYaw_FeedbackMessage * lhs, const maze_msgs__action__MoveYaw_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!maze_msgs__action__MoveYaw_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_FeedbackMessage__copy(
  const maze_msgs__action__MoveYaw_FeedbackMessage * input,
  maze_msgs__action__MoveYaw_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!maze_msgs__action__MoveYaw_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

maze_msgs__action__MoveYaw_FeedbackMessage *
maze_msgs__action__MoveYaw_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_FeedbackMessage * msg = (maze_msgs__action__MoveYaw_FeedbackMessage *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_msgs__action__MoveYaw_FeedbackMessage));
  bool success = maze_msgs__action__MoveYaw_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_msgs__action__MoveYaw_FeedbackMessage__destroy(maze_msgs__action__MoveYaw_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_msgs__action__MoveYaw_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_msgs__action__MoveYaw_FeedbackMessage__Sequence__init(maze_msgs__action__MoveYaw_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_FeedbackMessage)) {
      return false;
    }
    data = (maze_msgs__action__MoveYaw_FeedbackMessage *)allocator.zero_allocate(size, sizeof(maze_msgs__action__MoveYaw_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_msgs__action__MoveYaw_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_msgs__action__MoveYaw_FeedbackMessage__fini(&data[i - 1]);
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
maze_msgs__action__MoveYaw_FeedbackMessage__Sequence__fini(maze_msgs__action__MoveYaw_FeedbackMessage__Sequence * array)
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
      maze_msgs__action__MoveYaw_FeedbackMessage__fini(&array->data[i]);
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

maze_msgs__action__MoveYaw_FeedbackMessage__Sequence *
maze_msgs__action__MoveYaw_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_msgs__action__MoveYaw_FeedbackMessage__Sequence * array = (maze_msgs__action__MoveYaw_FeedbackMessage__Sequence *)allocator.allocate(sizeof(maze_msgs__action__MoveYaw_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_msgs__action__MoveYaw_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_msgs__action__MoveYaw_FeedbackMessage__Sequence__destroy(maze_msgs__action__MoveYaw_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_msgs__action__MoveYaw_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_msgs__action__MoveYaw_FeedbackMessage__Sequence__are_equal(const maze_msgs__action__MoveYaw_FeedbackMessage__Sequence * lhs, const maze_msgs__action__MoveYaw_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_msgs__action__MoveYaw_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_msgs__action__MoveYaw_FeedbackMessage__Sequence__copy(
  const maze_msgs__action__MoveYaw_FeedbackMessage__Sequence * input,
  maze_msgs__action__MoveYaw_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_msgs__action__MoveYaw_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_msgs__action__MoveYaw_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_msgs__action__MoveYaw_FeedbackMessage * data =
      (maze_msgs__action__MoveYaw_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_msgs__action__MoveYaw_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_msgs__action__MoveYaw_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_msgs__action__MoveYaw_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
