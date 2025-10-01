// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetectionImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__rosidl_typesupport_introspection_c.h"
#include "conti_ars430_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__functions.h"
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `detection_list`
#include "conti_ars430_ros2_msgs/msg/radar_detection.h"
// Member `detection_list`
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  conti_ars430_ros2_msgs__msg__RadarDetectionImage__init(message_memory);
}

void conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_fini_function(void * message_memory)
{
  conti_ars430_ros2_msgs__msg__RadarDetectionImage__fini(message_memory);
}

size_t conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__size_function__RadarDetectionImage__detection_list(
  const void * untyped_member)
{
  const conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * member =
    (const conti_ars430_ros2_msgs__msg__RadarDetection__Sequence *)(untyped_member);
  return member->size;
}

const void * conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__get_const_function__RadarDetectionImage__detection_list(
  const void * untyped_member, size_t index)
{
  const conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * member =
    (const conti_ars430_ros2_msgs__msg__RadarDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__get_function__RadarDetectionImage__detection_list(
  void * untyped_member, size_t index)
{
  conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * member =
    (conti_ars430_ros2_msgs__msg__RadarDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__fetch_function__RadarDetectionImage__detection_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const conti_ars430_ros2_msgs__msg__RadarDetection * item =
    ((const conti_ars430_ros2_msgs__msg__RadarDetection *)
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__get_const_function__RadarDetectionImage__detection_list(untyped_member, index));
  conti_ars430_ros2_msgs__msg__RadarDetection * value =
    (conti_ars430_ros2_msgs__msg__RadarDetection *)(untyped_value);
  *value = *item;
}

void conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__assign_function__RadarDetectionImage__detection_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  conti_ars430_ros2_msgs__msg__RadarDetection * item =
    ((conti_ars430_ros2_msgs__msg__RadarDetection *)
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__get_function__RadarDetectionImage__detection_list(untyped_member, index));
  const conti_ars430_ros2_msgs__msg__RadarDetection * value =
    (const conti_ars430_ros2_msgs__msg__RadarDetection *)(untyped_value);
  *item = *value;
}

bool conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__resize_function__RadarDetectionImage__detection_list(
  void * untyped_member, size_t size)
{
  conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * member =
    (conti_ars430_ros2_msgs__msg__RadarDetection__Sequence *)(untyped_member);
  conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__fini(member);
  return conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__RadarDetectionImage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detect_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__RadarDetectionImage, detect_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "utc_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__RadarDetectionImage, utc_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "internal_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__RadarDetectionImage, internal_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "meas_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__RadarDetectionImage, meas_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cycle_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__RadarDetectionImage, cycle_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_avail_detects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__RadarDetectionImage, num_avail_detects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_ambig",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__RadarDetectionImage, vel_ambig),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_freq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__RadarDetectionImage, center_freq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detection_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__RadarDetectionImage, detection_list),  // bytes offset in struct
    NULL,  // default value
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__size_function__RadarDetectionImage__detection_list,  // size() function pointer
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__get_const_function__RadarDetectionImage__detection_list,  // get_const(index) function pointer
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__get_function__RadarDetectionImage__detection_list,  // get(index) function pointer
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__fetch_function__RadarDetectionImage__detection_list,  // fetch(index, &value) function pointer
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__assign_function__RadarDetectionImage__detection_list,  // assign(index, value) function pointer
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__resize_function__RadarDetectionImage__detection_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_message_members = {
  "conti_ars430_ros2_msgs__msg",  // message namespace
  "RadarDetectionImage",  // message name
  10,  // number of fields
  sizeof(conti_ars430_ros2_msgs__msg__RadarDetectionImage),
  conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_message_member_array,  // message members
  conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_init_function,  // function to initialize message memory (memory has to be allocated)
  conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_message_type_support_handle = {
  0,
  &conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_conti_ars430_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conti_ars430_ros2_msgs, msg, RadarDetectionImage)() {
  conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conti_ars430_ros2_msgs, msg, RadarDetection)();
  if (!conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_message_type_support_handle.typesupport_identifier) {
    conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &conti_ars430_ros2_msgs__msg__RadarDetectionImage__rosidl_typesupport_introspection_c__RadarDetectionImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
