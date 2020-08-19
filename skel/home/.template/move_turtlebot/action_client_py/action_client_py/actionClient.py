import rclpy
#import tf2
from rclpy.action import ActionClient
from rclpy.node import Node
from rclpy.duration import Duration
from action_description.action import MultiDofFollowJointTrajectory
import std_msgs.msg
from geometry_msgs.msg import Transform, Quaternion, Point, Twist
from trajectory_msgs.msg import MultiDOFJointTrajectory, MultiDOFJointTrajectoryPoint

class Client(Node):
    def __init__(self):
        super().__init__('action_client_node')
        #self.node_name='action_client_node'
        #node = rclpy.create_node(self.node_name)
        self._action_client = ActionClient(self,MultiDofFollowJointTrajectory, 'action_controller')
        

    def generate_trajectory(self):
        traj_to_execute=MultiDOFJointTrajectory()
        traj_header = std_msgs.msg.Header()
        traj_velocities = Twist()
        traj_accelerations = Twist()
        traj_to_execute.joint_names=["virtual_joint"]
        for i in range(0,5):
            traj_header.stamp = self.get_clock().now().to_msg() #rclpy.time.Time().msg()
            traj_to_execute.header =traj_header
            #traj_quaternion = tf2.transformations.quaternion_from_euler(roll,pitch,yaw)
            traj_quaternion=[0.0,0.0,0.0,0.0]
            traj_transforms = Transform()
            traj_transforms.translation.x=1.0*i
            traj_transforms.translation.y=2.0*i
            traj_transforms.translation.z=3.0*i
            traj_transforms.rotation=Quaternion()
            traj_transforms.rotation.x=traj_quaternion[0]
            traj_transforms.rotation.y=traj_quaternion[1]
            traj_transforms.rotation.z=traj_quaternion[2]
            traj_transforms.rotation.w=traj_quaternion[3]
            point_i = MultiDOFJointTrajectoryPoint()
            point_i.transforms.append(traj_transforms)
            point_i.velocities.append(traj_velocities)
            point_i.accelerations.append(traj_accelerations)
            duration_i=Duration(seconds=1.0).to_msg()
            point_i.time_from_start= duration_i    # self.get_clock().now().to_msg()+Duration(seconds=1.0)
            traj_to_execute.points.append(point_i)  
        return traj_to_execute


    

    def send_goal(self):
        goal_msg = MultiDofFollowJointTrajectory.Goal()
        traj_to_execute=self.generate_trajectory()
        goal_msg.trajectory = traj_to_execute   #trajectory_msgs/MultiDOFJointTrajectory

        self._action_client.wait_for_server()

        self._action_client.send_goal_async(goal_msg)




def main(args=None):
    print('Hi from action_client_py.')
    rclpy.init(args=args)
    action_client = Client()
    action_client.send_goal()
    rclpy.spin(action_client)

if __name__ == '__main__':
    main()
