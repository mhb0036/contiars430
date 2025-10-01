// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from conti_ars430_ros2_msgs:msg/SensorStatus.idl
// generated code does not contain a copyright notice
#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `serial_num`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
conti_ars430_ros2_msgs__msg__SensorStatus__init(conti_ars430_ros2_msgs__msg__SensorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    conti_ars430_ros2_msgs__msg__SensorStatus__fini(msg);
    return false;
  }
  // part_num
  // assembly_part_num
  // sw_part_num
  // serial_num
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->serial_num, 0)) {
    conti_ars430_ros2_msgs__msg__SensorStatus__fini(msg);
    return false;
  }
  // bl_ver
  // bl_crc
  // sw_ver
  // sw_crc
  // utc_time
  // internal_time
  // cur_damping
  // op_state
  // cur_far_center_freq
  // cur_near_center_freq
  // defective
  // supply_volt_limit
  // sensor_off_temp
  // gm_missing
  // tx_out_reduced
  // max_range_far
  // max_range_near
  return true;
}

void
conti_ars430_ros2_msgs__msg__SensorStatus__fini(conti_ars430_ros2_msgs__msg__SensorStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // part_num
  // assembly_part_num
  // sw_part_num
  // serial_num
  rosidl_runtime_c__uint8__Sequence__fini(&msg->serial_num);
  // bl_ver
  // bl_crc
  // sw_ver
  // sw_crc
  // utc_time
  // internal_time
  // cur_damping
  // op_state
  // cur_far_center_freq
  // cur_near_center_freq
  // defective
  // supply_volt_limit
  // sensor_off_temp
  // gm_missing
  // tx_out_reduced
  // max_range_far
  // max_range_near
}

bool
conti_ars430_ros2_msgs__msg__SensorStatus__are_equal(const conti_ars430_ros2_msgs__msg__SensorStatus * lhs, const conti_ars430_ros2_msgs__msg__SensorStatus * rhs)
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
  // part_num
  if (lhs->part_num != rhs->part_num) {
    return false;
  }
  // assembly_part_num
  if (lhs->assembly_part_num != rhs->assembly_part_num) {
    return false;
  }
  // sw_part_num
  if (lhs->sw_part_num != rhs->sw_part_num) {
    return false;
  }
  // serial_num
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->serial_num), &(rhs->serial_num)))
  {
    return false;
  }
  // bl_ver
  if (lhs->bl_ver != rhs->bl_ver) {
    return false;
  }
  // bl_crc
  if (lhs->bl_crc != rhs->bl_crc) {
    return false;
  }
  // sw_ver
  if (lhs->sw_ver != rhs->sw_ver) {
    return false;
  }
  // sw_crc
  if (lhs->sw_crc != rhs->sw_crc) {
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
  // cur_damping
  if (lhs->cur_damping != rhs->cur_damping) {
    return false;
  }
  // op_state
  if (lhs->op_state != rhs->op_state) {
    return false;
  }
  // cur_far_center_freq
  if (lhs->cur_far_center_freq != rhs->cur_far_center_freq) {
    return false;
  }
  // cur_near_center_freq
  if (lhs->cur_near_center_freq != rhs->cur_near_center_freq) {
    return false;
  }
  // defective
  if (lhs->defective != rhs->defective) {
    return false;
  }
  // supply_volt_limit
  if (lhs->supply_volt_limit != rhs->supply_volt_limit) {
    return false;
  }
  // sensor_off_temp
  if (lhs->sensor_off_temp != rhs->sensor_off_temp) {
    return false;
  }
  // gm_missing
  if (lhs->gm_missing != rhs->gm_missing) {
    return false;
  }
  // tx_out_reduced
  if (lhs->tx_out_reduced != rhs->tx_out_reduced) {
    return false;
  }
  // max_range_far
  if (lhs->max_range_far != rhs->max_range_far) {
    return false;
  }
  // max_range_near
  if (lhs->max_range_near != rhs->max_range_near) {
    return false;
  }
  return true;
}

