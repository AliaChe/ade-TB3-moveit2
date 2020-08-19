#include <thread>
#include <rclcpp/rclcpp.hpp>
#include <moveit/moveit_cpp/moveit_cpp.h>
#include <moveit/moveit_cpp/planning_component.h>
#include <moveit/robot_state/conversions.h>
#include <moveit_msgs/msg/display_robot_state.hpp>
#include <trajectory_msgs/msg/joint_trajectory.hpp>

static const rclcpp::Logger LOGGER = rclcpp::get_logger("moveit_cpp_demo");

class MoveItCppDemo
{
public:
  MoveItCppDemo(const rclcpp::Node::SharedPtr& node)
    : node_(node)
   // , robot_state_publisher_(node_->create_publisher<moveit_msgs::msg::DisplayRobotState>("display_robot_state", 1))
   // , trajectory_publisher_(node_->create_publisher<trajectory_msgs::msg::JointTrajectory>(
   //       "/fake_joint_trajectory_controller/joint_trajectory", 1))
  {
  }

  void run()
  {
    RCLCPP_INFO(LOGGER, "Initialize MoveItCpp");
    moveit_cpp_ = std::make_shared<moveit::planning_interface::MoveItCpp>(node_);
    moveit_cpp_->getPlanningSceneMonitor()->setPlanningScenePublishingFrequency(100);

    RCLCPP_INFO(LOGGER, "Initialize PlanningComponent");
    moveit::planning_interface::PlanningComponent arm("turtlebot", moveit_cpp_);

    // A little delay before running the plan
    rclcpp::sleep_for(std::chrono::seconds(3));

    // Create collision object, planning shouldn't be too easy
    moveit_msgs::msg::CollisionObject collision_object;
    collision_object.header.frame_id = "world";
    collision_object.id = "box";

    shape_msgs::msg::SolidPrimitive box;
    box.type = box.BOX;
    box.dimensions = { 0.1, 0.4, 0.1 };

    geometry_msgs::msg::Pose box_pose;
    box_pose.position.x = -0.5;
    box_pose.position.y = 0.0;
    box_pose.position.z = 1.1;

    collision_object.primitives.push_back(box);
    collision_object.primitive_poses.push_back(box_pose);
    collision_object.operation = collision_object.ADD;

   // Add object to planning scene
    {  // Lock PlanningScene
      planning_scene_monitor::LockedPlanningSceneRW scene(moveit_cpp_->getPlanningSceneMonitor());
      scene->processCollisionObjectMsg(collision_object);
    }  // Unlock PlanningScene

    // Set joint state goal
    RCLCPP_INFO(LOGGER, "Set goal");
    
    /* geometry_msgs::msg::PoseStamped goal_pose;
    goal_pose.header.stamp=rclcpp::Clock().now();
    goal_pose.pose.position.x=2;
    goal_pose.pose.position.y=0;
    goal_pose.pose.position.z=0;
    goal_pose.pose.orientation.x=0;
    goal_pose.pose.orientation.y=0;
    goal_pose.pose.orientation.z=0;
    goal_pose.pose.orientation.w=0;
    arm.setGoal(goal_pose, "base_footprint"); */
    
    arm.setGoal("home");

    // Run actual plan
    RCLCPP_INFO(LOGGER, "Plan to goal");
    const auto plan_solution = arm.plan();
    if (plan_solution)
    {
      // TODO(henningkayser): Enable trajectory execution once controllers are available
      // RCLCPP_INFO(LOGGER, "arm.execute()");
      // arm.execute();
      // Right now the joint trajectory controller doesn't support actions and the current way to send trajectory is by
      // using a publisher
      // See https://github.com/ros-controls/ros2_controllers/issues/12 for enabling action interface progress
      RCLCPP_INFO(LOGGER, "Sending the trajectory for execution");
      moveit_msgs::msg::RobotTrajectory robot_trajectory;
      plan_solution.trajectory->getRobotTrajectoryMsg(robot_trajectory);
      // trajectory_publisher_->publish(robot_trajectory.joint_trajectory);
    } 
  }

private:
  rclcpp::Node::SharedPtr node_;
  // rclcpp::Publisher<moveit_msgs::msg::DisplayRobotState>::SharedPtr robot_state_publisher_;
  // rclcpp::Publisher<trajectory_msgs::msg::JointTrajectory>::SharedPtr trajectory_publisher_;
  moveit::planning_interface::MoveItCppPtr moveit_cpp_;
};

int main(int argc, char** argv)
{
  RCLCPP_INFO(LOGGER, "Initialize node");
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions node_options;
  // This enables loading undeclared parameters
  // best practice would be to declare parameters in the corresponding classes
  // and provide descriptions about expected use
  node_options.automatically_declare_parameters_from_overrides(true);
  rclcpp::Node::SharedPtr node = rclcpp::Node::make_shared("run_TB3_cpp", "", node_options);

  MoveItCppDemo demo(node);
  std::thread run_demo([&demo]() {
    // Let RViz initialize before running demo
    // TODO(henningkayser): use lifecycle events to launch node
    rclcpp::sleep_for(std::chrono::seconds(5));
    demo.run();
  });

  rclcpp::spin(node);
  run_demo.join();

  return 0;
}
