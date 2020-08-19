// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_description:action/FollowJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef ACTION_DESCRIPTION__ACTION__FOLLOW_JOINT_TRAJECTORY__TRAITS_HPP_
#define ACTION_DESCRIPTION__ACTION__FOLLOW_JOINT_TRAJECTORY__TRAITS_HPP_

#include "action_description/action/follow_joint_trajectory__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_description::action::FollowJointTrajectory_Goal>()
{
  return "action_description::action::FollowJointTrajectory_Goal";
}

template<>
struct has_fixed_size<action_description::action::FollowJointTrajectory_Goal>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct has_bounded_size<action_description::action::FollowJointTrajectory_Goal>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectory>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_description::action::FollowJointTrajectory_Result>()
{
  return "action_description::action::FollowJointTrajectory_Result";
}

template<>
struct has_fixed_size<action_description::action::FollowJointTrajectory_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_description::action::FollowJointTrajectory_Result>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/joint_trajectory_point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_description::action::FollowJointTrajectory_Feedback>()
{
  return "action_description::action::FollowJointTrajectory_Feedback";
}

template<>
struct has_fixed_size<action_description::action::FollowJointTrajectory_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_description::action::FollowJointTrajectory_Feedback>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "action_description/action/follow_joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_description::action::FollowJointTrajectory_SendGoal_Request>()
{
  return "action_description::action::FollowJointTrajectory_SendGoal_Request";
}

template<>
struct has_fixed_size<action_description::action::FollowJointTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<action_description::action::FollowJointTrajectory_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_description::action::FollowJointTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<action_description::action::FollowJointTrajectory_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_description::action::FollowJointTrajectory_SendGoal_Response>()
{
  return "action_description::action::FollowJointTrajectory_SendGoal_Response";
}

template<>
struct has_fixed_size<action_description::action::FollowJointTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<action_description::action::FollowJointTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_description::action::FollowJointTrajectory_SendGoal>()
{
  return "action_description::action::FollowJointTrajectory_SendGoal";
}

template<>
struct has_fixed_size<action_description::action::FollowJointTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<action_description::action::FollowJointTrajectory_SendGoal_Request>::value &&
    has_fixed_size<action_description::action::FollowJointTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_description::action::FollowJointTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<action_description::action::FollowJointTrajectory_SendGoal_Request>::value &&
    has_bounded_size<action_description::action::FollowJointTrajectory_SendGoal_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_description::action::FollowJointTrajectory_GetResult_Request>()
{
  return "action_description::action::FollowJointTrajectory_GetResult_Request";
}

template<>
struct has_fixed_size<action_description::action::FollowJointTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_description::action::FollowJointTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "action_description/action/follow_joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_description::action::FollowJointTrajectory_GetResult_Response>()
{
  return "action_description::action::FollowJointTrajectory_GetResult_Response";
}

template<>
struct has_fixed_size<action_description::action::FollowJointTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<action_description::action::FollowJointTrajectory_Result>::value> {};

template<>
struct has_bounded_size<action_description::action::FollowJointTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<action_description::action::FollowJointTrajectory_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_description::action::FollowJointTrajectory_GetResult>()
{
  return "action_description::action::FollowJointTrajectory_GetResult";
}

template<>
struct has_fixed_size<action_description::action::FollowJointTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<action_description::action::FollowJointTrajectory_GetResult_Request>::value &&
    has_fixed_size<action_description::action::FollowJointTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_description::action::FollowJointTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<action_description::action::FollowJointTrajectory_GetResult_Request>::value &&
    has_bounded_size<action_description::action::FollowJointTrajectory_GetResult_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "action_description/action/follow_joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_description::action::FollowJointTrajectory_FeedbackMessage>()
{
  return "action_description::action::FollowJointTrajectory_FeedbackMessage";
}

template<>
struct has_fixed_size<action_description::action::FollowJointTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<action_description::action::FollowJointTrajectory_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_description::action::FollowJointTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<action_description::action::FollowJointTrajectory_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // ACTION_DESCRIPTION__ACTION__FOLLOW_JOINT_TRAJECTORY__TRAITS_HPP_
