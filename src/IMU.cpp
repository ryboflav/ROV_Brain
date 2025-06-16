#include "IMU.h"

IMU::IMU() {}

void IMU::begin() {
    Wire.begin();
    mpu.initialize();
}

void IMU::update() {
    int16_t ax, ay, az;
    int16_t gx, gy, gz;
    mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
    // TODO: compute orientation angles
    pitch = 0;
    roll = 0;
    yaw = 0;
}

float IMU::getPitch() const { return pitch; }
float IMU::getRoll() const { return roll; }
float IMU::getYaw() const { return yaw; }
