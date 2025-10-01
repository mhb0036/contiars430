// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetectionImage.idl
// generated code does not contain a copyright notice
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__rosidl_typesupport_fastrtps_cpp.hpp"
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__struct.hpp"

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
bool cdr_serialize(
  const conti_ars430_ros2_msgs::msg::RadarDetection &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  conti_ars430_ros2_msgs::msg::RadarDetection &);
size_t get_serialized_size(
  const conti_ars430_ros2_msgs::msg::RadarDetection &,
  size_t current_alignment);
size_t
max_serialized_size_RadarDetection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace conti_ars430_ros2_msgs


namespace conti_ars430_ros2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
cdr_serialize(
  const conti_ars430_ros2_msgs::msg::RadarDetectionImage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: detect_type
  cdr << ros_message.detect_type;
  // Member: utc_time
  cdr << ros_message.utc_time;
  // Member: internal_time
  cdr << ros_message.internal_time;
  // Member: meas_count
  cdr << ros_message.meas_count;
  // Member: cycle_count
  cdr << ros_message.cycle_count;
  // Member: num_avail_detects
  cdr << ros_message.num_avail_detects;
  // Member: vel_ambig
  cdr << ros_message.vel_ambig;
  // Member: center_freq
  cdr << ros_message.center_freq;
  // Member: detection_list
  {
    size_t size = ros_message.detection_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      conti_ars430_ros2_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.detection_list[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  conti_ars430_ros2_msgs::msg::RadarDetectionImage & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: detect_type
  cdr >> ros_message.detect_type;

  // Member: utc_time
  cdr >> ros_message.utc_time;

  // Member: internal_time
  cdr >> ros_message.internal_time;

  // Member: meas_count
  cdr >> ros_message.meas_count;

  // Member: cycle_count
  cdr >> ros_message.cycle_count;

  // Member: num_avail_detects
  cdr >> ros_message.num_avail_detects;

  // Member: vel_ambig
  cdr >> ros_message.vel_ambig;

  // Member: center_freq
  cdr >> ros_message.center_freq;

  // Member: detection_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.detection_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      conti_ars430_ros2_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.detection_list[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
get_serialized_size(
  const conti_ars430_ros2_msgs::msg::RadarDetectionImage & ros_message,
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
  // Member: detect_type
  {
    size_t item_size = sizeof(ros_message.detect_type);
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
  // Member: meas_count
  {
    size_t item_size = sizeof(ros_message.meas_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cycle_count
  {
    size_t item_size = sizeof(ros_message.cycle_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_avail_detects
  {
    size_t item_size = sizeof(ros_message.num_avail_detects);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_ambig
  {
    size_t item_size = sizeof(ros_message.vel_ambig);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: center_freq
  {
    size_t item_size = sizeof(ros_message.center_freq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: detection_list
  {
    size_t array_size = ros_message.detection_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        conti_ars430_ros2_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.detection_list[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conti_ars430_ros2_msgs
max_serialized_size_RadarDetectionImage(
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

  // Member: detect_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
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

  // Member: meas_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cycle_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_avail_detects
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: vel_ambig
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: center_freq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: detection_list
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
      size_t inner_size =
        conti_ars430_ros2_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RadarDetection(
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
    using DataType = conti_ars430_ros2_msgs::msg::RadarDetectionImage;
    is_plain =
      (
      offsetof(DataType, detection_list) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RadarDetectionImage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const conti_ars430_ros2_msgs::msg::RadarDetectionImage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RadarDetectionImage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<conti_ars430_ros2_msgs::msg::RadarDetectionImage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RadarDetectionImage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const conti_ars430_ros2_msgs::msg::RadarDetectionImage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RadarDetectionImage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RadarDetectionImage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RadarDetectionImage__callbacks = {
  "conti_ars430_ros2_msgs::msg",
  "RadarDetectionImage",
  _RadarDetectionImage__cdr_serialize,
  _RadarDetectionImage__cdr_deserialize,
  _RadarDetectionImage__get_serialized_size,
  _RadarDetectionImage__max_serialized_size
};

static rosidl_message_type_support_t _RadarDetectionImage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RadarDetectionImage__callbacks,
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
get_message_type_support_handle<conti_ars430_ros2_msgs::msg::RadarDetectionImage>()
{
  return &conti_ars430_ros2_msgs::msg::typesupport_fastrtps_cpp::_RadarDetectionImage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, conti_ars430_ros2_msgs, msg, RadarDetectionImage)() {
  return &conti_ars430_ros2_msgs::msg::typesupport_fastrtps_cpp::_RadarDetectionImage__handle;
}

#ifdef __cplusplus
}
#endif
