#include "ThrusterController.h"

ThrusterController::ThrusterController(uint8_t leftPin, uint8_t rightPin)
    : _leftPin(leftPin), _rightPin(rightPin) {}

void ThrusterController::begin() {
    pinMode(_leftPin, OUTPUT);
    pinMode(_rightPin, OUTPUT);
    analogWrite(_leftPin, 0);
    analogWrite(_rightPin, 0);
}

void ThrusterController::writePWM(uint8_t pin, float value) {
    // constrain value to [-1,1]
    if (value > 1.0f) value = 1.0f;
    if (value < -1.0f) value = -1.0f;
    // map from [-1,1] to [0,255]
    uint8_t duty = (uint8_t)((value + 1.0f) * 127.5f);
    analogWrite(pin, duty);
}

void ThrusterController::setThrust(float left, float right) {
    writePWM(_leftPin, left);
    writePWM(_rightPin, right);
}

void ThrusterController::setThrustYaw(float thrust, float yaw) {
    float left = thrust + yaw;
    float right = thrust - yaw;
    setThrust(left, right);
}
