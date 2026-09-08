class pid_controller:

    def __init__(self, Kp, Ki, Kd,output_min=-100,output_max=100,deadzone=0):

        self.Kp = Kp
        self.Ki = Ki
        self.Kd = Kd

        self.output_min = output_min
        self.output_max = output_max
        self.deadzone = deadzone

        self.integral = 0.0
        self.previous_error = 0.0

    def normalize_angle(self, angle):
        return (angle + 180) % 360 - 180

    def update(self, target, current, dt, angle_control=False):

        error = target - current

        # Angle Normalization
        if angle_control:
            error = self.normalize_angle(error)

        # Target Deadzone
        if abs(error) <= self.deadzone:
            self.integral = 0.0
            self.previous_error = error
            return 0.0

        # Zero-Crossing Reset
        if error * self.previous_error < 0:
            self.integral = 0.0

        # Derivative
        derivative = (error - self.previous_error) / dt

        # Conditional Integration
        new_integral = self.integral + error * dt

        predicted_output = (
            self.Kp * error +
            self.Ki * new_integral +
            self.Kd * derivative
        )

        if (self.output_min < predicted_output < self.output_max
            or (predicted_output >= self.output_max and error < 0)
            or (predicted_output <= self.output_min and error > 0)):
            self.integral = new_integral

        # PID Output
        output = (
            self.Kp * error +
            self.Ki * self.integral +
            self.Kd * derivative
        )

        # Control Output Clamping
        output = max(
            self.output_min,
            min(self.output_max, output)
        )

        self.previous_error = error

        return output


