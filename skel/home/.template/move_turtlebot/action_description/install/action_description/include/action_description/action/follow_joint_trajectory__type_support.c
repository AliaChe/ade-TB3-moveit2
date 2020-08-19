// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_description:action/FollowJointTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
#include "action_description/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_description/action/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `trajectory`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `trajectory`
#include "trajectory_msgs/msg/joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_member_array[1] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_Goal, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_members = {
  "action_description__action",  // message namespace
  "FollowJointTrajectory_Goal",  // message name
  1,  // number of fields
  sizeof(action_description__action__FollowJointTrajectory_Goal),
  FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_type_support_handle = {
  0,
  &FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_description
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_Goal)() {
  FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  if (!FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_type_support_handle.typesupport_identifier) {
    FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_description/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_description/action/follow_joint_trajectory__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_member_array[1] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_members = {
  "action_description__action",  // message namespace
  "FollowJointTrajectory_Result",  // message name
  1,  // number of fields
  sizeof(action_description__action__FollowJointTrajectory_Result),
  FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_type_support_handle = {
  0,
  &FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_description
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_Result)() {
  if (!FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_type_support_handle.typesupport_identifier) {
    FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_description/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_description/action/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `joint_names`
#include "rosidl_generator_c/string_functions.h"
// Member `desired`
// Member `actual`
// Member `error`
#include "trajectory_msgs/msg/joint_trajectory_point.h"
// Member `desired`
// Member `actual`
// Member `error`
#include "trajectory_msgs/msg/joint_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array[4] = {
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_Feedback, joint_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_Feedback, desired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_Feedback, actual),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_Feedback, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_members = {
  "action_description__action",  // message namespace
  "FollowJointTrajectory_Feedback",  // message name
  4,  // number of fields
  sizeof(action_description__action__FollowJointTrajectory_Feedback),
  FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_type_support_handle = {
  0,
  &FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_description
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_Feedback)() {
  FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  if (!FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_type_support_handle.typesupport_identifier) {
    FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_description/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_description/action/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "action_description/action/follow_joint_trajectory.h"
// Member `goal`
// already included above
// #include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_members = {
  "action_description__action",  // message namespace
  "FollowJointTrajectory_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(action_description__action__FollowJointTrajectory_SendGoal_Request),
  FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_type_support_handle = {
  0,
  &FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_description
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_SendGoal_Request)() {
  FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_Goal)();
  if (!FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_description/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_description/action/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_members = {
  "action_description__action",  // message namespace
  "FollowJointTrajectory_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(action_description__action__FollowJointTrajectory_SendGoal_Response),
  FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_type_support_handle = {
  0,
  &FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_description
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_SendGoal_Response)() {
  FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "action_description/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_members = {
  "action_description__action",  // service namespace
  "FollowJointTrajectory_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_type_support_handle = {
  0,
  &action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_description
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_SendGoal)() {
  if (!action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_type_support_handle.typesupport_identifier) {
    action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_SendGoal_Response)()->data;
  }

  return &action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_description/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_description/action/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_members = {
  "action_description__action",  // message namespace
  "FollowJointTrajectory_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(action_description__action__FollowJointTrajectory_GetResult_Request),
  FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_type_support_handle = {
  0,
  &FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_description
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_GetResult_Request)() {
  FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_description/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_description/action/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "action_description/action/follow_joint_trajectory.h"
// Member `result`
// already included above
// #include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_members = {
  "action_description__action",  // message namespace
  "FollowJointTrajectory_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(action_description__action__FollowJointTrajectory_GetResult_Response),
  FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_type_support_handle = {
  0,
  &FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_description
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_GetResult_Response)() {
  FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_Result)();
  if (!FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "action_description/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_members = {
  "action_description__action",  // service namespace
  "FollowJointTrajectory_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_type_support_handle = {
  0,
  &action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_description
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_GetResult)() {
  if (!action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_type_support_handle.typesupport_identifier) {
    action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_GetResult_Response)()->data;
  }

  return &action_description__action__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_description/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_description/action/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "action_description/action/follow_joint_trajectory.h"
// Member `feedback`
// already included above
// #include "action_description/action/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_description__action__FollowJointTrajectory_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_members = {
  "action_description__action",  // message namespace
  "FollowJointTrajectory_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(action_description__action__FollowJointTrajectory_FeedbackMessage),
  FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_type_support_handle = {
  0,
  &FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_description
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_FeedbackMessage)() {
  FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_description, action, FollowJointTrajectory_Feedback)();
  if (!FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
