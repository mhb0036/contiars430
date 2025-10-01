// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from conti_ars430_ros2_msgs:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__rosidl_typesupport_introspection_c.h"
#include "conti_ars430_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__functions.h"
#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `serial_num`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  conti_ars430_ros2_msgs__msg__SensorStatus__init(message_memory);
}

void conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_fini_function(void * message_memory)
{
  conti_ars430_ros2_msgs__msg__SensorStatus__fini(message_memory);
}

size_t conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__size_function__SensorStatus__serial_num(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__get_const_function__SensorStatus__serial_num(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__get_function__SensorStatus__serial_num(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__fetch_function__SensorStatus__serial_num(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__get_const_function__SensorStatus__serial_num(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__assign_function__SensorStatus__serial_num(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__get_function__SensorStatus__serial_num(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__resize_function__SensorStatus__serial_num(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_member_array[22] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "part_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, part_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "assembly_part_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, assembly_part_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sw_part_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, sw_part_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, serial_num),  // bytes offset in struct
    NULL,  // default value
    conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__size_function__SensorStatus__serial_num,  // size() function pointer
    conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__get_const_function__SensorStatus__serial_num,  // get_const(index) function pointer
    conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__get_function__SensorStatus__serial_num,  // get(index) function pointer
    conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__fetch_function__SensorStatus__serial_num,  // fetch(index, &value) function pointer
    conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__assign_function__SensorStatus__serial_num,  // assign(index, value) function pointer
    conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__resize_function__SensorStatus__serial_num  // resize(index) function pointer
  },
  {
    "bl_ver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, bl_ver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bl_crc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, bl_crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sw_ver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, sw_ver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sw_crc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, sw_crc),  // bytes offset in struct
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
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, utc_time),  // bytes offset in struct
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
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, internal_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, cur_damping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "op_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, op_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_far_center_freq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, cur_far_center_freq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_near_center_freq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, cur_near_center_freq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "defective",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, defective),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "supply_volt_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, supply_volt_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_off_temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, sensor_off_temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gm_missing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, gm_missing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tx_out_reduced",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, tx_out_reduced),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_range_far",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, max_range_far),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_range_near",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conti_ars430_ros2_msgs__msg__SensorStatus, max_range_near),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_members = {
  "conti_ars430_ros2_msgs__msg",  // message namespace
  "SensorStatus",  // message name
  22,  // number of fields
  sizeof(conti_ars430_ros2_msgs__msg__SensorStatus),
  conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_member_array,  // message members
  conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_type_support_handle = {
  0,
  &conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_conti_ars430_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conti_ars430_ros2_msgs, msg, SensorStatus)() {
  conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_type_support_handle.typesupport_identifier) {
    conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &conti_ars430_ros2_msgs__msg__SensorStatus__rosidl_typesupport_introspection_c__SensorStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
