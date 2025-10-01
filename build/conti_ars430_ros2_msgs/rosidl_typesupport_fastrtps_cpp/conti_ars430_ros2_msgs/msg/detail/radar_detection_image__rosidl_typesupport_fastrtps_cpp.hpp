// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetectionImage.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "conti_ars430_ros2_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace conti_ars430_ros2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
cdr_serialize(
  const conti_ars430_ros2_msgs::msg::RadarDetectionImage & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  conti_ars430_ros2_msgs::msg::RadarDetectionImage & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
get_serialized_size(
  const conti_ars430_ros2_msgs::msg::RadarDetectionImage & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
max_serialized_size_RadarDetectionImage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace conti_ars430_ros2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, conti_ars430_ros2_msgs, msg, RadarDetectionImage)();

#ifdef __cplusplus
}
#endif

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
