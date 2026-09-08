import math
import rclpy
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from maze_msgs.action import MoveX


class MovementXServer(Node):

    def __init__(self):
        super().__init__('movement_x_server')
        self._cb_group = ReentrantCallbackGroup()

        self._action_server = ActionServer(
            self,
            MoveX,
            'move_robot_x',
            self.execute_callback,
            callback_group=self._cb_group,
        )



        self._cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self._odom_sub = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10,
            callback_group=self._cb_group,
        )

        self.current_x = None
        self.current_y = None
        # new part
        # PID variables
        self.kp=3.5
        self.ki=0.5
        self.kd=0.50

        self.max_speed=0.5
        self.max_signal = 100
        self.min_signal = -100

         # PID compute method
    def pid_compute(self,error,prev_error,integral,dt):
         P=self.kp*error
         integral +=error*dt
         integral=max(-0.1,min(0.1,integral))
         I=self.ki*integral
         derivative=(error-prev_error)/dt if dt>0 else 0.0
         D=self.kd*derivative 
         signal=P+I+D 
         # zero crossing reset
         if error * prev_error < 0:
            integral = 0.0

        #conditional integration  

         new_integral = integral + error * dt

         predicted_signal = (
            self.Kp * error +
            self.Ki * new_integral +
            self.Kd * derivative
        )

         if (self.output_min < predicted_signal < self.output_max
            or (predicted_signal >= self.max_signal and error < 0)
            or (predicted_signal <= self.min_signal and error > 0)):
            integral = new_integral  


         return signal,integral
        
         # end of new part



    def odom_callback(self, msg):
        self.current_x = msg.pose.pose.position.x
        self.current_y = msg.pose.pose.position.y

    def execute_callback(self, goal_handle):


        while self.current_x is None or self.current_y is None:
            self.get_logger().info('Waiting for /odom...')
            rclpy.spin_once(self, timeout_sec=0.1)

        start_x = self.current_x
        start_y = self.current_y
        target_dist = abs(goal_handle.request.distance)
        speed = goal_handle.request.speed if goal_handle.request.speed != 0 else 0.2

        if goal_handle.request.distance < 0:
            speed = -abs(speed)
        max_speed=min(abs(speed),self.max_speed)
    
        # new part
        integral=0.0
        prev_error=0.0
        dt=0.02
        # end of new part
                

        rate = self.create_rate(20)
        
       
        

        while rclpy.ok():
        
            dist_traveled = math.hypot(self.current_x - start_x, self.current_y - start_y)
            error=target_dist-dist_traveled
            if error<=0.01:
             break
            if dist_traveled >= target_dist:
                break
            # new part

            signal,integral=self.pid_compute(error,prev_error,integral,dt)
            prev_error=error
            signal=max(-max_speed,min(max_speed,signal))
            twist=Twist()
            twist.linear.x=float(signal)
            # end of new part
            self._cmd_pub.publish(twist)
            rate.sleep()



        stop_twist = Twist()
        self._cmd_pub.publish(stop_twist)

        goal_handle.succeed()
        result = MoveX.Result()
        result.success = True
        return result
    


def main():
    rclpy.init()
    node = MovementXServer()
    executor = MultiThreadedExecutor()
    executor.add_node(node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()