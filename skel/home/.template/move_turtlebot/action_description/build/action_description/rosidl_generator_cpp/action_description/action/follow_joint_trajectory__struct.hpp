// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from action_description:action/FollowJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef ACTION_DESCRIPTION__ACTION__FOLLOW_JOINT_TRAJECTORY__STRUCT_HPP_
#define ACTION_DESCRIPTION__ACTION__FOLLOW_JOINT_TRAJECTORY__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_description__action__FollowJointTrajectory_Goal __attribute__((deprecated))
#else
# define DEPRECATED__action_description__action__FollowJointTrajectory_Goal __declspec(deprecated)
#endif

namespace action_description
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowJointTrajectory_Goal_
{
  using Type = FollowJointTrajectory_Goal_<ContainerAllocator>;

  explicit FollowJointTrajectory_Goal_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    (void)_init;
  }

  explicit FollowJointTrajectory_Goal_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _trajectory_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _trajectory_type trajectory;

  // setters for named parameter idiom
  Type & set__trajectory(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_Goal
    std::shared_ptr<action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_Goal
    std::shared_ptr<action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowJointTrajectory_Goal_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowJointTrajectory_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowJointTrajectory_Goal_

// alias to use template instance with default allocator
using FollowJointTrajectory_Goal =
  action_description::action::FollowJointTrajectory_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_description

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__action_description__action__FollowJointTrajectory_Result __attribute__((deprecated))
#else
# define DEPRECATED__action_description__action__FollowJointTrajectory_Result __declspec(deprecated)
#endif

namespace action_description
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowJointTrajectory_Result_
{
  using Type = FollowJointTrajectory_Result_<ContainerAllocator>;

  explicit FollowJointTrajectory_Result_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
    }
  }

  explicit FollowJointTrajectory_Result_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
    }
  }

  // field types and members
  using _error_code_type =
    int32_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t SUCCESSFUL =
    0;
  static constexpr int32_t INVALID_GOAL =
    -1;
  static constexpr int32_t INVALID_JOINTS =
    -2;
  static constexpr int32_t OLD_HEADER_TIMESTAMP =
    -3;
  static constexpr int32_t PATH_TOLERANCE_VIOLATED =
    -4;
  static constexpr int32_t GOAL_TOLERANCE_VIOLATED =
    -5;

  // pointer types
  using RawPtr =
    action_description::action::FollowJointTrajectory_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_description::action::FollowJointTrajectory_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_Result
    std::shared_ptr<action_description::action::FollowJointTrajectory_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_Result
    std::shared_ptr<action_description::action::FollowJointTrajectory_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowJointTrajectory_Result_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowJointTrajectory_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowJointTrajectory_Result_

// alias to use template instance with default allocator
using FollowJointTrajectory_Result =
  action_description::action::FollowJointTrajectory_Result_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t FollowJointTrajectory_Result_<ContainerAllocator>::SUCCESSFUL;
template<typename ContainerAllocator>
constexpr int32_t FollowJointTrajectory_Result_<ContainerAllocator>::INVALID_GOAL;
template<typename ContainerAllocator>
constexpr int32_t FollowJointTrajectory_Result_<ContainerAllocator>::INVALID_JOINTS;
template<typename ContainerAllocator>
constexpr int32_t FollowJointTrajectory_Result_<ContainerAllocator>::OLD_HEADER_TIMESTAMP;
template<typename ContainerAllocator>
constexpr int32_t FollowJointTrajectory_Result_<ContainerAllocator>::PATH_TOLERANCE_VIOLATED;
template<typename ContainerAllocator>
constexpr int32_t FollowJointTrajectory_Result_<ContainerAllocator>::GOAL_TOLERANCE_VIOLATED;

}  // namespace action

}  // namespace action_description

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/joint_trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_description__action__FollowJointTrajectory_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__action_description__action__FollowJointTrajectory_Feedback __declspec(deprecated)
#endif

