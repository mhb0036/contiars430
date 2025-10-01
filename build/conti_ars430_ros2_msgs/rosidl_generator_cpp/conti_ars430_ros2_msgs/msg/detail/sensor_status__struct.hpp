// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from conti_ars430_ros2_msgs:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__SENSOR_STATUS__STRUCT_HPP_
#define CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__SENSOR_STATUS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__conti_ars430_ros2_msgs__msg__SensorStatus __attribute__((deprecated))
#else
# define DEPRECATED__conti_ars430_ros2_msgs__msg__SensorStatus __declspec(deprecated)
#endif

namespace conti_ars430_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorStatus_
{
  using Type = SensorStatus_<ContainerAllocator>;

  explicit SensorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->part_num = 0ull;
      this->assembly_part_num = 0ull;
      this->sw_part_num = 0ull;
      this->bl_ver = 0ul;
      this->bl_crc = 0ul;
      this->sw_ver = 0ul;
      this->sw_crc = 0ul;
      this->utc_time = 0ull;
      this->internal_time = 0ul;
      this->cur_damping = 0.0;
      this->op_state = 0;
      this->cur_far_center_freq = 0;
      this->cur_near_center_freq = 0;
      this->defective = 0;
      this->supply_volt_limit = 0;
      this->sensor_off_temp = 0;
      this->gm_missing = 0;
      this->tx_out_reduced = 0;
      this->max_range_far = 0.0;
      this->max_range_near = 0.0;
    }
  }

  explicit SensorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->part_num = 0ull;
      this->assembly_part_num = 0ull;
      this->sw_part_num = 0ull;
      this->bl_ver = 0ul;
      this->bl_crc = 0ul;
      this->sw_ver = 0ul;
      this->sw_crc = 0ul;
      this->utc_time = 0ull;
      this->internal_time = 0ul;
      this->cur_damping = 0.0;
      this->op_state = 0;
      this->cur_far_center_freq = 0;
      this->cur_near_center_freq = 0;
      this->defective = 0;
      this->supply_volt_limit = 0;
      this->sensor_off_temp = 0;
      this->gm_missing = 0;
      this->tx_out_reduced = 0;
      this->max_range_far = 0.0;
      this->max_range_near = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _part_num_type =
    uint64_t;
  _part_num_type part_num;
  using _assembly_part_num_type =
    uint64_t;
  _assembly_part_num_type assembly_part_num;
  using _sw_part_num_type =
    uint64_t;
  _sw_part_num_type sw_part_num;
  using _serial_num_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _serial_num_type serial_num;
  using _bl_ver_type =
    uint32_t;
  _bl_ver_type bl_ver;
  using _bl_crc_type =
    uint32_t;
  _bl_crc_type bl_crc;
  using _sw_ver_type =
    uint32_t;
  _sw_ver_type sw_ver;
  using _sw_crc_type =
    uint32_t;
  _sw_crc_type sw_crc;
  using _utc_time_type =
    uint64_t;
  _utc_time_type utc_time;
  using _internal_time_type =
    uint32_t;
  _internal_time_type internal_time;
  using _cur_damping_type =
    double;
  _cur_damping_type cur_damping;
  using _op_state_type =
    uint8_t;
  _op_state_type op_state;
  using _cur_far_center_freq_type =
    uint8_t;
  _cur_far_center_freq_type cur_far_center_freq;
  using _cur_near_center_freq_type =
    uint8_t;
  _cur_near_center_freq_type cur_near_center_freq;
  using _defective_type =
    uint8_t;
  _defective_type defective;
  using _supply_volt_limit_type =
    uint8_t;
  _supply_volt_limit_type supply_volt_limit;
  using _sensor_off_temp_type =
    uint8_t;
  _sensor_off_temp_type sensor_off_temp;
  using _gm_missing_type =
    uint8_t;
  _gm_missing_type gm_missing;
  using _tx_out_reduced_type =
    uint8_t;
  _tx_out_reduced_type tx_out_reduced;
  using _max_range_far_type =
    double;
  _max_range_far_type max_range_far;
  using _max_range_near_type =
    double;
  _max_range_near_type max_range_near;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__part_num(
    const uint64_t & _arg)
  {
    this->part_num = _arg;
    return *this;
  }
  Type & set__assembly_part_num(
    const uint64_t & _arg)
  {
    this->assembly_part_num = _arg;
    return *this;
  }
  Type & set__sw_part_num(
    const uint64_t & _arg)
  {
    this->sw_part_num = _arg;
    return *this;
  }
  Type & set__serial_num(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->serial_num = _arg;
    return *this;
  }
  Type & set__bl_ver(
    const uint32_t & _arg)
  {
    this->bl_ver = _arg;
    return *this;
  }
  Type & set__bl_crc(
    const uint32_t & _arg)
  {
    this->bl_crc = _arg;
    return *this;
  }
  Type & set__sw_ver(
    const uint32_t & _arg)
  {
    this->sw_ver = _arg;
    return *this;
  }
  Type & set__sw_crc(
    const uint32_t & _arg)
  {
    this->sw_crc = _arg;
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
  Type & set__cur_damping(
    const double & _arg)
  {
    this->cur_damping = _arg;
    return *this;
  }
  Type & set__op_state(
    const uint8_t & _arg)
  {
    this->op_state = _arg;
    return *this;
  }
  Type & set__cur_far_center_freq(
    const uint8_t & _arg)
  {
    this->cur_far_center_freq = _arg;
    return *this;
  }
  Type & set__cur_near_center_freq(
    const uint8_t & _arg)
  {
    this->cur_near_center_freq = _arg;
    return *this;
  }
  Type & set__defective(
    const uint8_t & _arg)
  {
    this->defective = _arg;
    return *this;
  }
  Type & set__supply_volt_limit(
    const uint8_t & _arg)
  {
    this->supply_volt_limit = _arg;
    return *this;
  }
  Type & set__sensor_off_temp(
    const uint8_t & _arg)
  {
    this->sensor_off_temp = _arg;
    return *this;
  }
  Type & set__gm_missing(
    const uint8_t & _arg)
  {
    this->gm_missing = _arg;
    return *this;
  }
  Type & set__tx_out_reduced(
    const uint8_t & _arg)
  {
    this->tx_out_reduced = _arg;
    return *this;
  }
  Type & set__max_range_far(
    const double & _arg)
  {
    this->max_range_far = _arg;
    return *this;
  }
  Type & set__max_range_near(
    const double & _arg)
  {
    this->max_range_near = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    conti_ars430_ros2_msgs::msg::SensorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const conti_ars430_ros2_msgs::msg::SensorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<conti_ars430_ros2_msgs::msg::SensorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<conti_ars430_ros2_msgs::msg::SensorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      conti_ars430_ros2_msgs::msg::SensorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<conti_ars430_ros2_msgs::msg::SensorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      conti_ars430_ros2_msgs::msg::SensorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<conti_ars430_ros2_msgs::msg::SensorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<conti_ars430_ros2_msgs::msg::SensorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<conti_ars430_ros2_msgs::msg::SensorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__conti_ars430_ros2_msgs__msg__SensorStatus
    std::shared_ptr<conti_ars430_ros2_msgs::msg::SensorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__conti_ars430_ros2_msgs__msg__SensorStatus
    std::shared_ptr<conti_ars430_ros2_msgs::msg::SensorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->part_num != other.part_num) {
      return false;
    }
    if (this->assembly_part_num != other.assembly_part_num) {
      return false;
    }
    if (this->sw_part_num != other.sw_part_num) {
      return false;
    }
    if (this->serial_num != other.serial_num) {
      return false;
    }
    if (this->bl_ver != other.bl_ver) {
      return false;
    }
    if (this->bl_crc != other.bl_crc) {
      return false;
    }
    if (this->sw_ver != other.sw_ver) {
      return false;
    }
    if (this->sw_crc != other.sw_crc) {
      return false;
    }
    if (this->utc_time != other.utc_time) {
      return false;
    }
    if (this->internal_time != other.internal_time) {
      return false;
    }
    if (this->cur_damping != other.cur_damping) {
      return false;
    }
    if (this->op_state != other.op_state) {
      return false;
    }
    if (this->cur_far_center_freq != other.cur_far_center_freq) {
      return false;
    }
    if (this->cur_near_center_freq != other.cur_near_center_freq) {
      return false;
    }
    if (this->defective != other.defective) {
      return false;
    }
    if (this->supply_volt_limit != other.supply_volt_limit) {
      return false;
    }
    if (this->sensor_off_temp != other.sensor_off_temp) {
      return false;
    }
    if (this->gm_missing != other.gm_missing) {
      return false;
    }
    if (this->tx_out_reduced != other.tx_out_reduced) {
      return false;
    }
    if (this->max_range_far != other.max_range_far) {
      return false;
    }
    if (this->max_range_near != other.max_range_near) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorStatus_

// alias to use template instance with default allocator
using SensorStatus =
  conti_ars430_ros2_msgs::msg::SensorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace conti_ars430_ros2_msgs

#endif  // CONTI_ARS430_ROS2_MSGS__MSG__DETAIL__SENSOR_STATUS__STRUCT_HPP_
