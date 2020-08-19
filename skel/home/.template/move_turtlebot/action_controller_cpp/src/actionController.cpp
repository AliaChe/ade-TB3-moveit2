#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include <pthread.h>
#include <memory>
#include "action_description/action/multi_dof_follow_joint_trajectory.hpp"
#include <geometry_msgs/msg/twist.hpp>
#include <trajectory_msgs/msg/multi_dof_joint_trajectory.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>


class Controller : public rclcpp::Node
{
  
  public:
  using MultiDofFollowJointTrajectory = action_description::action::MultiDofFollowJointTrajectory;
  using GoalHandleMultiDofFollowJointTrajectory = rclcpp_action::ServerGoalHandle<MultiDofFollowJointTrajectory>;

  explicit Controller(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
  : Node("action_controller_node", options)
  {
    using namespace std::placeholders;

    this->action_server_ = rclcpp_action::create_server<MultiDofFollowJointTrajectory>(
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
  rclcpp_action::Server<MultiDofFollowJointTrajectory>::SharedPtr action_server_;
  //trajectory_msgs::JointTrajectory toExecute;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  trajectory_msgs::msg::MultiDOFJointTrajectory_<std::allocator<void> > toExecute;
  struct pos{double x; double y; double z; double roll; double pitch; double yaw; };
  pos desired;
  tf2::Quaternion q;
    
  rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid,std::shared_ptr<const MultiDofFollowJointTrajectory::Goal> goal)
  {
    // toExecute=goal->points; 
    RCLCPP_INFO(this->get_logger(), "Received trajectory request with %d points",goal->trajectory.points.size());
    (void)uuid;
    //I can reject some goals: if (goal->order > 9000) {return rclcpp_action::GoalResponse::REJECT; }
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleMultiDofFollowJointTrajectory> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;        
  }

  void execute(const std::shared_ptr<GoalHandleMultiDofFollowJointTrajectory> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Executing goal");
    rclcpp::Rate loop_rate(1);
    const auto toExecute= goal_handle->get_goal()->trajectory;   
    auto feedback = std::make_shared<MultiDofFollowJointTrajectory::Feedback>();
    auto & feedback_desired = feedback->desired;
    auto result = std::make_shared<MultiDofFollowJointTrajectory::Result>();

    if(toExecute.joint_names[0]=="virtual_joint" && toExecute.points.size()>0){
			for(uint k=0; k<toExecute.points.size(); k++){
      // Check if there is a cancel request
      if (goal_handle->is_canceling()) {
        result->error_code = -1;
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "Goal Canceled");
        return;
      }
      // publish trajectory

				/*
        geometry_msgs::Transform_<std::allocator<void> > point=toExecute.points[k].transforms[0];
        desired.x = point.translation.x;
  			desired.y = point.translation.y;
  			desired.z = point.translation.z;
        */
        desired.x=toExecute.points[k].transforms[0].translation.x; //I only have one joint -> [0]
        desired.y=toExecute.points[k].transforms[0].translation.y;
        desired.z=toExecute.points[k].transforms[0].translation.z;


				//Convert quaternion to Euler angles
  			//tf:quaternionMsgToTF(point.rotation, q);
        tf2::fromMsg(toExecute.points[k].transforms[0].rotation,q);
  			//tf::Matrix3x3(q).getRPY(desired.roll, desired.pitch, desired.yaw);
  			tf2::Matrix3x3(q).getRPY(desired.roll, desired.pitch, desired.yaw);
  			
      auto message= geometry_msgs::msg::Twist();
      message.linear.x= 0.5 * sqrt(pow(desired.x, 2) +pow(desired.y,2));
      message.angular.z=4.0 * atan2(desired.y,desired.x);
      RCLCPP_INFO(this->get_logger(), "Publishing velocity");
      publisher_->publish(message);
      //define feedbacks
      feedback_desired.transforms.push_back(toExecute.points[k].transforms[0]);
      // Publish feedback
      goal_handle->publish_feedback(feedback);
      RCLCPP_INFO(this->get_logger(), "Publish Feedback");

      loop_rate.sleep();
    }

    // Check if goal is done
    if (rclcpp::ok()) {
      result->error_code = 1;
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "Goal Succeeded");
    }
    }

  }

  void handle_accepted(const std::shared_ptr<GoalHandleMultiDofFollowJointTrajectory> goal_handle)
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