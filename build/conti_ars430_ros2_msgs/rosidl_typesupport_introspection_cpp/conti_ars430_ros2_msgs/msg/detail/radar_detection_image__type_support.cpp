// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetectionImage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace conti_ars430_ros2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RadarDetectionImage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) conti_ars430_ros2_msgs::msg::RadarDetectionImage(_init);
}

void RadarDetectionImage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<conti_ars430_ros2_msgs::msg::RadarDetectionImage *>(message_memory);
  typed_message->~RadarDetectionImage();
}

size_t size_function__RadarDetectionImage__detection_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<conti_ars430_ros2_msgs::msg::RadarDetection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RadarDetectionImage__detection_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<conti_ars430_ros2_msgs::msg::RadarDetection> *>(untyped_member);
  return &member[index];
}

void * get_function__RadarDetectionImage__detection_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<conti_ars430_ros2_msgs::msg::RadarDetection> *>(untyped_member);
  return &member[index];
}

void fetch_function__RadarDetectionImage__detection_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const conti_ars430_ros2_msgs::msg::RadarDetection *>(
    get_const_function__RadarDetectionImage__detection_list(untyped_member, index));
  auto & value = *reinterpret_cast<conti_ars430_ros2_msgs::msg::RadarDetection *>(untyped_value);
  value = item;
}

void assign_function__RadarDetectionImage__detection_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<conti_ars430_ros2_msgs::msg::RadarDetection *>(
    get_function__RadarDetectionImage__detection_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const conti_ars430_ros2_msgs::msg::RadarDetection *>(untyped_value);
  item = value;
}

void resize_function__RadarDetectionImage__detection_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<conti_ars430_ros2_msgs::msg::RadarDetection> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RadarDetectionImage_message_member_array[10] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs::msg::RadarDetectionImage, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "detect_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs::msg::RadarDetectionImage, detect_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "utc_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs::msg::RadarDetectionImage, utc_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "internal_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs::msg::RadarDetectionImage, internal_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "meas_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs::msg::RadarDetectionImage, meas_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cycle_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs::msg::RadarDetectionImage, cycle_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_avail_detects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs::msg::RadarDetectionImage, num_avail_detects),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_ambig",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs::msg::RadarDetectionImage, vel_ambig),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "center_freq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs::msg::RadarDetectionImage, center_freq),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "detection_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<conti_ars430_ros2_msgs::msg::RadarDetection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs::msg::RadarDetectionImage, detection_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__RadarDetectionImage__detection_list,  // size() function pointer
    get_const_function__RadarDetectionImage__detection_list,  // get_const(index) function pointer
    get_function__RadarDetectionImage__detection_list,  // get(index) function pointer
    fetch_function__RadarDetectionImage__detection_list,  // fetch(index, &value) function pointer
    assign_function__RadarDetectionImage__detection_list,  // assign(index, value) function pointer
    resize_function__RadarDetectionImage__detection_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RadarDetectionImage_message_members = {
  "conti_ars430_ros2_msgs::msg",  // message namespace
  "RadarDetectionImage",  // message name
  10,  // number of fields
  sizeof(conti_ars430_ros2_msgs::msg::RadarDetectionImage),
  RadarDetectionImage_message_member_array,  // message members
  RadarDetectionImage_init_function,  // function to initialize message memory (memory has to be allocated)
  RadarDetectionImage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RadarDetectionImage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RadarDetectionImage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace conti_ars430_ros2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<conti_ars430_ros2_msgs::msg::RadarDetectionImage>()
{
  return &::conti_ars430_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::RadarDetectionImage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, conti_ars430_ros2_msgs, msg, RadarDetectionImage)() {
  return &::conti_ars430_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::RadarDetectionImage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
