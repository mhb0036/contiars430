// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetectionImage.idl
// generated code does not contain a copyright notice
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detection_list`
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__functions.h"

bool
conti_ars430_ros2_msgs__msg__RadarDetectionImage__init(conti_ars430_ros2_msgs__msg__RadarDetectionImage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__fini(msg);
    return false;
  }
  // detect_type
  // utc_time
  // internal_time
  // meas_count
  // cycle_count
  // num_avail_detects
  // vel_ambig
  // center_freq
  // detection_list
  if (!conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__init(&msg->detection_list, 0)) {
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__fini(msg);
    return false;
  }
  return true;
}

void
conti_ars430_ros2_msgs__msg__RadarDetectionImage__fini(conti_ars430_ros2_msgs__msg__RadarDetectionImage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // detect_type
  // utc_time
  // internal_time
  // meas_count
  // cycle_count
  // num_avail_detects
  // vel_ambig
  // center_freq
  // detection_list
  conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__fini(&msg->detection_list);
}

bool
conti_ars430_ros2_msgs__msg__RadarDetectionImage__are_equal(const conti_ars430_ros2_msgs__msg__RadarDetectionImage * lhs, const conti_ars430_ros2_msgs__msg__RadarDetectionImage * rhs)
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
  // detect_type
  if (lhs->detect_type != rhs->detect_type) {
    return false;
  }
  // utc_time
  if (lhs->utc_time != rhs->utc_time) {
    return false;
  }
  // internal_time
  if (lhs->internal_time != rhs->internal_time) {
    return false;
  }
  // meas_count
  if (lhs->meas_count != rhs->meas_count) {
    return false;
  }
  // cycle_count
  if (lhs->cycle_count != rhs->cycle_count) {
    return false;
  }
  // num_avail_detects
  if (lhs->num_avail_detects != rhs->num_avail_detects) {
    return false;
  }
  // vel_ambig
  if (lhs->vel_ambig != rhs->vel_ambig) {
    return false;
  }
  // center_freq
  if (lhs->center_freq != rhs->center_freq) {
    return false;
  }
  // detection_list
  if (!conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__are_equal(
      &(lhs->detection_list), &(rhs->detection_list)))
  {
    return false;
  }
  return true;
}

bool
conti_ars430_ros2_msgs__msg__RadarDetectionImage__copy(
  const conti_ars430_ros2_msgs__msg__RadarDetectionImage * input,
  conti_ars430_ros2_msgs__msg__RadarDetectionImage * output)
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
  // detect_type
  output->detect_type = input->detect_type;
  // utc_time
  output->utc_time = input->utc_time;
  // internal_time
  output->internal_time = input->internal_time;
  // meas_count
  output->meas_count = input->meas_count;
  // cycle_count
  output->cycle_count = input->cycle_count;
  // num_avail_detects
  output->num_avail_detects = input->num_avail_detects;
  // vel_ambig
  output->vel_ambig = input->vel_ambig;
  // center_freq
  output->center_freq = input->center_freq;
  // detection_list
  if (!conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__copy(
      &(input->detection_list), &(output->detection_list)))
  {
    return false;
  }
  return true;
}

conti_ars430_ros2_msgs__msg__RadarDetectionImage *
conti_ars430_ros2_msgs__msg__RadarDetectionImage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conti_ars430_ros2_msgs__msg__RadarDetectionImage * msg = (conti_ars430_ros2_msgs__msg__RadarDetectionImage *)allocator.allocate(sizeof(conti_ars430_ros2_msgs__msg__RadarDetectionImage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(conti_ars430_ros2_msgs__msg__RadarDetectionImage));
  bool success = conti_ars430_ros2_msgs__msg__RadarDetectionImage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
conti_ars430_ros2_msgs__msg__RadarDetectionImage__destroy(conti_ars430_ros2_msgs__msg__RadarDetectionImage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence__init(conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conti_ars430_ros2_msgs__msg__RadarDetectionImage * data = NULL;

  if (size) {
    data = (conti_ars430_ros2_msgs__msg__RadarDetectionImage *)allocator.zero_allocate(size, sizeof(conti_ars430_ros2_msgs__msg__RadarDetectionImage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = conti_ars430_ros2_msgs__msg__RadarDetectionImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        conti_ars430_ros2_msgs__msg__RadarDetectionImage__fini(&data[i - 1]);
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
conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence__fini(conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence * array)
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
      conti_ars430_ros2_msgs__msg__RadarDetectionImage__fini(&array->data[i]);
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

conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence *
conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence * array = (conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence *)allocator.allocate(sizeof(conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence__destroy(conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence__are_equal(const conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence * lhs, const conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!conti_ars430_ros2_msgs__msg__RadarDetectionImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence__copy(
  const conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence * input,
  conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(conti_ars430_ros2_msgs__msg__RadarDetectionImage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    conti_ars430_ros2_msgs__msg__RadarDetectionImage * data =
      (conti_ars430_ros2_msgs__msg__RadarDetectionImage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!conti_ars430_ros2_msgs__msg__RadarDetectionImage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          conti_ars430_ros2_msgs__msg__RadarDetectionImage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!conti_ars430_ros2_msgs__msg__RadarDetectionImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