namespace action_description
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowJointTrajectory_Feedback_
{
  using Type = FollowJointTrajectory_Feedback_<ContainerAllocator>;

  explicit FollowJointTrajectory_Feedback_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : desired(_init),
    actual(_init),
    error(_init)
  {
    (void)_init;
  }

  explicit FollowJointTrajectory_Feedback_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : desired(_alloc, _init),
    actual(_alloc, _init),
    error(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _joint_names_type joint_names;
  using _desired_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _desired_type desired;
  using _actual_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _actual_type actual;
  using _error_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->joint_names = _arg;
    return *this;
  }
  Type & set__desired(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->desired = _arg;
    return *this;
  }
  Type & set__actual(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->actual = _arg;
    return *this;
  }
  Type & set__error(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_Feedback
    std::shared_ptr<action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_Feedback
    std::shared_ptr<action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowJointTrajectory_Feedback_ & other) const
  {
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->desired != other.desired) {
      return false;
    }
    if (this->actual != other.actual) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowJointTrajectory_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowJointTrajectory_Feedback_

// alias to use template instance with default allocator
using FollowJointTrajectory_Feedback =
  action_description::action::FollowJointTrajectory_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_description

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'goal'
#include "action_description/action/follow_joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_description__action__FollowJointTrajectory_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_description__action__FollowJointTrajectory_SendGoal_Request __declspec(deprecated)
#endif

namespace action_description
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowJointTrajectory_SendGoal_Request_
{
  using Type = FollowJointTrajectory_SendGoal_Request_<ContainerAllocator>;

  explicit FollowJointTrajectory_SendGoal_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit FollowJointTrajectory_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const action_description::action::FollowJointTrajectory_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_description::action::FollowJointTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_description::action::FollowJointTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_SendGoal_Request
    std::shared_ptr<action_description::action::FollowJointTrajectory_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_SendGoal_Request
    std::shared_ptr<action_description::action::FollowJointTrajectory_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowJointTrajectory_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowJointTrajectory_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowJointTrajectory_SendGoal_Request_

// alias to use template instance with default allocator
using FollowJointTrajectory_SendGoal_Request =
  action_description::action::FollowJointTrajectory_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_description

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_description__action__FollowJointTrajectory_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_description__action__FollowJointTrajectory_SendGoal_Response __declspec(deprecated)
#endif

namespace action_description
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowJointTrajectory_SendGoal_Response_
{
  using Type = FollowJointTrajectory_SendGoal_Response_<ContainerAllocator>;

  explicit FollowJointTrajectory_SendGoal_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit FollowJointTrajectory_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_description::action::FollowJointTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_description::action::FollowJointTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_SendGoal_Response
    std::shared_ptr<action_description::action::FollowJointTrajectory_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_SendGoal_Response
    std::shared_ptr<action_description::action::FollowJointTrajectory_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowJointTrajectory_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowJointTrajectory_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowJointTrajectory_SendGoal_Response_

// alias to use template instance with default allocator
using FollowJointTrajectory_SendGoal_Response =
  action_description::action::FollowJointTrajectory_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_description

namespace action_description
{

namespace action
{

struct FollowJointTrajectory_SendGoal
{
  using Request = action_description::action::FollowJointTrajectory_SendGoal_Request;
  using Response = action_description::action::FollowJointTrajectory_SendGoal_Response;
};

}  // namespace action

}  // namespace action_description

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_description__action__FollowJointTrajectory_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_description__action__FollowJointTrajectory_GetResult_Request __declspec(deprecated)
#endif

namespace action_description
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowJointTrajectory_GetResult_Request_
{
  using Type = FollowJointTrajectory_GetResult_Request_<ContainerAllocator>;

  explicit FollowJointTrajectory_GetResult_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit FollowJointTrajectory_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_description::action::FollowJointTrajectory_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_description::action::FollowJointTrajectory_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_GetResult_Request
    std::shared_ptr<action_description::action::FollowJointTrajectory_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_GetResult_Request
    std::shared_ptr<action_description::action::FollowJointTrajectory_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowJointTrajectory_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowJointTrajectory_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowJointTrajectory_GetResult_Request_

// alias to use template instance with default allocator
using FollowJointTrajectory_GetResult_Request =
  action_description::action::FollowJointTrajectory_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_description

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'result'
// already included above
// #include "action_description/action/follow_joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_description__action__FollowJointTrajectory_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_description__action__FollowJointTrajectory_GetResult_Response __declspec(deprecated)
#endif

namespace action_description
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowJointTrajectory_GetResult_Response_
{
  using Type = FollowJointTrajectory_GetResult_Response_<ContainerAllocator>;

  explicit FollowJointTrajectory_GetResult_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit FollowJointTrajectory_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    action_description::action::FollowJointTrajectory_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const action_description::action::FollowJointTrajectory_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_description::action::FollowJointTrajectory_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_description::action::FollowJointTrajectory_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_GetResult_Response
    std::shared_ptr<action_description::action::FollowJointTrajectory_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_GetResult_Response
    std::shared_ptr<action_description::action::FollowJointTrajectory_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowJointTrajectory_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowJointTrajectory_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowJointTrajectory_GetResult_Response_

// alias to use template instance with default allocator
using FollowJointTrajectory_GetResult_Response =
  action_description::action::FollowJointTrajectory_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_description

namespace action_description
{

namespace action
{

struct FollowJointTrajectory_GetResult
{
  using Request = action_description::action::FollowJointTrajectory_GetResult_Request;
  using Response = action_description::action::FollowJointTrajectory_GetResult_Response;
};

}  // namespace action

}  // namespace action_description

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "action_description/action/follow_joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_description__action__FollowJointTrajectory_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__action_description__action__FollowJointTrajectory_FeedbackMessage __declspec(deprecated)
#endif

namespace action_description
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowJointTrajectory_FeedbackMessage_
{
  using Type = FollowJointTrajectory_FeedbackMessage_<ContainerAllocator>;

  explicit FollowJointTrajectory_FeedbackMessage_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit FollowJointTrajectory_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const action_description::action::FollowJointTrajectory_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_description::action::FollowJointTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_description::action::FollowJointTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_description::action::FollowJointTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_description::action::FollowJointTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_description::action::FollowJointTrajectory_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_description::action::FollowJointTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_FeedbackMessage
    std::shared_ptr<action_description::action::FollowJointTrajectory_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_description__action__FollowJointTrajectory_FeedbackMessage
    std::shared_ptr<action_description::action::FollowJointTrajectory_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowJointTrajectory_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowJointTrajectory_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowJointTrajectory_FeedbackMessage_

// alias to use template instance with default allocator
using FollowJointTrajectory_FeedbackMessage =
  action_description::action::FollowJointTrajectory_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_description

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace action_description
{

namespace action
{

struct FollowJointTrajectory
{
  /// The goal message defined in the action definition.
  using Goal = action_description::action::FollowJointTrajectory_Goal;
  /// The result message defined in the action definition.
  using Result = action_description::action::FollowJointTrajectory_Result;
  /// The feedback message defined in the action definition.
  using Feedback = action_description::action::FollowJointTrajectory_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = action_description::action::FollowJointTrajectory_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = action_description::action::FollowJointTrajectory_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = action_description::action::FollowJointTrajectory_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct FollowJointTrajectory FollowJointTrajectory;

}  // namespace action

}  // namespace action_description

#endif  // ACTION_DESCRIPTION__ACTION__FOLLOW_JOINT_TRAJECTORY__STRUCT_HPP_
