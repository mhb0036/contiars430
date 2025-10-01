// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetection.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__TRAITS_HPP_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace conti_ars430_ros2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: v_rel_rad
  {
    out << "v_rel_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.v_rel_rad, out);
    out << ", ";
  }

  // member: az_ang0
  {
    out << "az_ang0: ";
    rosidl_generator_traits::value_to_yaml(msg.az_ang0, out);
    out << ", ";
  }

  // member: az_ang1
  {
    out << "az_ang1: ";
    rosidl_generator_traits::value_to_yaml(msg.az_ang1, out);
    out << ", ";
  }

  // member: el_ang
  {
    out << "el_ang: ";
    rosidl_generator_traits::value_to_yaml(msg.el_ang, out);
    out << ", ";
  }

  // member: rcs0
  {
    out << "rcs0: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs0, out);
    out << ", ";
  }

  // member: rcs1
  {
    out << "rcs1: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs1, out);
    out << ", ";
  }

  // member: prob0
  {
    out << "prob0: ";
    rosidl_generator_traits::value_to_yaml(msg.prob0, out);
    out << ", ";
  }

  // member: prob1
  {
    out << "prob1: ";
    rosidl_generator_traits::value_to_yaml(msg.prob1, out);
    out << ", ";
  }

  // member: range_var
  {
    out << "range_var: ";
    rosidl_generator_traits::value_to_yaml(msg.range_var, out);
    out << ", ";
  }

  // member: v_rel_rad_var
  {
    out << "v_rel_rad_var: ";
    rosidl_generator_traits::value_to_yaml(msg.v_rel_rad_var, out);
    out << ", ";
  }

  // member: az_ang0_var
  {
    out << "az_ang0_var: ";
    rosidl_generator_traits::value_to_yaml(msg.az_ang0_var, out);
    out << ", ";
  }

  // member: az_ang1_var
  {
    out << "az_ang1_var: ";
    rosidl_generator_traits::value_to_yaml(msg.az_ang1_var, out);
    out << ", ";
  }

  // member: el_ang_var
  {
    out << "el_ang_var: ";
    rosidl_generator_traits::value_to_yaml(msg.el_ang_var, out);
    out << ", ";
  }

  // member: prob_false_alarm
  {
    out << "prob_false_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.prob_false_alarm, out);
    out << ", ";
  }

  // member: snr
  {
    out << "snr: ";
    rosidl_generator_traits::value_to_yaml(msg.snr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: v_rel_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_rel_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.v_rel_rad, out);
    out << "\n";
  }

  // member: az_ang0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "az_ang0: ";
    rosidl_generator_traits::value_to_yaml(msg.az_ang0, out);
    out << "\n";
  }

  // member: az_ang1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "az_ang1: ";
    rosidl_generator_traits::value_to_yaml(msg.az_ang1, out);
    out << "\n";
  }

  // member: el_ang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "el_ang: ";
    rosidl_generator_traits::value_to_yaml(msg.el_ang, out);
    out << "\n";
  }

  // member: rcs0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcs0: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs0, out);
    out << "\n";
  }

  // member: rcs1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcs1: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs1, out);
    out << "\n";
  }

  // member: prob0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prob0: ";
    rosidl_generator_traits::value_to_yaml(msg.prob0, out);
    out << "\n";
  }

  // member: prob1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prob1: ";
    rosidl_generator_traits::value_to_yaml(msg.prob1, out);
    out << "\n";
  }

  // member: range_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_var: ";
    rosidl_generator_traits::value_to_yaml(msg.range_var, out);
    out << "\n";
  }

  // member: v_rel_rad_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_rel_rad_var: ";
    rosidl_generator_traits::value_to_yaml(msg.v_rel_rad_var, out);
    out << "\n";
  }

  // member: az_ang0_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "az_ang0_var: ";
    rosidl_generator_traits::value_to_yaml(msg.az_ang0_var, out);
    out << "\n";
  }

  // member: az_ang1_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "az_ang1_var: ";
    rosidl_generator_traits::value_to_yaml(msg.az_ang1_var, out);
    out << "\n";
  }

  // member: el_ang_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "el_ang_var: ";
    rosidl_generator_traits::value_to_yaml(msg.el_ang_var, out);
    out << "\n";
  }

  // member: prob_false_alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prob_false_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.prob_false_alarm, out);
    out << "\n";
  }

  // member: snr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "snr: ";
    rosidl_generator_traits::value_to_yaml(msg.snr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarDetection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace conti_ars430_ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use conti_ars430_ros2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const conti_ars430_ros2_msgs::msg::RadarDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  conti_ars430_ros2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use conti_ars430_ros2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const conti_ars430_ros2_msgs::msg::RadarDetection & msg)
{
  return conti_ars430_ros2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<conti_ars430_ros2_msgs::msg::RadarDetection>()
{
  return "conti_ars430_ros2_msgs::msg::RadarDetection";
}

template<>
inline const char * name<conti_ars430_ros2_msgs::msg::RadarDetection>()
{
  return "conti_ars430_ros2_msgs/msg/RadarDetection";
}

template<>
struct has_fixed_size<conti_ars430_ros2_msgs::msg::RadarDetection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<conti_ars430_ros2_msgs::msg::RadarDetection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<conti_ars430_ros2_msgs::msg::RadarDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__TRAITS_HPP_
