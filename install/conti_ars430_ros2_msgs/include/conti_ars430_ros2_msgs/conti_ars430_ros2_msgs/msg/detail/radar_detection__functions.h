// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetection.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__FUNCTIONS_H_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "conti_ars430_ros2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__struct.h"

/// Initialize msg/RadarDetection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * conti_ars430_ros2_msgs__msg__RadarDetection
 * )) before or use
 * conti_ars430_ros2_msgs__msg__RadarDetection__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_conti_ars430_ros2_msgs
bool
conti_ars430_ros2_msgs__msg__RadarDetection__init(conti_ars430_ros2_msgs__msg__RadarDetection * msg);

/// Finalize msg/RadarDetection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_conti_ars430_ros2_msgs
void
conti_ars430_ros2_msgs__msg__RadarDetection__fini(conti_ars430_ros2_msgs__msg__RadarDetection * msg);

/// Create msg/RadarDetection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * conti_ars430_ros2_msgs__msg__RadarDetection__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_conti_ars430_ros2_msgs
conti_ars430_ros2_msgs__msg__RadarDetection *
conti_ars430_ros2_msgs__msg__RadarDetection__create();

/// Destroy msg/RadarDetection message.
/**
 * It calls
 * conti_ars430_ros2_msgs__msg__RadarDetection__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_conti_ars430_ros2_msgs
void
conti_ars430_ros2_msgs__msg__RadarDetection__destroy(conti_ars430_ros2_msgs__msg__RadarDetection * msg);

/// Check for msg/RadarDetection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_conti_ars430_ros2_msgs
bool
conti_ars430_ros2_msgs__msg__RadarDetection__are_equal(const conti_ars430_ros2_msgs__msg__RadarDetection * lhs, const conti_ars430_ros2_msgs__msg__RadarDetection * rhs);

/// Copy a msg/RadarDetection message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_conti_ars430_ros2_msgs
bool
conti_ars430_ros2_msgs__msg__RadarDetection__copy(
  const conti_ars430_ros2_msgs__msg__RadarDetection * input,
  conti_ars430_ros2_msgs__msg__RadarDetection * output);

/// Initialize array of msg/RadarDetection messages.
/**
 * It allocates the memory for the number of elements and calls
 * conti_ars430_ros2_msgs__msg__RadarDetection__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_conti_ars430_ros2_msgs
bool
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__init(conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * array, size_t size);

/// Finalize array of msg/RadarDetection messages.
/**
 * It calls
 * conti_ars430_ros2_msgs__msg__RadarDetection__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_conti_ars430_ros2_msgs
void
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__fini(conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * array);

/// Create array of msg/RadarDetection messages.
/**
 * It allocates the memory for the array and calls
 * conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_conti_ars430_ros2_msgs
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence *
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__create(size_t size);

/// Destroy array of msg/RadarDetection messages.
/**
 * It calls
 * conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_conti_ars430_ros2_msgs
void
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__destroy(conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * array);

/// Check for msg/RadarDetection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_conti_ars430_ros2_msgs
bool
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__are_equal(const conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * lhs, const conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * rhs);

/// Copy an array of msg/RadarDetection messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_conti_ars430_ros2_msgs
bool
conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__copy(
  const conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * input,
  conti_ars430_ros2_msgs__msg__RadarDetection__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__FUNCTIONS_H_
