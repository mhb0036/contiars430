// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from conti_ars430_ros2_msgs:msg/SensorStatus.idl
// generated code does not contain a copyright notice
#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "conti_ars430_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__struct.h"
#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // serial_num
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // serial_num
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_conti_ars430_ros2_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_conti_ars430_ros2_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_conti_ars430_ros2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _SensorStatus__ros_msg_type = conti_ars430_ros2_msgs__msg__SensorStatus;

static bool _SensorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorStatus__ros_msg_type * ros_message = static_cast<const _SensorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: part_num
  {
    cdr << ros_message->part_num;
  }

  // Field name: assembly_part_num
  {
    cdr << ros_message->assembly_part_num;
  }

  // Field name: sw_part_num
  {
    cdr << ros_message->sw_part_num;
  }

  // Field name: serial_num
  {
    size_t size = ros_message->serial_num.size;
    auto array_ptr = ros_message->serial_num.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: bl_ver
  {
    cdr << ros_message->bl_ver;
  }

  // Field name: bl_crc
  {
    cdr << ros_message->bl_crc;
  }

  // Field name: sw_ver
  {
    cdr << ros_message->sw_ver;
  }

  // Field name: sw_crc
  {
    cdr << ros_message->sw_crc;
  }

  // Field name: utc_time
  {
    cdr << ros_message->utc_time;
  }

  // Field name: internal_time
  {
    cdr << ros_message->internal_time;
  }

  // Field name: cur_damping
  {
    cdr << ros_message->cur_damping;
  }

  // Field name: op_state
  {
    cdr << ros_message->op_state;
  }

  // Field name: cur_far_center_freq
  {
    cdr << ros_message->cur_far_center_freq;
  }

  // Field name: cur_near_center_freq
  {
    cdr << ros_message->cur_near_center_freq;
  }

  // Field name: defective
  {
    cdr << ros_message->defective;
  }

  // Field name: supply_volt_limit
  {
    cdr << ros_message->supply_volt_limit;
  }

  // Field name: sensor_off_temp
  {
    cdr << ros_message->sensor_off_temp;
  }

  // Field name: gm_missing
  {
    cdr << ros_message->gm_missing;
  }

  // Field name: tx_out_reduced
  {
    cdr << ros_message->tx_out_reduced;
  }

  // Field name: max_range_far
  {
    cdr << ros_message->max_range_far;
  }

  // Field name: max_range_near
  {
    cdr << ros_message->max_range_near;
  }

  return true;
}

