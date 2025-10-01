// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetection.idl
// generated code does not contain a copyright notice
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
conti_ars430_ros2_msgs__msg__RadarDetection__init(conti_ars430_ros2_msgs__msg__RadarDetection * msg)
{
  if (!msg) {
    return false;
  }
  // range
  // v_rel_rad
  // az_ang0
  // az_ang1
  // el_ang
  // rcs0
  // rcs1
  // prob0
  // prob1
  // range_var
  // v_rel_rad_var
  // az_ang0_var
  // az_ang1_var
  // el_ang_var
  // prob_false_alarm
  // snr
  return true;
}

void
conti_ars430_ros2_msgs__msg__RadarDetection__fini(conti_ars430_ros2_msgs__msg__RadarDetection * msg)
{
  if (!msg) {
    return;
  }
  // range
  // v_rel_rad
  // az_ang0
  // az_ang1
  // el_ang
  // rcs0
  // rcs1
  // prob0
  // prob1
  // range_var
  // v_rel_rad_var
  // az_ang0_var
  // az_ang1_var
  // el_ang_var
  // prob_false_alarm
  // snr
}

bool
conti_ars430_ros2_msgs__msg__RadarDetection__are_equal(const conti_ars430_ros2_msgs__msg__RadarDetection * lhs, const conti_ars430_ros2_msgs__msg__RadarDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // v_rel_rad
  if (lhs->v_rel_rad != rhs->v_rel_rad) {
    return false;
  }
  // az_ang0
  if (lhs->az_ang0 != rhs->az_ang0) {
    return false;
  }
  // az_ang1
  if (lhs->az_ang1 != rhs->az_ang1) {
    return false;
  }
  // el_ang
  if (lhs->el_ang != rhs->el_ang) {
    return false;
  }
  // rcs0
  if (lhs->rcs0 != rhs->rcs0) {
    return false;
  }
  // rcs1
  if (lhs->rcs1 != rhs->rcs1) {
    return false;
  }
  // prob0
  if (lhs->prob0 != rhs->prob0) {
    return false;
  }
  // prob1
  if (lhs->prob1 != rhs->prob1) {
    return false;
  }
  // range_var
  if (lhs->range_var != rhs->range_var) {
    return false;
  }
  // v_rel_rad_var
  if (lhs->v_rel_rad_var != rhs->v_rel_rad_var) {
    return false;
  }
  // az_ang0_var
  if (lhs->az_ang0_var != rhs->az_ang0_var) {
    return false;
  }
  // az_ang1_var
  if (lhs->az_ang1_var != rhs->az_ang1_var) {
    return false;
  }
  // el_ang_var
  if (lhs->el_ang_var != rhs->el_ang_var) {
    return false;
  }
  // prob_false_alarm
  if (lhs->prob_false_alarm != rhs->prob_false_alarm) {
    return false;
  }
  // snr
  if (lhs->snr != rhs->snr) {
    return false;
  }
  return true;
}

bool
conti_ars430_ros2_msgs__msg__RadarDetection__copy(
  const conti_ars430_ros2_msgs__msg__RadarDetection * input,
  conti_ars430_ros2_msgs__msg__RadarDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // range
  output->range = input->range;
  // v_rel_rad
  output->v_rel_rad = input->v_rel_rad;
  // az_ang0
  output->az_ang0 = input->az_ang0;
  // az_ang1
  output->az_ang1 = input->az_ang1;
  // el_ang
  output->el_ang = input->el_ang;
  // rcs0
  output->rcs0 = input->rcs0;
  // rcs1
  output->rcs1 = input->rcs1;
  // prob0
  output->prob0 = input->prob0;
  // prob1
  output->prob1 = input->prob1;
  // range_var
  output->range_var = input->range_var;
  // v_rel_rad_var
  output->v_rel_rad_var = input->v_rel_rad_var;
  // az_ang0_var
  output->az_ang0_var = input->az_ang0_var;
  // az_ang1_var
  output->az_ang1_var = input->az_ang1_var;
  // el_ang_var
  output->el_ang_var = input->el_ang_var;
  // prob_false_alarm
  output->prob_false_alarm = input->prob_false_alarm;
  // snr
  output->snr = input->snr;
  return true;
}

conti_ars430_ros2_msgs__msg__RadarDetection *
conti_ars430_ros2_msgs__msg__RadarDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conti_ars430_ros2_msgs__msg__RadarDetection * msg = (conti_ars430_ros2_msgs__msg__RadarDetection *)allocator.allocate(sizeof(conti_ars430_ros2_msgs__msg__RadarDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(conti_ars430_ros2_msgs__msg__RadarDetection));
  bool success = conti_ars430_ros2_msgs__msg__RadarDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
conti_ars430_ros2_msgs__msg__RadarDetection__destroy(conti_ars430_ros2_msgs__msg__RadarDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    conti_ars430_ros2_msgs__msg__RadarDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__init(conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conti_ars430_ros2_msgs__msg__RadarDetection * data = NULL;

  if (size) {
    data = (conti_ars430_ros2_msgs__msg__RadarDetection *)allocator.zero_allocate(size, sizeof(conti_ars430_ros2_msgs__msg__RadarDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = conti_ars430_ros2_msgs__msg__RadarDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        conti_ars430_ros2_msgs__msg__RadarDetection__fini(&data[i - 1]);
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
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__fini(conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * array)
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
      conti_ars430_ros2_msgs__msg__RadarDetection__fini(&array->data[i]);
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

conti_ars430_ros2_msgs__msg__RadarDetection__Sequence *
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * array = (conti_ars430_ros2_msgs__msg__RadarDetection__Sequence *)allocator.allocate(sizeof(conti_ars430_ros2_msgs__msg__RadarDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__destroy(conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__are_equal(const conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * lhs, const conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!conti_ars430_ros2_msgs__msg__RadarDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__copy(
  const conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * input,
  conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(conti_ars430_ros2_msgs__msg__RadarDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    conti_ars430_ros2_msgs__msg__RadarDetection * data =
      (conti_ars430_ros2_msgs__msg__RadarDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!conti_ars430_ros2_msgs__msg__RadarDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          conti_ars430_ros2_msgs__msg__RadarDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!conti_ars430_ros2_msgs__msg__RadarDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
