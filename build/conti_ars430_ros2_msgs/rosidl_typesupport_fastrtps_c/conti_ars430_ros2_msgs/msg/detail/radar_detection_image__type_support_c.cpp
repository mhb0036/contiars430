// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetectionImage.idl
// generated code does not contain a copyright notice
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "conti_ars430_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__struct.h"
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__functions.h"
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

#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__functions.h"  // detection_list
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_conti_ars430_ros2_msgs__msg__RadarDetection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_conti_ars430_ros2_msgs__msg__RadarDetection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, conti_ars430_ros2_msgs, msg, RadarDetection)();
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


using _RadarDetectionImage__ros_msg_type = conti_ars430_ros2_msgs__msg__RadarDetectionImage;

static bool _RadarDetectionImage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RadarDetectionImage__ros_msg_type * ros_message = static_cast<const _RadarDetectionImage__ros_msg_type *>(untyped_ros_message);
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

  // Field name: detect_type
  {
    cdr << ros_message->detect_type;
  }

  // Field name: utc_time
  {
    cdr << ros_message->utc_time;
  }

  // Field name: internal_time
  {
    cdr << ros_message->internal_time;
  }

  // Field name: meas_count
  {
    cdr << ros_message->meas_count;
  }

  // Field name: cycle_count
  {
    cdr << ros_message->cycle_count;
  }

  // Field name: num_avail_detects
  {
    cdr << ros_message->num_avail_detects;
  }

  // Field name: vel_ambig
  {
    cdr << ros_message->vel_ambig;
  }

  // Field name: center_freq
  {
    cdr << ros_message->center_freq;
  }

  // Field name: detection_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, conti_ars430_ros2_msgs, msg, RadarDetection
      )()->data);
    size_t size = ros_message->detection_list.size;
    auto array_ptr = ros_message->detection_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _RadarDetectionImage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RadarDetectionImage__ros_msg_type * ros_message = static_cast<_RadarDetectionImage__ros_msg_type *>(untyped_ros_message);
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

  // Field name: detect_type
  {
    cdr >> ros_message->detect_type;
  }

  // Field name: utc_time
  {
    cdr >> ros_message->utc_time;
  }

  // Field name: internal_time
  {
    cdr >> ros_message->internal_time;
  }

  // Field name: meas_count
  {
    cdr >> ros_message->meas_count;
  }

  // Field name: cycle_count
  {
    cdr >> ros_message->cycle_count;
  }

  // Field name: num_avail_detects
  {
    cdr >> ros_message->num_avail_detects;
  }

  // Field name: vel_ambig
  {
    cdr >> ros_message->vel_ambig;
  }

  // Field name: center_freq
  {
    cdr >> ros_message->center_freq;
  }

  // Field name: detection_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, conti_ars430_ros2_msgs, msg, RadarDetection
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->detection_list.data) {
      conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__fini(&ros_message->detection_list);
    }
    if (!conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__init(&ros_message->detection_list, size)) {
      fprintf(stderr, "failed to create array for field 'detection_list'");
      return false;
    }
    auto array_ptr = ros_message->detection_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conti_ars430_ros2_msgs
size_t get_serialized_size_conti_ars430_ros2_msgs__msg__RadarDetectionImage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RadarDetectionImage__ros_msg_type * ros_message = static_cast<const _RadarDetectionImage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name detect_type
  {
    size_t item_size = sizeof(ros_message->detect_type);
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
  // field.name meas_count
  {
    size_t item_size = sizeof(ros_message->meas_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cycle_count
  {
    size_t item_size = sizeof(ros_message->cycle_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_avail_detects
  {
    size_t item_size = sizeof(ros_message->num_avail_detects);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_ambig
  {
    size_t item_size = sizeof(ros_message->vel_ambig);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_freq
  {
    size_t item_size = sizeof(ros_message->center_freq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name detection_list
  {
    size_t array_size = ros_message->detection_list.size;
    auto array_ptr = ros_message->detection_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_conti_ars430_ros2_msgs__msg__RadarDetection(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RadarDetectionImage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_conti_ars430_ros2_msgs__msg__RadarDetectionImage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_conti_ars430_ros2_msgs
size_t max_serialized_size_conti_ars430_ros2_msgs__msg__RadarDetectionImage(
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
  // member: detect_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
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
  // member: meas_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cycle_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_avail_detects
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: vel_ambig
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: center_freq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: detection_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_conti_ars430_ros2_msgs__msg__RadarDetection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = conti_ars430_ros2_msgs__msg__RadarDetectionImage;
    is_plain =
      (
      offsetof(DataType, detection_list) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RadarDetectionImage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_conti_ars430_ros2_msgs__msg__RadarDetectionImage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RadarDetectionImage = {
  "conti_ars430_ros2_msgs::msg",
  "RadarDetectionImage",
  _RadarDetectionImage__cdr_serialize,
  _RadarDetectionImage__cdr_deserialize,
  _RadarDetectionImage__get_serialized_size,
  _RadarDetectionImage__max_serialized_size
};

static rosidl_message_type_support_t _RadarDetectionImage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RadarDetectionImage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, conti_ars430_ros2_msgs, msg, RadarDetectionImage)() {
  return &_RadarDetectionImage__type_support;
}

#if defined(__cplusplus)
}
#endif
