// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetectionImage.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__BUILDER_HPP_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace conti_ars430_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarDetectionImage_detection_list
{
public:
  explicit Init_RadarDetectionImage_detection_list(::conti_ars430_ros2_msgs::msg::RadarDetectionImage & msg)
  : msg_(msg)
  {}
  ::conti_ars430_ros2_msgs::msg::RadarDetectionImage detection_list(::conti_ars430_ros2_msgs::msg::RadarDetectionImage::_detection_list_type arg)
  {
    msg_.detection_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetectionImage msg_;
};

class Init_RadarDetectionImage_center_freq
{
public:
  explicit Init_RadarDetectionImage_center_freq(::conti_ars430_ros2_msgs::msg::RadarDetectionImage & msg)
  : msg_(msg)
  {}
  Init_RadarDetectionImage_detection_list center_freq(::conti_ars430_ros2_msgs::msg::RadarDetectionImage::_center_freq_type arg)
  {
    msg_.center_freq = std::move(arg);
    return Init_RadarDetectionImage_detection_list(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetectionImage msg_;
};

class Init_RadarDetectionImage_vel_ambig
{
public:
  explicit Init_RadarDetectionImage_vel_ambig(::conti_ars430_ros2_msgs::msg::RadarDetectionImage & msg)
  : msg_(msg)
  {}
  Init_RadarDetectionImage_center_freq vel_ambig(::conti_ars430_ros2_msgs::msg::RadarDetectionImage::_vel_ambig_type arg)
  {
    msg_.vel_ambig = std::move(arg);
    return Init_RadarDetectionImage_center_freq(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetectionImage msg_;
};

class Init_RadarDetectionImage_num_avail_detects
{
public:
  explicit Init_RadarDetectionImage_num_avail_detects(::conti_ars430_ros2_msgs::msg::RadarDetectionImage & msg)
  : msg_(msg)
  {}
  Init_RadarDetectionImage_vel_ambig num_avail_detects(::conti_ars430_ros2_msgs::msg::RadarDetectionImage::_num_avail_detects_type arg)
  {
    msg_.num_avail_detects = std::move(arg);
    return Init_RadarDetectionImage_vel_ambig(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetectionImage msg_;
};

class Init_RadarDetectionImage_cycle_count
{
public:
  explicit Init_RadarDetectionImage_cycle_count(::conti_ars430_ros2_msgs::msg::RadarDetectionImage & msg)
  : msg_(msg)
  {}
  Init_RadarDetectionImage_num_avail_detects cycle_count(::conti_ars430_ros2_msgs::msg::RadarDetectionImage::_cycle_count_type arg)
  {
    msg_.cycle_count = std::move(arg);
    return Init_RadarDetectionImage_num_avail_detects(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetectionImage msg_;
};

class Init_RadarDetectionImage_meas_count
{
public:
  explicit Init_RadarDetectionImage_meas_count(::conti_ars430_ros2_msgs::msg::RadarDetectionImage & msg)
  : msg_(msg)
  {}
  Init_RadarDetectionImage_cycle_count meas_count(::conti_ars430_ros2_msgs::msg::RadarDetectionImage::_meas_count_type arg)
  {
    msg_.meas_count = std::move(arg);
    return Init_RadarDetectionImage_cycle_count(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetectionImage msg_;
};

class Init_RadarDetectionImage_internal_time
{
public:
  explicit Init_RadarDetectionImage_internal_time(::conti_ars430_ros2_msgs::msg::RadarDetectionImage & msg)
  : msg_(msg)
  {}
  Init_RadarDetectionImage_meas_count internal_time(::conti_ars430_ros2_msgs::msg::RadarDetectionImage::_internal_time_type arg)
  {
    msg_.internal_time = std::move(arg);
    return Init_RadarDetectionImage_meas_count(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetectionImage msg_;
};

class Init_RadarDetectionImage_utc_time
{
public:
  explicit Init_RadarDetectionImage_utc_time(::conti_ars430_ros2_msgs::msg::RadarDetectionImage & msg)
  : msg_(msg)
  {}
  Init_RadarDetectionImage_internal_time utc_time(::conti_ars430_ros2_msgs::msg::RadarDetectionImage::_utc_time_type arg)
  {
    msg_.utc_time = std::move(arg);
    return Init_RadarDetectionImage_internal_time(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetectionImage msg_;
};

class Init_RadarDetectionImage_detect_type
{
public:
  explicit Init_RadarDetectionImage_detect_type(::conti_ars430_ros2_msgs::msg::RadarDetectionImage & msg)
  : msg_(msg)
  {}
  Init_RadarDetectionImage_utc_time detect_type(::conti_ars430_ros2_msgs::msg::RadarDetectionImage::_detect_type_type arg)
  {
    msg_.detect_type = std::move(arg);
    return Init_RadarDetectionImage_utc_time(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetectionImage msg_;
};

class Init_RadarDetectionImage_header
{
public:
  Init_RadarDetectionImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarDetectionImage_detect_type header(::conti_ars430_ros2_msgs::msg::RadarDetectionImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarDetectionImage_detect_type(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetectionImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::conti_ars430_ros2_msgs::msg::RadarDetectionImage>()
{
  return conti_ars430_ros2_msgs::msg::builder::Init_RadarDetectionImage_header();
}

}  // namespace conti_ars430_ros2_msgs

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__BUILDER_HPP_
