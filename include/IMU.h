#pragma once
#include <Arduino.h>
#include <Wire.h>
#include <MPU6050.h>

class IMU {
public:
    IMU();
    void begin();
    void update();
    float getPitch() const;
    float getRoll() const;
    float getYaw() const;
private:
    MPU6050 mpu;
    float pitch = 0;
    float roll = 0;
    float yaw = 0;
};
