// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_description:action/FollowJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef ACTION_DESCRIPTION__ACTION__FOLLOW_JOINT_TRAJECTORY__STRUCT_H_
#define ACTION_DESCRIPTION__ACTION__FOLLOW_JOINT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/joint_trajectory__struct.h"

// Struct defined in action/FollowJointTrajectory in the package action_description.
typedef struct action_description__action__FollowJointTrajectory_Goal
{
  trajectory_msgs__msg__JointTrajectory trajectory;
} action_description__action__FollowJointTrajectory_Goal;

// Struct for a sequence of action_description__action__FollowJointTrajectory_Goal.
typedef struct action_description__action__FollowJointTrajectory_Goal__Sequence
{
  action_description__action__FollowJointTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_description__action__FollowJointTrajectory_Goal__Sequence;


// Constants defined in the message

/// Constant 'SUCCESSFUL'.
enum
{
  action_description__action__FollowJointTrajectory_Result__SUCCESSFUL = 0l
};

/// Constant 'INVALID_GOAL'.
enum
{
  action_description__action__FollowJointTrajectory_Result__INVALID_GOAL = -1l
};

/// Constant 'INVALID_JOINTS'.
enum
{
  action_description__action__FollowJointTrajectory_Result__INVALID_JOINTS = -2l
};

/// Constant 'OLD_HEADER_TIMESTAMP'.
enum
{
  action_description__action__FollowJointTrajectory_Result__OLD_HEADER_TIMESTAMP = -3l
};

/// Constant 'PATH_TOLERANCE_VIOLATED'.
enum
{
  action_description__action__FollowJointTrajectory_Result__PATH_TOLERANCE_VIOLATED = -4l
};

/// Constant 'GOAL_TOLERANCE_VIOLATED'.
enum
{
  action_description__action__FollowJointTrajectory_Result__GOAL_TOLERANCE_VIOLATED = -5l
};

// Struct defined in action/FollowJointTrajectory in the package action_description.
typedef struct action_description__action__FollowJointTrajectory_Result
{
  int32_t error_code;
} action_description__action__FollowJointTrajectory_Result;

// Struct for a sequence of action_description__action__FollowJointTrajectory_Result.
typedef struct action_description__action__FollowJointTrajectory_Result__Sequence
{
  action_description__action__FollowJointTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_description__action__FollowJointTrajectory_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_names'
#include "rosidl_generator_c/string.h"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/joint_trajectory_point__struct.h"

// Struct defined in action/FollowJointTrajectory in the package action_description.
typedef struct action_description__action__FollowJointTrajectory_Feedback
{
  rosidl_generator_c__String__Sequence joint_names;
  trajectory_msgs__msg__JointTrajectoryPoint desired;
  trajectory_msgs__msg__JointTrajectoryPoint actual;
  trajectory_msgs__msg__JointTrajectoryPoint error;
} action_description__action__FollowJointTrajectory_Feedback;

// Struct for a sequence of action_description__action__FollowJointTrajectory_Feedback.
typedef struct action_description__action__FollowJointTrajectory_Feedback__Sequence
{
  action_description__action__FollowJointTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_description__action__FollowJointTrajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'goal'
#include "action_description/action/follow_joint_trajectory__struct.h"

// Struct defined in action/FollowJointTrajectory in the package action_description.
typedef struct action_description__action__FollowJointTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_description__action__FollowJointTrajectory_Goal goal;
} action_description__action__FollowJointTrajectory_SendGoal_Request;

// Struct for a sequence of action_description__action__FollowJointTrajectory_SendGoal_Request.
typedef struct action_description__action__FollowJointTrajectory_SendGoal_Request__Sequence
{
  action_description__action__FollowJointTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_description__action__FollowJointTrajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"

// Struct defined in action/FollowJointTrajectory in the package action_description.
typedef struct action_description__action__FollowJointTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} action_description__action__FollowJointTrajectory_SendGoal_Response;

// Struct for a sequence of action_description__action__FollowJointTrajectory_SendGoal_Response.
typedef struct action_description__action__FollowJointTrajectory_SendGoal_Response__Sequence
{
  action_description__action__FollowJointTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_description__action__FollowJointTrajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"

// Struct defined in action/FollowJointTrajectory in the package action_description.
typedef struct action_description__action__FollowJointTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} action_description__action__FollowJointTrajectory_GetResult_Request;

// Struct for a sequence of action_description__action__FollowJointTrajectory_GetResult_Request.
typedef struct action_description__action__FollowJointTrajectory_GetResult_Request__Sequence
{
  action_description__action__FollowJointTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_description__action__FollowJointTrajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "action_description/action/follow_joint_trajectory__struct.h"

// Struct defined in action/FollowJointTrajectory in the package action_description.
typedef struct action_description__action__FollowJointTrajectory_GetResult_Response
{
  int8_t status;
  action_description__action__FollowJointTrajectory_Result result;
} action_description__action__FollowJointTrajectory_GetResult_Response;

// Struct for a sequence of action_description__action__FollowJointTrajectory_GetResult_Response.
typedef struct action_description__action__FollowJointTrajectory_GetResult_Response__Sequence
{
  action_description__action__FollowJointTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_description__action__FollowJointTrajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "action_description/action/follow_joint_trajectory__struct.h"

// Struct defined in action/FollowJointTrajectory in the package action_description.
typedef struct action_description__action__FollowJointTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_description__action__FollowJointTrajectory_Feedback feedback;
} action_description__action__FollowJointTrajectory_FeedbackMessage;

// Struct for a sequence of action_description__action__FollowJointTrajectory_FeedbackMessage.
typedef struct action_description__action__FollowJointTrajectory_FeedbackMessage__Sequence
{
  action_description__action__FollowJointTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_description__action__FollowJointTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_DESCRIPTION__ACTION__FOLLOW_JOINT_TRAJECTORY__STRUCT_H_
