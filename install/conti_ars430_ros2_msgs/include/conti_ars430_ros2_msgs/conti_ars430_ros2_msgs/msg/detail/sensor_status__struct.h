// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from conti_ars430_ros2_msgs:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'serial_num'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SensorStatus in the package conti_ars430_ros2_msgs.
typedef struct conti_ars430_ros2_msgs__msg__SensorStatus
{
  std_msgs__msg__Header header;
  /// part number
  uint64_t part_num;
  /// hardware + bootloader part number
  uint64_t assembly_part_num;
  /// software part number
  uint64_t sw_part_num;
  /// sensor serial number
  rosidl_runtime_c__uint8__Sequence serial_num;
  /// boot loader version
  uint32_t bl_ver;
  /// boot loader CRC
  uint32_t bl_crc;
  /// software version
  uint32_t sw_ver;
  /// software CRC
  uint32_t sw_crc;
  /// ns, some kind of UTC time representation, unsure
  uint64_t utc_time;
  /// us, some kind of internal time, unsure
  uint32_t internal_time;
  /// dB, currently configured secondary surface damping
  double cur_damping;
  /// current operational state, init=0, standby=1, reporting=2
  uint8_t op_state;
  /// currently configured far center frequency
  uint8_t cur_far_center_freq;
  /// currently configured near center frequency
  uint8_t cur_near_center_freq;
  /// permanent/hardware fault, clear=0, fault present=1
  uint8_t defective;
  /// supply voltage out of range, OK=0, out of range=1
  uint8_t supply_volt_limit;
  /// sensor temperature out of range, OK=0, out of range=1
  uint8_t sensor_off_temp;
  /// grandmaster receive timeout, clear=0, GM missing=1
  uint8_t gm_missing;
  /// radar power output reduced, clear=0, output power reduced=1
  uint8_t tx_out_reduced;
  /// m, max detection range of far scan due to interference
  double max_range_far;
  /// m, max detection range of near scan due to interference
  double max_range_near;
} conti_ars430_ros2_msgs__msg__SensorStatus;

// Struct for a sequence of conti_ars430_ros2_msgs__msg__SensorStatus.
typedef struct conti_ars430_ros2_msgs__msg__SensorStatus__Sequence
{
  conti_ars430_ros2_msgs__msg__SensorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} conti_ars430_ros2_msgs__msg__SensorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_