bool
conti_ars430_ros2_msgs__msg__SensorStatus__copy(
  const conti_ars430_ros2_msgs__msg__SensorStatus * input,
  conti_ars430_ros2_msgs__msg__SensorStatus * output)
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
  // part_num
  output->part_num = input->part_num;
  // assembly_part_num
  output->assembly_part_num = input->assembly_part_num;
  // sw_part_num
  output->sw_part_num = input->sw_part_num;
  // serial_num
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->serial_num), &(output->serial_num)))
  {
    return false;
  }
  // bl_ver
  output->bl_ver = input->bl_ver;
  // bl_crc
  output->bl_crc = input->bl_crc;
  // sw_ver
  output->sw_ver = input->sw_ver;
  // sw_crc
  output->sw_crc = input->sw_crc;
  // utc_time
  output->utc_time = input->utc_time;
  // internal_time
  output->internal_time = input->internal_time;
  // cur_damping
  output->cur_damping = input->cur_damping;
  // op_state
  output->op_state = input->op_state;
  // cur_far_center_freq
  output->cur_far_center_freq = input->cur_far_center_freq;
  // cur_near_center_freq
  output->cur_near_center_freq = input->cur_near_center_freq;
  // defective
  output->defective = input->defective;
  // supply_volt_limit
  output->supply_volt_limit = input->supply_volt_limit;
  // sensor_off_temp
  output->sensor_off_temp = input->sensor_off_temp;
  // gm_missing
  output->gm_missing = input->gm_missing;
  // tx_out_reduced
  output->tx_out_reduced = input->tx_out_reduced;
  // max_range_far
  output->max_range_far = input->max_range_far;
  // max_range_near
  output->max_range_near = input->max_range_near;
  return true;
}

conti_ars430_ros2_msgs__msg__SensorStatus *
conti_ars430_ros2_msgs__msg__SensorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conti_ars430_ros2_msgs__msg__SensorStatus * msg = (conti_ars430_ros2_msgs__msg__SensorStatus *)allocator.allocate(sizeof(conti_ars430_ros2_msgs__msg__SensorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(conti_ars430_ros2_msgs__msg__SensorStatus));
  bool success = conti_ars430_ros2_msgs__msg__SensorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
conti_ars430_ros2_msgs__msg__SensorStatus__destroy(conti_ars430_ros2_msgs__msg__SensorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    conti_ars430_ros2_msgs__msg__SensorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
conti_ars430_ros2_msgs__msg__SensorStatus__Sequence__init(conti_ars430_ros2_msgs__msg__SensorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conti_ars430_ros2_msgs__msg__SensorStatus * data = NULL;

  if (size) {
    data = (conti_ars430_ros2_msgs__msg__SensorStatus *)allocator.zero_allocate(size, sizeof(conti_ars430_ros2_msgs__msg__SensorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = conti_ars430_ros2_msgs__msg__SensorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        conti_ars430_ros2_msgs__msg__SensorStatus__fini(&data[i - 1]);
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
conti_ars430_ros2_msgs__msg__SensorStatus__Sequence__fini(conti_ars430_ros2_msgs__msg__SensorStatus__Sequence * array)
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
      conti_ars430_ros2_msgs__msg__SensorStatus__fini(&array->data[i]);
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

conti_ars430_ros2_msgs__msg__SensorStatus__Sequence *
conti_ars430_ros2_msgs__msg__SensorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conti_ars430_ros2_msgs__msg__SensorStatus__Sequence * array = (conti_ars430_ros2_msgs__msg__SensorStatus__Sequence *)allocator.allocate(sizeof(conti_ars430_ros2_msgs__msg__SensorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = conti_ars430_ros2_msgs__msg__SensorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
conti_ars430_ros2_msgs__msg__SensorStatus__Sequence__destroy(conti_ars430_ros2_msgs__msg__SensorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    conti_ars430_ros2_msgs__msg__SensorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
conti_ars430_ros2_msgs__msg__SensorStatus__Sequence__are_equal(const conti_ars430_ros2_msgs__msg__SensorStatus__Sequence * lhs, const conti_ars430_ros2_msgs__msg__SensorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!conti_ars430_ros2_msgs__msg__SensorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
conti_ars430_ros2_msgs__msg__SensorStatus__Sequence__copy(
  const conti_ars430_ros2_msgs__msg__SensorStatus__Sequence * input,
  conti_ars430_ros2_msgs__msg__SensorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(conti_ars430_ros2_msgs__msg__SensorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    conti_ars430_ros2_msgs__msg__SensorStatus * data =
      (conti_ars430_ros2_msgs__msg__SensorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!conti_ars430_ros2_msgs__msg__SensorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          conti_ars430_ros2_msgs__msg__SensorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!conti_ars430_ros2_msgs__msg__SensorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
