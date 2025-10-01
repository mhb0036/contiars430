// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetection.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__STRUCT_H_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RadarDetection in the package conti_ars430_ros2_msgs.
typedef struct conti_ars430_ros2_msgs__msg__RadarDetection
{
  /// meters
  float range;
  /// m/s, relative radial velocity
  float v_rel_rad;
  /// rad, possible azimuth angle 0
  float az_ang0;
  /// rad, possible azimuth angle 1
  float az_ang1;
  /// rad, elevation angle
  float el_ang;
  /// dBm^2, possible radar cross section 0
  float rcs0;
  /// dBm^2, possible radar cross section 1
  float rcs1;
  /// probability of azAng0 hypothesis
  float prob0;
  /// probability of azAng1 hypothesis
  float prob1;
  /// m^2, variance of range
  float range_var;
  /// (m/s)^2, variance of relative radial velocity
  float v_rel_rad_var;
  /// rad^2, variance of possible azimuth angle 0
  float az_ang0_var;
  /// rad^2, variance of possible azimuth angle 1
  float az_ang1_var;
  /// rad^2, variance of elevation angle
  float el_ang_var;
  /// probability if detection being false alarm
  float prob_false_alarm;
  /// dBr, signal to noise ratio
  float snr;
} conti_ars430_ros2_msgs__msg__RadarDetection;

// Struct for a sequence of conti_ars430_ros2_msgs__msg__RadarDetection.
typedef struct conti_ars430_ros2_msgs__msg__RadarDetection__Sequence
{
  conti_ars430_ros2_msgs__msg__RadarDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} conti_ars430_ros2_msgs__msg__RadarDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__STRUCT_H_
