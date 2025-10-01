// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetectionImage.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__STRUCT_HPP_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'detection_list'
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__conti_ars430_ros2_msgs__msg__RadarDetectionImage __attribute__((deprecated))
#else
# define DEPRECATED__conti_ars430_ros2_msgs__msg__RadarDetectionImage __declspec(deprecated)
#endif

namespace conti_ars430_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarDetectionImage_
{
  using Type = RadarDetectionImage_<ContainerAllocator>;

  explicit RadarDetectionImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detect_type = 0;
      this->utc_time = 0ull;
      this->internal_time = 0ul;
      this->meas_count = 0ul;
      this->cycle_count = 0ul;
      this->num_avail_detects = 0;
      this->vel_ambig = 0.0;
      this->center_freq = 0.0f;
    }
  }

  explicit RadarDetectionImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detect_type = 0;
      this->utc_time = 0ull;
      this->internal_time = 0ul;
      this->meas_count = 0ul;
      this->cycle_count = 0ul;
      this->num_avail_detects = 0;
      this->vel_ambig = 0.0;
      this->center_freq = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _detect_type_type =
    uint16_t;
  _detect_type_type detect_type;
  using _utc_time_type =
    uint64_t;
  _utc_time_type utc_time;
  using _internal_time_type =
    uint32_t;
  _internal_time_type internal_time;
  using _meas_count_type =
    uint32_t;
  _meas_count_type meas_count;
  using _cycle_count_type =
    uint32_t;
  _cycle_count_type cycle_count;
  using _num_avail_detects_type =
    uint16_t;
  _num_avail_detects_type num_avail_detects;
  using _vel_ambig_type =
    double;
  _vel_ambig_type vel_ambig;
  using _center_freq_type =
    float;
  _center_freq_type center_freq;
  using _detection_list_type =
    std::vector<conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator>>>;
  _detection_list_type detection_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__detect_type(
    const uint16_t & _arg)
  {
    this->detect_type = _arg;
    return *this;
  }
  Type & set__utc_time(
    const uint64_t & _arg)
  {
    this->utc_time = _arg;
    return *this;
  }
  Type & set__internal_time(
    const uint32_t & _arg)
  {
    this->internal_time = _arg;
    return *this;
  }
  Type & set__meas_count(
    const uint32_t & _arg)
  {
    this->meas_count = _arg;
    return *this;
  }
  Type & set__cycle_count(
    const uint32_t & _arg)
  {
    this->cycle_count = _arg;
    return *this;
  }
  Type & set__num_avail_detects(
    const uint16_t & _arg)
  {
    this->num_avail_detects = _arg;
    return *this;
  }
  Type & set__vel_ambig(
    const double & _arg)
  {
    this->vel_ambig = _arg;
    return *this;
  }
  Type & set__center_freq(
    const float & _arg)
  {
    this->center_freq = _arg;
    return *this;
  }
  Type & set__detection_list(
    const std::vector<conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<conti_ars430_ros2_msgs::msg::RadarDetection_<ContainerAllocator>>> & _arg)
  {
    this->detection_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    conti_ars430_ros2_msgs::msg::RadarDetectionImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const conti_ars430_ros2_msgs::msg::RadarDetectionImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<conti_ars430_ros2_msgs::msg::RadarDetectionImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<conti_ars430_ros2_msgs::msg::RadarDetectionImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      conti_ars430_ros2_msgs::msg::RadarDetectionImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<conti_ars430_ros2_msgs::msg::RadarDetectionImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      conti_ars430_ros2_msgs::msg::RadarDetectionImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<conti_ars430_ros2_msgs::msg::RadarDetectionImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<conti_ars430_ros2_msgs::msg::RadarDetectionImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<conti_ars430_ros2_msgs::msg::RadarDetectionImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__conti_ars430_ros2_msgs__msg__RadarDetectionImage
    std::shared_ptr<conti_ars430_ros2_msgs::msg::RadarDetectionImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__conti_ars430_ros2_msgs__msg__RadarDetectionImage
    std::shared_ptr<conti_ars430_ros2_msgs::msg::RadarDetectionImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarDetectionImage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->detect_type != other.detect_type) {
      return false;
    }
    if (this->utc_time != other.utc_time) {
      return false;
    }
    if (this->internal_time != other.internal_time) {
      return false;
    }
    if (this->meas_count != other.meas_count) {
      return false;
    }
    if (this->cycle_count != other.cycle_count) {
      return false;
    }
    if (this->num_avail_detects != other.num_avail_detects) {
      return false;
    }
    if (this->vel_ambig != other.vel_ambig) {
      return false;
    }
    if (this->center_freq != other.center_freq) {
      return false;
    }
    if (this->detection_list != other.detection_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarDetectionImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarDetectionImage_

// alias to use template instance with default allocator
using RadarDetectionImage =
  conti_ars430_ros2_msgs::msg::RadarDetectionImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace conti_ars430_ros2_msgs

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__RADAR_DETECTION_IMAGE__STRUCT_HPP_
