// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetection.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__STRUCT_HPP_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__conti_ars430_ros2_msgs__msg__RadarDetection __attribute__((deprecated))
#else
# define DEPRECATED__conti_ars430_ros2_msgs__msg__RadarDetection __declspec(deprecated)
#endif

namespace conti_ars430_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarDetection_
{
  using Type = RadarDetection_<ContainerAllocator>;

  explicit RadarDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
      this->v_rel_rad = 0.0f;
      this->az_ang0 = 0.0f;
      this->az_ang1 = 0.0f;
      this->el_ang = 0.0f;
      this->rcs0 = 0.0f;
      this->rcs1 = 0.0f;
      this->prob0 = 0.0f;
      this->prob1 = 0.0f;
      this->range_var = 0.0f;
      this->v_rel_rad_var = 0.0f;
      this->az_ang0_var = 0.0f;
      this->az_ang1_var = 0.0f;
      this->el_ang_var = 0.0f;
      this->prob_false_alarm = 0.0f;
      this->snr = 0.0f;
    }
  }

  explicit RadarDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
      this->v_rel_rad = 0.0f;
      this->az_ang0 = 0.0f;
      this->az_ang1 = 0.0f;
      this->el_ang = 0.0f;
      this->rcs0 = 0.0f;
      this->rcs1 = 0.0f;
      this->prob0 = 0.0f;
      this->prob1 = 0.0f;
      this->range_var = 0.0f;
      this->v_rel_rad_var = 0.0f;
      this->az_ang0_var = 0.0f;
      this->az_ang1_var = 0.0f;
      this->el_ang_var = 0.0f;
      this->prob_false_alarm = 0.0f;
      this->snr = 0.0f;
    }
  }

  // field types and members
  using _range_type =
    float;
  _range_type range;
  using _v_rel_rad_type =
    float;
  _v_rel_rad_type v_rel_rad;
  using _az_ang0_type =
    float;
  _az_ang0_type az_ang0;
  using _az_ang1_type =
    float;
  _az_ang1_type az_ang1;
  using _el_ang_type =
    float;
  _el_ang_type el_ang;
  using _rcs0_type =
    float;
  _rcs0_type rcs0;
  using _rcs1_type =
    float;
  _rcs1_type rcs1;
  using _prob0_type =
    float;
  _prob0_type prob0;
  using _prob1_type =
    float;
  _prob1_type prob1;
  using _range_var_type =
    float;
  _range_var_type range_var;
  using _v_rel_rad_var_type =
    float;
  _v_rel_rad_var_type v_rel_rad_var;
  using _az_ang0_var_type =
    float;
  _az_ang0_var_type az_ang0_var;
  using _az_ang1_var_type =
    float;
  _az_ang1_var_type az_ang1_var;
  using _el_ang_var_type =
    float;
  _el_ang_var_type el_ang_var;
  using _prob_false_alarm_type =
    float;
  _prob_false_alarm_type prob_false_alarm;
  using _snr_type =
    float;
  _snr_type snr;

  // setters for named parameter idiom
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__v_rel_rad(
    const float & _arg)
  {
    this->v_rel_rad = _arg;
    return *this;
  }
  Type & set__az_ang0(
    const float & _arg)
  {
    this->az_ang0 = _arg;
    return *this;
  }
  Type & set__az_ang1(
    const float & _arg)
  {
    this->az_ang1 = _arg;
    return *this;
  }
  Type & set__el_ang(
    const float & _arg)
  {
    this->el_ang = _arg;
    return *this;
  }
  Type & set__rcs0(
    const float & _arg)
  {
    this->rcs0 = _arg;
    return *this;
  }
  Type & set__rcs1(
    const float & _arg)
  {
    this->rcs1 = _arg;
    return *this;
  }
  Type & set__prob0(
    const float & _arg)
  {
    this->prob0 = _arg;
    return *this;
  }
  Type & set__prob1(
    const float & _arg)
  {
    this->prob1 = _arg;
    return *this;
  }
  Type & set__range_var(
    const float & _arg)
  {
    this->range_var = _arg;
    return *this;
  }
  Type & set__v_rel_rad_var(
    const float & _arg)
  {
    this->v_rel_rad_var = _arg;
    return *this;
  }
  Type & set__az_ang0_var(
    const float & _arg)
  {
    this->az_ang0_var = _arg;
    return *this;
  }
  Type & set__az_ang1_var(
    const float & _arg)
  {
    this->az_ang1_var = _arg;
    return *this;
  }
  Type & set__el_ang_var(
    const float & _arg)
  {
    this->el_ang_var = _arg;
    return *this;
  }
  Type & set__prob_false_alarm(
    const float & _arg)
  {
    this->prob_false_alarm = _arg;
    return *this;
  }
  Type & set__snr(
    const float & _arg)
  {
    this->snr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__conti_ars430_ros2_msgs__msg__RadarDetection
    std::shared_ptr<conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__conti_ars430_ros2_msgs__msg__RadarDetection
    std::shared_ptr<conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarDetection_ & other) const
  {
    if (this->range != other.range) {
      return false;
    }
    if (this->v_rel_rad != other.v_rel_rad) {
      return false;
    }
    if (this->az_ang0 != other.az_ang0) {
      return false;
    }
    if (this->az_ang1 != other.az_ang1) {
      return false;
    }
    if (this->el_ang != other.el_ang) {
      return false;
    }
    if (this->rcs0 != other.rcs0) {
      return false;
    }
    if (this->rcs1 != other.rcs1) {
      return false;
    }
    if (this->prob0 != other.prob0) {
      return false;
    }
    if (this->prob1 != other.prob1) {
      return false;
    }
    if (this->range_var != other.range_var) {
      return false;
    }
    if (this->v_rel_rad_var != other.v_rel_rad_var) {
      return false;
    }
    if (this->az_ang0_var != other.az_ang0_var) {
      return false;
    }
    if (this->az_ang1_var != other.az_ang1_var) {
      return false;
    }
    if (this->el_ang_var != other.el_ang_var) {
      return false;
    }
    if (this->prob_false_alarm != other.prob_false_alarm) {
      return false;
    }
    if (this->snr != other.snr) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarDetection_

// alias to use template instance with default allocator
using RadarDetection =
  conti_ars430_ros2_msgs::msg::RadarDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace conti_ars430_ros2_msgs

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION__STRUCT_HPP_
