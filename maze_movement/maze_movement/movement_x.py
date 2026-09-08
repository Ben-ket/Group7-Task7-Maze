import math
import rclpy
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from geometry_msgs.msg import Twist 
from nav_msgs.msg import Odometry
from maze_msgs.action import MoveX
from rcl_interfaces.msg import SetParametersResult

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
        self.current_yaw = None
        # new part
        # PID variables
        self.declare_parameter('linear.kp', 8)
        self.declare_parameter('linear.ki', 0.1)
        self.declare_parameter('linear.kd', 0.6)

        self.kp = self.get_parameter('linear.kp').value
        self.ki = self.get_parameter('linear.ki').value
        self.kd = self.get_parameter('linear.kd').value

        self.declare_parameter('heading.kp', 5)
        self.declare_parameter('heading.ki', 0.05)
        self.declare_parameter('heading.kd', 0.3)

        self.heading_kp = self.get_parameter('heading.kp').value
        self.heading_ki = self.get_parameter('heading.ki').value
        self.heading_kd = self.get_parameter('heading.kd').value

        self.add_on_set_parameters_callback(self.param_callback)

        self.max_speed = 1
        self.max_signal = 100
        self.min_signal = -100

         # PID compute method
    def pid_compute(self,error,prev_error,integral,dt):
         # zero crossing reset
         if error * prev_error < 0:
            integral = 0.0

         P=self.kp*error
         #conditional integration
         new_integral = integral + error*dt
         new_integral=max(-0.1,min(0.1,new_integral))
         I=self.ki*new_integral
         derivative=(error-prev_error)/dt if dt>0 else 0.0
         D=self.kd*derivative 
         signal=P+I+D 

         if (self.min_signal < signal < self.max_signal
            or (signal >= self.max_signal and error < 0)
            or (signal <= self.min_signal and error > 0)):
            integral = new_integral

         return signal,integral
         # end of new part

    def param_callback(self, params):
        for p in params:
            if p.name == 'linear.kp':
                self.kp = p.value
            elif p.name == 'linear.ki':
                self.ki = p.value
            elif p.name == 'linear.kd':
                self.kd = p.value
            elif p.name == 'heading.kp':
                self.heading_kp = p.value
            elif p.name == 'heading.ki':
                self.heading_ki = p.value
            elif p.name == 'heading.kd':
                self.heading_kd = p.value
        return SetParametersResult(successful=True)

    def odom_callback(self, msg:Odometry):
        self.current_x = msg.pose.pose.position.x
        self.current_y = msg.pose.pose.position.y
        q = msg.pose.pose.orientation
        siny_cosp = 2.0 * (q.w * q.z + q.x * q.y)
        cosy_cosp = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)
    
        self.current_yaw = math.atan2(siny_cosp, cosy_cosp)
        
    
    @staticmethod
    def normalize_angle(angle: float) -> float:
        return math.atan2(math.sin(angle), math.cos(angle))
    
    def execute_callback(self, goal_handle):

        while self.current_x is None or self.current_y is None:
            self.get_logger().info('Waiting for /odom...')
            rclpy.spin_once(self, timeout_sec=0.1)

        start_x = self.current_x
        start_y = self.current_y
        start_yaw = self.current_yaw
        target_dist = abs(goal_handle.request.distance)
        speed = goal_handle.request.speed if goal_handle.request.speed != 0 else 0.2

        if goal_handle.request.distance < 0:
            speed = -abs(speed)
        max_speed=min(abs(speed),self.max_speed)
    
        # new part
        integral=0.0
        prev_error=0.0
        # end of new part

        rate = self.create_rate(20)
        dt = 0.05
        integral_heading = 0.0
        prev_error_heading = 0.0
        MAX_ANGULAR_SPEED = 1.0

        while rclpy.ok():

            twist=Twist()

            dist_traveled = math.hypot(self.current_x - start_x, self.current_y - start_y)
            error_heading = self.normalize_angle(start_yaw - self.current_yaw )
            #error haeding calculations 
            integral_heading += error_heading * dt
            integral_heading = max(min(integral_heading, 0.1), -0.1)
            derivative_heading = (error_heading - prev_error_heading) / dt
            twist.angular.z = (self.heading_kp * error_heading) + (self.heading_ki *integral_heading) + (self.heading_kd * derivative_heading)
            twist.angular.z = max(min(twist.angular.z, MAX_ANGULAR_SPEED), -MAX_ANGULAR_SPEED)
            prev_error_heading = error_heading
            error=target_dist-dist_traveled
            if error<=0.01:
             break
            if dist_traveled >= target_dist:
                break
            # new part

            signal,integral=self.pid_compute(error,prev_error,integral,dt)
            prev_error=error
            signal=max(-max_speed,min(max_speed,signal))
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