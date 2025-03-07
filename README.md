# wemos-d1-r2-two-servo-program

2 Servo Control with Wemos D1 R2
This project demonstrates basic servo motor control using a Wemos D1 R2 microcontroller and the Arduino framework. The code controls two servos, representing the Lower Arm (LA) and Upper Arm (UA), by moving them through a sequence of predefined angles.

Features:
Uses the Servo.h library to control two servo motors.
Moves the servos through 0° → 90° → 180° → 90° in a loop with delays.
Designed for use with Wemos D1 R2 (ESP8266-based board).
Requirements:
Wemos D1 R2 (or any ESP8266 board with compatible pinout)
MG996R Servos (or similar)
Arduino IDE with ESP8266 board support
Usage:
Connect D4 to the lower arm servo and D5 to the upper arm servo.
Upload the code to the Wemos D1 R2 using the Arduino IDE.
Observe the servos cycling through the predefined movements.
This can be a basic foundation for more complex robotic arm control systems using computer vision or sensor inputs.
