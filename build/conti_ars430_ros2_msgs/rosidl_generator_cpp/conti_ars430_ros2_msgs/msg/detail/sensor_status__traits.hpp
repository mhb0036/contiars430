// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from conti_ars430_ros2_msgs:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace conti_ars430_ros2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: part_num
  {
    out << "part_num: ";
    rosidl_generator_traits::value_to_yaml(msg.part_num, out);
    out << ", ";
  }

  // member: assembly_part_num
  {
    out << "assembly_part_num: ";
    rosidl_generator_traits::value_to_yaml(msg.assembly_part_num, out);
    out << ", ";
  }

  // member: sw_part_num
  {
    out << "sw_part_num: ";
    rosidl_generator_traits::value_to_yaml(msg.sw_part_num, out);
    out << ", ";
  }

  // member: serial_num
  {
    if (msg.serial_num.size() == 0) {
      out << "serial_num: []";
    } else {
      out << "serial_num: [";
      size_t pending_items = msg.serial_num.size();
      for (auto item : msg.serial_num) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bl_ver
  {
    out << "bl_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_ver, out);
    out << ", ";
  }

  // member: bl_crc
  {
    out << "bl_crc: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_crc, out);
    out << ", ";
  }

  // member: sw_ver
  {
    out << "sw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.sw_ver, out);
    out << ", ";
  }

  // member: sw_crc
  {
    out << "sw_crc: ";
    rosidl_generator_traits::value_to_yaml(msg.sw_crc, out);
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

  // member: cur_damping
  {
    out << "cur_damping: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_damping, out);
    out << ", ";
  }

  // member: op_state
  {
    out << "op_state: ";
    rosidl_generator_traits::value_to_yaml(msg.op_state, out);
    out << ", ";
  }

  // member: cur_far_center_freq
  {
    out << "cur_far_center_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_far_center_freq, out);
    out << ", ";
  }

  // member: cur_near_center_freq
  {
    out << "cur_near_center_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_near_center_freq, out);
    out << ", ";
  }

  // member: defective
  {
    out << "defective: ";
    rosidl_generator_traits::value_to_yaml(msg.defective, out);
    out << ", ";
  }

  // member: supply_volt_limit
  {
    out << "supply_volt_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_volt_limit, out);
    out << ", ";
  }

  // member: sensor_off_temp
  {
    out << "sensor_off_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_off_temp, out);
    out << ", ";
  }

  // member: gm_missing
  {
    out << "gm_missing: ";
    rosidl_generator_traits::value_to_yaml(msg.gm_missing, out);
    out << ", ";
  }

  // member: tx_out_reduced
  {
    out << "tx_out_reduced: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_out_reduced, out);
    out << ", ";
  }

  // member: max_range_far
  {
    out << "max_range_far: ";
    rosidl_generator_traits::value_to_yaml(msg.max_range_far, out);
    out << ", ";
  }

  // member: max_range_near
  {
    out << "max_range_near: ";
    rosidl_generator_traits::value_to_yaml(msg.max_range_near, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorStatus & msg,
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

  // member: part_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "part_num: ";
    rosidl_generator_traits::value_to_yaml(msg.part_num, out);
    out << "\n";
  }

  // member: assembly_part_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assembly_part_num: ";
    rosidl_generator_traits::value_to_yaml(msg.assembly_part_num, out);
    out << "\n";
  }

  // member: sw_part_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sw_part_num: ";
    rosidl_generator_traits::value_to_yaml(msg.sw_part_num, out);
    out << "\n";
  }

  // member: serial_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.serial_num.size() == 0) {
      out << "serial_num: []\n";
    } else {
      out << "serial_num:\n";
      for (auto item : msg.serial_num) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bl_ver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bl_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_ver, out);
    out << "\n";
  }

  // member: bl_crc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bl_crc: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_crc, out);
    out << "\n";
  }

  // member: sw_ver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.sw_ver, out);
    out << "\n";
  }

  // member: sw_crc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sw_crc: ";
    rosidl_generator_traits::value_to_yaml(msg.sw_crc, out);
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

  // member: cur_damping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_damping: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_damping, out);
    out << "\n";
  }

  // member: op_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "op_state: ";
    rosidl_generator_traits::value_to_yaml(msg.op_state, out);
    out << "\n";
  }

  // member: cur_far_center_freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_far_center_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_far_center_freq, out);
    out << "\n";
  }

  // member: cur_near_center_freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_near_center_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_near_center_freq, out);
    out << "\n";
  }

  // member: defective
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "defective: ";
    rosidl_generator_traits::value_to_yaml(msg.defective, out);
    out << "\n";
  }

  // member: supply_volt_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_volt_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_volt_limit, out);
    out << "\n";
  }

  // member: sensor_off_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_off_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_off_temp, out);
    out << "\n";
  }

  // member: gm_missing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gm_missing: ";
    rosidl_generator_traits::value_to_yaml(msg.gm_missing, out);
    out << "\n";
  }

  // member: tx_out_reduced
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_out_reduced: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_out_reduced, out);
    out << "\n";
  }

  // member: max_range_far
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_range_far: ";
    rosidl_generator_traits::value_to_yaml(msg.max_range_far, out);
    out << "\n";
  }

  // member: max_range_near
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_range_near: ";
    rosidl_generator_traits::value_to_yaml(msg.max_range_near, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorStatus & msg, bool use_flow_style = false)
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
  const conti_ars430_ros2_msgs::msg::SensorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  conti_ars430_ros2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use conti_ars430_ros2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const conti_ars430_ros2_msgs::msg::SensorStatus & msg)
{
  return conti_ars430_ros2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<conti_ars430_ros2_msgs::msg::SensorStatus>()
{
  return "conti_ars430_ros2_msgs::msg::SensorStatus";
}

template<>
inline const char * name<conti_ars430_ros2_msgs::msg::SensorStatus>()
{
  return "conti_ars430_ros2_msgs/msg/SensorStatus";
}

template<>
struct has_fixed_size<conti_ars430_ros2_msgs::msg::SensorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<conti_ars430_ros2_msgs::msg::SensorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<conti_ars430_ros2_msgs::msg::SensorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_
