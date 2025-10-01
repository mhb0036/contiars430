// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from conti_ars430_ros2_msgs:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace conti_ars430_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorStatus_max_range_near
{
public:
  explicit Init_SensorStatus_max_range_near(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  ::conti_ars430_ros2_msgs::msg::SensorStatus max_range_near(::conti_ars430_ros2_msgs::msg::SensorStatus::_max_range_near_type arg)
  {
    msg_.max_range_near = std::move(arg);
    return std::move(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_max_range_far
{
public:
  explicit Init_SensorStatus_max_range_far(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_max_range_near max_range_far(::conti_ars430_ros2_msgs::msg::SensorStatus::_max_range_far_type arg)
  {
    msg_.max_range_far = std::move(arg);
    return Init_SensorStatus_max_range_near(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_tx_out_reduced
{
public:
  explicit Init_SensorStatus_tx_out_reduced(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_max_range_far tx_out_reduced(::conti_ars430_ros2_msgs::msg::SensorStatus::_tx_out_reduced_type arg)
  {
    msg_.tx_out_reduced = std::move(arg);
    return Init_SensorStatus_max_range_far(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_gm_missing
{
public:
  explicit Init_SensorStatus_gm_missing(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_tx_out_reduced gm_missing(::conti_ars430_ros2_msgs::msg::SensorStatus::_gm_missing_type arg)
  {
    msg_.gm_missing = std::move(arg);
    return Init_SensorStatus_tx_out_reduced(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_sensor_off_temp
{
public:
  explicit Init_SensorStatus_sensor_off_temp(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_gm_missing sensor_off_temp(::conti_ars430_ros2_msgs::msg::SensorStatus::_sensor_off_temp_type arg)
  {
    msg_.sensor_off_temp = std::move(arg);
    return Init_SensorStatus_gm_missing(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_supply_volt_limit
{
public:
  explicit Init_SensorStatus_supply_volt_limit(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_sensor_off_temp supply_volt_limit(::conti_ars430_ros2_msgs::msg::SensorStatus::_supply_volt_limit_type arg)
  {
    msg_.supply_volt_limit = std::move(arg);
    return Init_SensorStatus_sensor_off_temp(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_defective
{
public:
  explicit Init_SensorStatus_defective(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_supply_volt_limit defective(::conti_ars430_ros2_msgs::msg::SensorStatus::_defective_type arg)
  {
    msg_.defective = std::move(arg);
    return Init_SensorStatus_supply_volt_limit(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_cur_near_center_freq
{
public:
  explicit Init_SensorStatus_cur_near_center_freq(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_defective cur_near_center_freq(::conti_ars430_ros2_msgs::msg::SensorStatus::_cur_near_center_freq_type arg)
  {
    msg_.cur_near_center_freq = std::move(arg);
    return Init_SensorStatus_defective(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_cur_far_center_freq
{
public:
  explicit Init_SensorStatus_cur_far_center_freq(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_cur_near_center_freq cur_far_center_freq(::conti_ars430_ros2_msgs::msg::SensorStatus::_cur_far_center_freq_type arg)
  {
    msg_.cur_far_center_freq = std::move(arg);
    return Init_SensorStatus_cur_near_center_freq(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_op_state
{
public:
  explicit Init_SensorStatus_op_state(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_cur_far_center_freq op_state(::conti_ars430_ros2_msgs::msg::SensorStatus::_op_state_type arg)
  {
    msg_.op_state = std::move(arg);
    return Init_SensorStatus_cur_far_center_freq(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_cur_damping
{
public:
  explicit Init_SensorStatus_cur_damping(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_op_state cur_damping(::conti_ars430_ros2_msgs::msg::SensorStatus::_cur_damping_type arg)
  {
    msg_.cur_damping = std::move(arg);
    return Init_SensorStatus_op_state(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_internal_time
{
public:
  explicit Init_SensorStatus_internal_time(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_cur_damping internal_time(::conti_ars430_ros2_msgs::msg::SensorStatus::_internal_time_type arg)
  {
    msg_.internal_time = std::move(arg);
    return Init_SensorStatus_cur_damping(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_utc_time
{
public:
  explicit Init_SensorStatus_utc_time(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_internal_time utc_time(::conti_ars430_ros2_msgs::msg::SensorStatus::_utc_time_type arg)
  {
    msg_.utc_time = std::move(arg);
    return Init_SensorStatus_internal_time(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_sw_crc
{
public:
  explicit Init_SensorStatus_sw_crc(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_utc_time sw_crc(::conti_ars430_ros2_msgs::msg::SensorStatus::_sw_crc_type arg)
  {
    msg_.sw_crc = std::move(arg);
    return Init_SensorStatus_utc_time(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_sw_ver
{
public:
  explicit Init_SensorStatus_sw_ver(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_sw_crc sw_ver(::conti_ars430_ros2_msgs::msg::SensorStatus::_sw_ver_type arg)
  {
    msg_.sw_ver = std::move(arg);
    return Init_SensorStatus_sw_crc(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_bl_crc
{
public:
  explicit Init_SensorStatus_bl_crc(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_sw_ver bl_crc(::conti_ars430_ros2_msgs::msg::SensorStatus::_bl_crc_type arg)
  {
    msg_.bl_crc = std::move(arg);
    return Init_SensorStatus_sw_ver(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_bl_ver
{
public:
  explicit Init_SensorStatus_bl_ver(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_bl_crc bl_ver(::conti_ars430_ros2_msgs::msg::SensorStatus::_bl_ver_type arg)
  {
    msg_.bl_ver = std::move(arg);
    return Init_SensorStatus_bl_crc(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_serial_num
{
public:
  explicit Init_SensorStatus_serial_num(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_bl_ver serial_num(::conti_ars430_ros2_msgs::msg::SensorStatus::_serial_num_type arg)
  {
    msg_.serial_num = std::move(arg);
    return Init_SensorStatus_bl_ver(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_sw_part_num
{
public:
  explicit Init_SensorStatus_sw_part_num(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_serial_num sw_part_num(::conti_ars430_ros2_msgs::msg::SensorStatus::_sw_part_num_type arg)
  {
    msg_.sw_part_num = std::move(arg);
    return Init_SensorStatus_serial_num(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_assembly_part_num
{
public:
  explicit Init_SensorStatus_assembly_part_num(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_sw_part_num assembly_part_num(::conti_ars430_ros2_msgs::msg::SensorStatus::_assembly_part_num_type arg)
  {
    msg_.assembly_part_num = std::move(arg);
    return Init_SensorStatus_sw_part_num(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_part_num
{
public:
  explicit Init_SensorStatus_part_num(::conti_ars430_ros2_msgs::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_assembly_part_num part_num(::conti_ars430_ros2_msgs::msg::SensorStatus::_part_num_type arg)
  {
    msg_.part_num = std::move(arg);
    return Init_SensorStatus_assembly_part_num(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

class Init_SensorStatus_header
{
public:
  Init_SensorStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorStatus_part_num header(::conti_ars430_ros2_msgs::msg::SensorStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorStatus_part_num(msg_);
  }

private:
  ::conti_ars430_ros2_msgs::msg::SensorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::conti_ars430_ros2_msgs::msg::SensorStatus>()
{
  return conti_ars430_ros2_msgs::msg::builder::Init_SensorStatus_header();
}

}  // namespace conti_ars430_ros2_msgs

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_
