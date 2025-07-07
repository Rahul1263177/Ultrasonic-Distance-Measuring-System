# Ultrasonic-Distance-Measuring-System

Ultrasonic Distance Measuring System using Arduino UNO
This project involves the development of an Ultrasonic Distance Measuring System capable of accurately measuring the distance between the sensor and an obstacle. The system utilizes an HC-SR04 ultrasonic sensor to emit and receive sound waves for distance calculation, with the result displayed on a 16x2 LCD using an I2C interface.
Components Used:
Arduino UNO: Acts as the central controller that handles sensor data acquisition and processing.


Ultrasonic Sensor (HC-SR04): Measures the time taken for an ultrasonic pulse to hit an object and return (echo) to calculate the distance using the speed of sound.


LCD Display with I2C Module: Displays real-time distance readings in centimeters. The I2C module simplifies wiring by reducing it to just two data lines (SDA, SCL).


Breadboard & Jumper Wires: Used to make temporary and flexible electrical connections between components.


Power Supply (USB or Battery): Provides the necessary 5V power to the Arduino and connected modules.


Circuit Diagram:





Working Principle:
The HC-SR04 ultrasonic sensor sends out a sound wave at 40kHz through its trigger pin. When the wave hits an object, it reflects back and is detected by the echo pin. The Arduino measures the time interval between sending and receiving the signal and calculates the distance using the formula:
mathematica
CopyEdit
Distance (cm) = (Time × Speed of Sound) / 2
             = (Duration in microseconds × 0.0343) / 2

The calculated distance is then sent to the I2C LCD module for display.
Applications:
Obstacle detection and avoidance


Proximity sensing for robots


Industrial distance monitoring


Smart parking systems
