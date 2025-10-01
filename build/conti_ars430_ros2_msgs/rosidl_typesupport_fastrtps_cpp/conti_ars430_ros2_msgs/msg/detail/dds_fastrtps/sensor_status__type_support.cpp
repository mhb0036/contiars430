// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from conti_ars430_ros2_msgs:msg/SensorStatus.idl
// generated code does not contain a copyright notice
#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace conti_ars430_ros2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
cdr_serialize(
  const conti_ars430_ros2_msgs::msg::SensorStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: part_num
  cdr << ros_message.part_num;
  // Member: assembly_part_num
  cdr << ros_message.assembly_part_num;
  // Member: sw_part_num
  cdr << ros_message.sw_part_num;
  // Member: serial_num
  {
    cdr << ros_message.serial_num;
  }
  // Member: bl_ver
  cdr << ros_message.bl_ver;
  // Member: bl_crc
  cdr << ros_message.bl_crc;
  // Member: sw_ver
  cdr << ros_message.sw_ver;
  // Member: sw_crc
  cdr << ros_message.sw_crc;
  // Member: utc_time
  cdr << ros_message.utc_time;
  // Member: internal_time
  cdr << ros_message.internal_time;
  // Member: cur_damping
  cdr << ros_message.cur_damping;
  // Member: op_state
  cdr << ros_message.op_state;
  // Member: cur_far_center_freq
  cdr << ros_message.cur_far_center_freq;
  // Member: cur_near_center_freq
  cdr << ros_message.cur_near_center_freq;
  // Member: defective
  cdr << ros_message.defective;
  // Member: supply_volt_limit
  cdr << ros_message.supply_volt_limit;
  // Member: sensor_off_temp
  cdr << ros_message.sensor_off_temp;
  // Member: gm_missing
  cdr << ros_message.gm_missing;
  // Member: tx_out_reduced
  cdr << ros_message.tx_out_reduced;
  // Member: max_range_far
  cdr << ros_message.max_range_far;
  // Member: max_range_near
  cdr << ros_message.max_range_near;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  conti_ars430_ros2_msgs::msg::SensorStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: part_num
  cdr >> ros_message.part_num;

  // Member: assembly_part_num
  cdr >> ros_message.assembly_part_num;

  // Member: sw_part_num
  cdr >> ros_message.sw_part_num;

  // Member: serial_num
  {
    cdr >> ros_message.serial_num;
  }

  // Member: bl_ver
  cdr >> ros_message.bl_ver;

  // Member: bl_crc
  cdr >> ros_message.bl_crc;

  // Member: sw_ver
  cdr >> ros_message.sw_ver;

  // Member: sw_crc
  cdr >> ros_message.sw_crc;

  // Member: utc_time
  cdr >> ros_message.utc_time;

  // Member: internal_time
  cdr >> ros_message.internal_time;

  // Member: cur_damping
  cdr >> ros_message.cur_damping;

  // Member: op_state
  cdr >> ros_message.op_state;

  // Member: cur_far_center_freq
  cdr >> ros_message.cur_far_center_freq;

  // Member: cur_near_center_freq
  cdr >> ros_message.cur_near_center_freq;

  // Member: defective
  cdr >> ros_message.defective;

  // Member: supply_volt_limit
  cdr >> ros_message.supply_volt_limit;

  // Member: sensor_off_temp
  cdr >> ros_message.sensor_off_temp;

  // Member: gm_missing
  cdr >> ros_message.gm_missing;

  // Member: tx_out_reduced
  cdr >> ros_message.tx_out_reduced;

  // Member: max_range_far
  cdr >> ros_message.max_range_far;

  // Member: max_range_near
  cdr >> ros_message.max_range_near;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
get_serialized_size(
  const conti_ars430_ros2_msgs::msg::SensorStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: part_num
  {
    size_t item_size = sizeof(ros_message.part_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: assembly_part_num
  {
    size_t item_size = sizeof(ros_message.assembly_part_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sw_part_num
  {
    size_t item_size = sizeof(ros_message.sw_part_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: serial_num
  {
    size_t array_size = ros_message.serial_num.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.serial_num[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bl_ver
  {
    size_t item_size = sizeof(ros_message.bl_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bl_crc
  {
    size_t item_size = sizeof(ros_message.bl_crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sw_ver
  {
    size_t item_size = sizeof(ros_message.sw_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sw_crc
  {
    size_t item_size = sizeof(ros_message.sw_crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: utc_time
  {
    size_t item_size = sizeof(ros_message.utc_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: internal_time
  {
    size_t item_size = sizeof(ros_message.internal_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cur_damping
  {
    size_t item_size = sizeof(ros_message.cur_damping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: op_state
  {
    size_t item_size = sizeof(ros_message.op_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cur_far_center_freq
  {
    size_t item_size = sizeof(ros_message.cur_far_center_freq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cur_near_center_freq
  {
    size_t item_size = sizeof(ros_message.cur_near_center_freq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: defective
  {
    size_t item_size = sizeof(ros_message.defective);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: supply_volt_limit
  {
    size_t item_size = sizeof(ros_message.supply_volt_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sensor_off_temp
  {
    size_t item_size = sizeof(ros_message.sensor_off_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gm_missing
  {
    size_t item_size = sizeof(ros_message.gm_missing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tx_out_reduced
  {
    size_t item_size = sizeof(ros_message.tx_out_reduced);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_range_far
  {
    size_t item_size = sizeof(ros_message.max_range_far);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_range_near
  {
    size_t item_size = sizeof(ros_message.max_range_near);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
max_serialized_size_SensorStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: part_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: assembly_part_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: sw_part_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: serial_num
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bl_ver
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bl_crc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sw_ver
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sw_crc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: utc_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: internal_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cur_damping
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: op_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cur_far_center_freq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cur_near_center_freq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: defective
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: supply_volt_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sensor_off_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gm_missing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tx_out_reduced
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_range_far
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_range_near
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = conti_ars430_ros2_msgs::msg::SensorStatus;
    is_plain =
      (
      offsetof(DataType, max_range_near) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SensorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const conti_ars430_ros2_msgs::msg::SensorStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<conti_ars430_ros2_msgs::msg::SensorStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const conti_ars430_ros2_msgs::msg::SensorStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorStatus__callbacks = {
  "conti_ars430_ros2_msgs::msg",
  "SensorStatus",
  _SensorStatus__cdr_serialize,
  _SensorStatus__cdr_deserialize,
  _SensorStatus__get_serialized_size,
  _SensorStatus__max_serialized_size
};

static rosidl_message_type_support_t _SensorStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace conti_ars430_ros2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_conti_ars430_ros2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<conti_ars430_ros2_msgs::msg::SensorStatus>()
{
  return &conti_ars430_ros2_msgs::msg::typesupport_fastrtps_cpp::_SensorStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, conti_ars430_ros2_msgs, msg, SensorStatus)() {
  return &conti_ars430_ros2_msgs::msg::typesupport_fastrtps_cpp::_SensorStatus__handle;
}

#ifdef __cplusplus
}
#endif
