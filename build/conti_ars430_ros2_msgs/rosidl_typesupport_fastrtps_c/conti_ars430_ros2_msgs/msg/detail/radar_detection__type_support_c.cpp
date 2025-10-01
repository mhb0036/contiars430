// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetection.idl
// generated code does not contain a copyright notice
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "conti_ars430_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__struct.h"
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__functions.h"
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


// forward declare type support functions


using _RadarDetection__ros_msg_type = conti_ars430_ros2_msgs__msg__RadarDetection;

static bool _RadarDetection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RadarDetection__ros_msg_type * ros_message = static_cast<const _RadarDetection__ros_msg_type *>(untyped_ros_message);
  // Field name: range
  {
    cdr << ros_message->range;
  }

  // Field name: v_rel_rad
  {
    cdr << ros_message->v_rel_rad;
  }

  // Field name: az_ang0
  {
    cdr << ros_message->az_ang0;
  }

  // Field name: az_ang1
  {
    cdr << ros_message->az_ang1;
  }

  // Field name: el_ang
  {
    cdr << ros_message->el_ang;
  }

  // Field name: rcs0
  {
    cdr << ros_message->rcs0;
  }

  // Field name: rcs1
  {
    cdr << ros_message->rcs1;
  }

  // Field name: prob0
  {
    cdr << ros_message->prob0;
  }

  // Field name: prob1
  {
    cdr << ros_message->prob1;
  }

  // Field name: range_var
  {
    cdr << ros_message->range_var;
  }

  // Field name: v_rel_rad_var
  {
    cdr << ros_message->v_rel_rad_var;
  }

  // Field name: az_ang0_var
  {
    cdr << ros_message->az_ang0_var;
  }

  // Field name: az_ang1_var
  {
    cdr << ros_message->az_ang1_var;
  }

  // Field name: el_ang_var
  {
    cdr << ros_message->el_ang_var;
  }

  // Field name: prob_false_alarm
  {
    cdr << ros_message->prob_false_alarm;
  }

  // Field name: snr
  {
    cdr << ros_message->snr;
  }

  return true;
}

static bool _RadarDetection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RadarDetection__ros_msg_type * ros_message = static_cast<_RadarDetection__ros_msg_type *>(untyped_ros_message);
  // Field name: range
  {
    cdr >> ros_message->range;
  }

  // Field name: v_rel_rad
  {
    cdr >> ros_message->v_rel_rad;
  }

  // Field name: az_ang0
  {
    cdr >> ros_message->az_ang0;
  }

  // Field name: az_ang1
  {
    cdr >> ros_message->az_ang1;
  }

  // Field name: el_ang
  {
    cdr >> ros_message->el_ang;
  }

  // Field name: rcs0
  {
    cdr >> ros_message->rcs0;
  }

  // Field name: rcs1
  {
    cdr >> ros_message->rcs1;
  }

  // Field name: prob0
  {
    cdr >> ros_message->prob0;
  }

  // Field name: prob1
  {
    cdr >> ros_message->prob1;
  }

  // Field name: range_var
  {
    cdr >> ros_message->range_var;
  }

  // Field name: v_rel_rad_var
  {
    cdr >> ros_message->v_rel_rad_var;
  }

  // Field name: az_ang0_var
  {
    cdr >> ros_message->az_ang0_var;
  }

  // Field name: az_ang1_var
  {
    cdr >> ros_message->az_ang1_var;
  }

  // Field name: el_ang_var
  {
    cdr >> ros_message->el_ang_var;
  }

  // Field name: prob_false_alarm
  {
    cdr >> ros_message->prob_false_alarm;
  }

  // Field name: snr
  {
    cdr >> ros_message->snr;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conti_ars430_ros2_msgs
size_t get_serialized_size_conti_ars430_ros2_msgs__msg__RadarDetection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RadarDetection__ros_msg_type * ros_message = static_cast<const _RadarDetection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name range
  {
    size_t item_size = sizeof(ros_message->range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_rel_rad
  {
    size_t item_size = sizeof(ros_message->v_rel_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name az_ang0
  {
    size_t item_size = sizeof(ros_message->az_ang0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name az_ang1
  {
    size_t item_size = sizeof(ros_message->az_ang1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name el_ang
  {
    size_t item_size = sizeof(ros_message->el_ang);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rcs0
  {
    size_t item_size = sizeof(ros_message->rcs0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rcs1
  {
    size_t item_size = sizeof(ros_message->rcs1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prob0
  {
    size_t item_size = sizeof(ros_message->prob0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prob1
  {
    size_t item_size = sizeof(ros_message->prob1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name range_var
  {
    size_t item_size = sizeof(ros_message->range_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_rel_rad_var
  {
    size_t item_size = sizeof(ros_message->v_rel_rad_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name az_ang0_var
  {
    size_t item_size = sizeof(ros_message->az_ang0_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name az_ang1_var
  {
    size_t item_size = sizeof(ros_message->az_ang1_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name el_ang_var
  {
    size_t item_size = sizeof(ros_message->el_ang_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prob_false_alarm
  {
    size_t item_size = sizeof(ros_message->prob_false_alarm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name snr
  {
    size_t item_size = sizeof(ros_message->snr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RadarDetection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_conti_ars430_ros2_msgs__msg__RadarDetection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conti_ars430_ros2_msgs
size_t max_serialized_size_conti_ars430_ros2_msgs__msg__RadarDetection(
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

  // member: range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: v_rel_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: az_ang0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: az_ang1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: el_ang
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rcs0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rcs1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: prob0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: prob1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: range_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: v_rel_rad_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: az_ang0_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: az_ang1_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: el_ang_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: prob_false_alarm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: snr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = conti_ars430_ros2_msgs__msg__RadarDetection;
    is_plain =
      (
      offsetof(DataType, snr) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RadarDetection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_conti_ars430_ros2_msgs__msg__RadarDetection(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RadarDetection = {
  "conti_ars430_ros2_msgs::msg",
  "RadarDetection",
  _RadarDetection__cdr_serialize,
  _RadarDetection__cdr_deserialize,
  _RadarDetection__get_serialized_size,
  _RadarDetection__max_serialized_size
};

static rosidl_message_type_support_t _RadarDetection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RadarDetection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, conti_ars430_ros2_msgs, msg, RadarDetection)() {
  return &_RadarDetection__type_support;
}

#if defined(__cplusplus)
}
#endif
