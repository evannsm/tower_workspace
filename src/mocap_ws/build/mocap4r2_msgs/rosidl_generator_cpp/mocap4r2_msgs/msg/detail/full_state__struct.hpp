// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mocap4r2_msgs:msg/FullState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_msgs/msg/full_state.hpp"


#ifndef MOCAP4R2_MSGS__MSG__DETAIL__FULL_STATE__STRUCT_HPP_
#define MOCAP4R2_MSGS__MSG__DETAIL__FULL_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mocap4r2_msgs__msg__FullState __attribute__((deprecated))
#else
# define DEPRECATED__mocap4r2_msgs__msg__FullState __declspec(deprecated)
#endif

namespace mocap4r2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FullState_
{
  using Type = FullState_<ContainerAllocator>;

  explicit FullState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->acceleration.begin(), this->acceleration.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0f);
    }
  }

  explicit FullState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc),
    velocity(_alloc),
    acceleration(_alloc),
    q(_alloc),
    angular_velocity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->acceleration.begin(), this->acceleration.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0f);
    }
  }

  // field types and members
  using _position_type =
    std::array<float, 3>;
  _position_type position;
  using _velocity_type =
    std::array<float, 3>;
  _velocity_type velocity;
  using _acceleration_type =
    std::array<float, 3>;
  _acceleration_type acceleration;
  using _q_type =
    std::array<float, 4>;
  _q_type q;
  using _angular_velocity_type =
    std::array<float, 3>;
  _angular_velocity_type angular_velocity;

  // setters for named parameter idiom
  Type & set__position(
    const std::array<float, 3> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::array<float, 3> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const std::array<float, 3> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__q(
    const std::array<float, 4> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const std::array<float, 3> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap4r2_msgs::msg::FullState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap4r2_msgs::msg::FullState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap4r2_msgs::msg::FullState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap4r2_msgs::msg::FullState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap4r2_msgs::msg::FullState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_msgs::msg::FullState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap4r2_msgs::msg::FullState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_msgs::msg::FullState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap4r2_msgs::msg::FullState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap4r2_msgs::msg::FullState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap4r2_msgs__msg__FullState
    std::shared_ptr<mocap4r2_msgs::msg::FullState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap4r2_msgs__msg__FullState
    std::shared_ptr<mocap4r2_msgs::msg::FullState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FullState_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const FullState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FullState_

// alias to use template instance with default allocator
using FullState =
  mocap4r2_msgs::msg::FullState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mocap4r2_msgs

#endif  // MOCAP4R2_MSGS__MSG__DETAIL__FULL_STATE__STRUCT_HPP_
