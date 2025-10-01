// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetectionImage.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__STRUCT_H_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__STRUCT_H_

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
// Member 'detection_list'
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__struct.h"

/// Struct defined in msg/RadarDetectionImage in the package conti_ars430_ros2_msgs.
typedef struct conti_ars430_ros2_msgs__msg__RadarDetectionImage
{
  std_msgs__msg__Header header;
  /// far0=1, far1=2, near0=3, near1=4, near2=5
  uint16_t detect_type;
  /// ns, some kind of UTC time representation, unsure
  uint64_t utc_time;
  /// us, some kind of internal time, unsure
  uint32_t internal_time;
  /// counter of measurement data, unsure
  uint32_t meas_count;
  /// internal componenet counter, unsure
  uint32_t cycle_count;
  /// number of available detections, unsure
  uint16_t num_avail_detects;
  /// m/s, velocity measurement ambiguity
  double vel_ambig;
  /// GHz, radar center frequency
  float center_freq;
  /// list of detections
  conti_ars430_ros2_msgs__msg__RadarDetection__Sequence detection_list;
} conti_ars430_ros2_msgs__msg__RadarDetectionImage;

// Struct for a sequence of conti_ars430_ros2_msgs__msg__RadarDetectionImage.
typedef struct conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence
{
  conti_ars430_ros2_msgs__msg__RadarDetectionImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} conti_ars430_ros2_msgs__msg__RadarDetectionImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__STRUCT_H_