static bool _SensorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorStatus__ros_msg_type * ros_message = static_cast<_SensorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: part_num
  {
    cdr >> ros_message->part_num;
  }

  // Field name: assembly_part_num
  {
    cdr >> ros_message->assembly_part_num;
  }

  // Field name: sw_part_num
  {
    cdr >> ros_message->sw_part_num;
  }

  // Field name: serial_num
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->serial_num.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->serial_num);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->serial_num, size)) {
      fprintf(stderr, "failed to create array for field 'serial_num'");
      return false;
    }
    auto array_ptr = ros_message->serial_num.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: bl_ver
  {
    cdr >> ros_message->bl_ver;
  }

  // Field name: bl_crc
  {
    cdr >> ros_message->bl_crc;
  }

  // Field name: sw_ver
  {
    cdr >> ros_message->sw_ver;
  }

  // Field name: sw_crc
  {
    cdr >> ros_message->sw_crc;
  }

  // Field name: utc_time
  {
    cdr >> ros_message->utc_time;
  }

  // Field name: internal_time
  {
    cdr >> ros_message->internal_time;
  }

  // Field name: cur_damping
  {
    cdr >> ros_message->cur_damping;
  }

  // Field name: op_state
  {
    cdr >> ros_message->op_state;
  }

  // Field name: cur_far_center_freq
  {
    cdr >> ros_message->cur_far_center_freq;
  }

  // Field name: cur_near_center_freq
  {
    cdr >> ros_message->cur_near_center_freq;
  }

  // Field name: defective
  {
    cdr >> ros_message->defective;
  }

  // Field name: supply_volt_limit
  {
    cdr >> ros_message->supply_volt_limit;
  }

  // Field name: sensor_off_temp
  {
    cdr >> ros_message->sensor_off_temp;
  }

  // Field name: gm_missing
  {
    cdr >> ros_message->gm_missing;
  }

  // Field name: tx_out_reduced
  {
    cdr >> ros_message->tx_out_reduced;
  }

  // Field name: max_range_far
  {
    cdr >> ros_message->max_range_far;
  }

  // Field name: max_range_near
  {
    cdr >> ros_message->max_range_near;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conti_ars430_ros2_msgs
size_t get_serialized_size_conti_ars430_ros2_msgs__msg__SensorStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorStatus__ros_msg_type * ros_message = static_cast<const _SensorStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name part_num
  {
    size_t item_size = sizeof(ros_message->part_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name assembly_part_num
  {
    size_t item_size = sizeof(ros_message->assembly_part_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sw_part_num
  {
    size_t item_size = sizeof(ros_message->sw_part_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name serial_num
  {
    size_t array_size = ros_message->serial_num.size;
    auto array_ptr = ros_message->serial_num.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bl_ver
  {
    size_t item_size = sizeof(ros_message->bl_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bl_crc
  {
    size_t item_size = sizeof(ros_message->bl_crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sw_ver
  {
    size_t item_size = sizeof(ros_message->sw_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sw_crc
  {
    size_t item_size = sizeof(ros_message->sw_crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name utc_time
  {
    size_t item_size = sizeof(ros_message->utc_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name internal_time
  {
    size_t item_size = sizeof(ros_message->internal_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_damping
  {
    size_t item_size = sizeof(ros_message->cur_damping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name op_state
  {
    size_t item_size = sizeof(ros_message->op_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_far_center_freq
  {
    size_t item_size = sizeof(ros_message->cur_far_center_freq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_near_center_freq
  {
    size_t item_size = sizeof(ros_message->cur_near_center_freq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name defective
  {
    size_t item_size = sizeof(ros_message->defective);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name supply_volt_limit
  {
    size_t item_size = sizeof(ros_message->supply_volt_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensor_off_temp
  {
    size_t item_size = sizeof(ros_message->sensor_off_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gm_missing
  {
    size_t item_size = sizeof(ros_message->gm_missing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_out_reduced
  {
    size_t item_size = sizeof(ros_message->tx_out_reduced);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_range_far
  {
    size_t item_size = sizeof(ros_message->max_range_far);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_range_near
  {
    size_t item_size = sizeof(ros_message->max_range_near);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SensorStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_conti_ars430_ros2_msgs__msg__SensorStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conti_ars430_ros2_msgs
size_t max_serialized_size_conti_ars430_ros2_msgs__msg__SensorStatus(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: part_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: assembly_part_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sw_part_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: serial_num
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bl_ver
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bl_crc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sw_ver
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sw_crc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: utc_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: internal_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_damping
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: op_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cur_far_center_freq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cur_near_center_freq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: defective
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: supply_volt_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sensor_off_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gm_missing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tx_out_reduced
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_range_far
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_range_near
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
    using DataType = conti_ars430_ros2_msgs__msg__SensorStatus;
    is_plain =
      (
      offsetof(DataType, max_range_near) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SensorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_conti_ars430_ros2_msgs__msg__SensorStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorStatus = {
  "conti_ars430_ros2_msgs::msg",
  "SensorStatus",
  _SensorStatus__cdr_serialize,
  _SensorStatus__cdr_deserialize,
  _SensorStatus__get_serialized_size,
  _SensorStatus__max_serialized_size
};

static rosidl_message_type_support_t _SensorStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, conti_ars430_ros2_msgs, msg, SensorStatus)() {
  return &_SensorStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
