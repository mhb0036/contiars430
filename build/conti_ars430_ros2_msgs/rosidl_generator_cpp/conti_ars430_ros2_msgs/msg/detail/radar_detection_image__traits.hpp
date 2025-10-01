// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetectionImage.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__TRAITS_HPP_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detection_list'
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__traits.hpp"

namespace conti_ars430_ros2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarDetectionImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: detect_type
  {
    out << "detect_type: ";
    rosidl_generator_traits::value_to_yaml(msg.detect_type, out);
    out << ", ";
  }

  // member: utc_time
  {
    out << "utc_time: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_time, out);
    out << ", ";
  }

  // member: internal_time
  {
    out << "internal_time: ";
    rosidl_generator_traits::value_to_yaml(msg.internal_time, out);
    out << ", ";
  }

  // member: meas_count
  {
    out << "meas_count: ";
    rosidl_generator_traits::value_to_yaml(msg.meas_count, out);
    out << ", ";
  }

  // member: cycle_count
  {
    out << "cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_count, out);
    out << ", ";
  }

  // member: num_avail_detects
  {
    out << "num_avail_detects: ";
    rosidl_generator_traits::value_to_yaml(msg.num_avail_detects, out);
    out << ", ";
  }

  // member: vel_ambig
  {
    out << "vel_ambig: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_ambig, out);
    out << ", ";
  }

  // member: center_freq
  {
    out << "center_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.center_freq, out);
    out << ", ";
  }

  // member: detection_list
  {
    if (msg.detection_list.size() == 0) {
      out << "detection_list: []";
    } else {
      out << "detection_list: [";
      size_t pending_items = msg.detection_list.size();
      for (auto item : msg.detection_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarDetectionImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: detect_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detect_type: ";
    rosidl_generator_traits::value_to_yaml(msg.detect_type, out);
    out << "\n";
  }

  // member: utc_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_time: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_time, out);
    out << "\n";
  }

  // member: internal_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "internal_time: ";
    rosidl_generator_traits::value_to_yaml(msg.internal_time, out);
    out << "\n";
  }

  // member: meas_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meas_count: ";
    rosidl_generator_traits::value_to_yaml(msg.meas_count, out);
    out << "\n";
  }

  // member: cycle_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_count, out);
    out << "\n";
  }

  // member: num_avail_detects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_avail_detects: ";
    rosidl_generator_traits::value_to_yaml(msg.num_avail_detects, out);
    out << "\n";
  }

  // member: vel_ambig
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_ambig: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_ambig, out);
    out << "\n";
  }

  // member: center_freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.center_freq, out);
    out << "\n";
  }

  // member: detection_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detection_list.size() == 0) {
      out << "detection_list: []\n";
    } else {
      out << "detection_list:\n";
      for (auto item : msg.detection_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarDetectionImage & msg, bool use_flow_style = false)
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
  const conti_ars430_ros2_msgs::msg::RadarDetectionImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  conti_ars430_ros2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use conti_ars430_ros2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const conti_ars430_ros2_msgs::msg::RadarDetectionImage & msg)
{
  return conti_ars430_ros2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<conti_ars430_ros2_msgs::msg::RadarDetectionImage>()
{
  return "conti_ars430_ros2_msgs::msg::RadarDetectionImage";
}

template<>
inline const char * name<conti_ars430_ros2_msgs::msg::RadarDetectionImage>()
{
  return "conti_ars430_ros2_msgs/msg/RadarDetectionImage";
}

template<>
struct has_fixed_size<conti_ars430_ros2_msgs::msg::RadarDetectionImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<conti_ars430_ros2_msgs::msg::RadarDetectionImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<conti_ars430_ros2_msgs::msg::RadarDetectionImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__TRAITS_HPP_
