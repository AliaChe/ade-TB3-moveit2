#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include <pthread.h>
#include <memory>
#include "action_description/action/follow_joint_trajectory.hpp"
#include <geometry_msgs/msg/twist.hpp>
// #include <std_msgs/float64.hpp>
 

class Controller : public rclcpp::Node
{
  
  public:
  float left_wheel_vel;
  float right_wheel_vel;
  using FollowJointTrajectory = action_description::action::FollowJointTrajectory;
  using GoalHandleFollowJointTrajectory = rclcpp_action::ServerGoalHandle<FollowJointTrajectory>;

  explicit Controller(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
  : Node("action_controller_node", options)
  {
    using namespace std::placeholders;

    this->action_server_ = rclcpp_action::create_server<FollowJointTrajectory>(
      this->get_node_base_interface(),
      this->get_node_clock_interface(),
      this->get_node_logging_interface(),
      this->get_node_waitables_interface(),
      "action_controller",
      std::bind(&Controller::handle_goal, this, _1, _2),
      std::bind(&Controller::handle_cancel, this, _1),
      std::bind(&Controller::handle_accepted, this, _1));

      publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
  }

private:
  rclcpp_action::Server<FollowJointTrajectory>::SharedPtr action_server_;
  //trajectory_msgs::JointTrajectory toExecute;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  
  
  rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid,std::shared_ptr<const FollowJointTrajectory::Goal> goal)
  {
    // toExecute=goal->points; 
    RCLCPP_INFO(this->get_logger(), "Received trajectory request with %d points",goal->trajectory.points.size());
    (void)uuid;
    //I can reject some goals: if (goal->order > 9000) {return rclcpp_action::GoalResponse::REJECT; }
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleFollowJointTrajectory> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;        
  }

  void execute(const std::shared_ptr<GoalHandleFollowJointTrajectory> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Executing goal");
    rclcpp::Rate loop_rate(1);
    const auto goal = goal_handle->get_goal();   
    auto feedback = std::make_shared<FollowJointTrajectory::Feedback>();
    auto & desired = feedback->desired;
    auto result = std::make_shared<FollowJointTrajectory::Result>();

    for (uint i = 0; (i < 5) && rclcpp::ok(); ++i) {
      // Check if there is a cancel request
      if (goal_handle->is_canceling()) {
        result->error_code = -1;
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "Goal Canceled");
        return;
      }
      // publish trajectory
      
     // left_wheel_vel=goal->trajectory.points[i].velocities[0];
     // right_wheel_vel=goal->trajectory.points[i].velocities[1];
      auto message= geometry_msgs::msg::Twist();
      message.linear.x=1.0;
      message.angular.z=0.0;
      RCLCPP_INFO(this->get_logger(), "Publishing velocity");
      publisher_->publish(message);
      /*//define feedbacks
      desired.velocities.push_back(left_wheel_vel);
      desired.velocities.push_back(right_wheel_vel);
      // Publish feedback
      goal_handle->publish_feedback(feedback);
      RCLCPP_INFO(this->get_logger(), "Publish Feedback"); */

      loop_rate.sleep();
    }

    // Check if goal is done
    if (rclcpp::ok()) {
      result->error_code = 1;
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "Goal Succeeded");
    }


  }

  void handle_accepted(const std::shared_ptr<GoalHandleFollowJointTrajectory> goal_handle)
  {
   using namespace std::placeholders;
    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{std::bind(&Controller::execute, this, _1), goal_handle}.detach(); 
  }



}; 


int main(int argc, char** argv)
{
	rclcpp::init(argc, argv);
	//rclcpp::NodeHandle node;//("~");
	// Controller control(node);
  rclcpp::spin(std::make_shared<Controller>());
  rclcpp::shutdown();
  return 0;

}