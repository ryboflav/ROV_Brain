# Project Overview

This project hosts the firmware for an underwater ROV built around an ESP32-C3.

## Hardware
- **Horizontal Thrusters**: Two motors provide forward and reverse thrust and can be driven differentially for yaw control.
- **Vertical Thruster**: Mounted at the rear to control pitch and assist with depth changes.
- **IMU**: Orientation information is gathered from an MPU6050 sensor.

The repository currently contains only a starting scaffold. Future updates will implement motion control and stabilization logic.
