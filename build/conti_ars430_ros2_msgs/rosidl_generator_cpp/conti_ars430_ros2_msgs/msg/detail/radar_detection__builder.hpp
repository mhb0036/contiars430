// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetection.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__BUILDER_HPP_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace conti_ars430_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarDetection_snr
{
public:
  explicit Init_RadarDetection_snr(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  ::conti_ars430_ros2_msgs::msg::RadarDetection snr(::conti_ars430_ros2_msgs::msg::RadarDetection::_snr_type arg)
  {
    msg_.snr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_prob_false_alarm
{
public:
  explicit Init_RadarDetection_prob_false_alarm(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_snr prob_false_alarm(::conti_ars430_ros2_msgs::msg::RadarDetection::_prob_false_alarm_type arg)
  {
    msg_.prob_false_alarm = std::move(arg);
    return Init_RadarDetection_snr(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_el_ang_var
{
public:
  explicit Init_RadarDetection_el_ang_var(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_prob_false_alarm el_ang_var(::conti_ars430_ros2_msgs::msg::RadarDetection::_el_ang_var_type arg)
  {
    msg_.el_ang_var = std::move(arg);
    return Init_RadarDetection_prob_false_alarm(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_az_ang1_var
{
public:
  explicit Init_RadarDetection_az_ang1_var(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_el_ang_var az_ang1_var(::conti_ars430_ros2_msgs::msg::RadarDetection::_az_ang1_var_type arg)
  {
    msg_.az_ang1_var = std::move(arg);
    return Init_RadarDetection_el_ang_var(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_az_ang0_var
{
public:
  explicit Init_RadarDetection_az_ang0_var(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_az_ang1_var az_ang0_var(::conti_ars430_ros2_msgs::msg::RadarDetection::_az_ang0_var_type arg)
  {
    msg_.az_ang0_var = std::move(arg);
    return Init_RadarDetection_az_ang1_var(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_v_rel_rad_var
{
public:
  explicit Init_RadarDetection_v_rel_rad_var(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_az_ang0_var v_rel_rad_var(::conti_ars430_ros2_msgs::msg::RadarDetection::_v_rel_rad_var_type arg)
  {
    msg_.v_rel_rad_var = std::move(arg);
    return Init_RadarDetection_az_ang0_var(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_range_var
{
public:
  explicit Init_RadarDetection_range_var(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_v_rel_rad_var range_var(::conti_ars430_ros2_msgs::msg::RadarDetection::_range_var_type arg)
  {
    msg_.range_var = std::move(arg);
    return Init_RadarDetection_v_rel_rad_var(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_prob1
{
public:
  explicit Init_RadarDetection_prob1(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_range_var prob1(::conti_ars430_ros2_msgs::msg::RadarDetection::_prob1_type arg)
  {
    msg_.prob1 = std::move(arg);
    return Init_RadarDetection_range_var(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_prob0
{
public:
  explicit Init_RadarDetection_prob0(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_prob1 prob0(::conti_ars430_ros2_msgs::msg::RadarDetection::_prob0_type arg)
  {
    msg_.prob0 = std::move(arg);
    return Init_RadarDetection_prob1(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_rcs1
{
public:
  explicit Init_RadarDetection_rcs1(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_prob0 rcs1(::conti_ars430_ros2_msgs::msg::RadarDetection::_rcs1_type arg)
  {
    msg_.rcs1 = std::move(arg);
    return Init_RadarDetection_prob0(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_rcs0
{
public:
  explicit Init_RadarDetection_rcs0(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_rcs1 rcs0(::conti_ars430_ros2_msgs::msg::RadarDetection::_rcs0_type arg)
  {
    msg_.rcs0 = std::move(arg);
    return Init_RadarDetection_rcs1(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_el_ang
{
public:
  explicit Init_RadarDetection_el_ang(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_rcs0 el_ang(::conti_ars430_ros2_msgs::msg::RadarDetection::_el_ang_type arg)
  {
    msg_.el_ang = std::move(arg);
    return Init_RadarDetection_rcs0(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_az_ang1
{
public:
  explicit Init_RadarDetection_az_ang1(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_el_ang az_ang1(::conti_ars430_ros2_msgs::msg::RadarDetection::_az_ang1_type arg)
  {
    msg_.az_ang1 = std::move(arg);
    return Init_RadarDetection_el_ang(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_az_ang0
{
public:
  explicit Init_RadarDetection_az_ang0(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_az_ang1 az_ang0(::conti_ars430_ros2_msgs::msg::RadarDetection::_az_ang0_type arg)
  {
    msg_.az_ang0 = std::move(arg);
    return Init_RadarDetection_az_ang1(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_v_rel_rad
{
public:
  explicit Init_RadarDetection_v_rel_rad(::conti_ars430_ros2_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_az_ang0 v_rel_rad(::conti_ars430_ros2_msgs::msg::RadarDetection::_v_rel_rad_type arg)
  {
    msg_.v_rel_rad = std::move(arg);
    return Init_RadarDetection_az_ang0(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_range
{
public:
  Init_RadarDetection_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarDetection_v_rel_rad range(::conti_ars430_ros2_msgs::msg::RadarDetection::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_RadarDetection_v_rel_rad(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::RadarDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::conti_ars430_ros2_msgs::msg::RadarDetection>()
{
  return conti_ars430_ros2_msgs::msg::builder::Init_RadarDetection_range();
}

}  // namespace conti_ars430_ros2_msgs

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__BUILDER_HPP_
