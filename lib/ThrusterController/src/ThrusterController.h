#ifndef THRUSTER_CONTROLLER_H
#define THRUSTER_CONTROLLER_H

#include <Arduino.h>

class ThrusterController {
public:
    ThrusterController(uint8_t leftPin, uint8_t rightPin);

    void begin();

    // Set individual thrust values for left and right thrusters
    // each value should be in the range [-1.0, 1.0]
    void setThrust(float left, float right);

    // Convenience function for setting a forward thrust and yaw component
    // Values should be in the range [-1.0, 1.0]
    void setThrustYaw(float thrust, float yaw);

private:
    uint8_t _leftPin;
    uint8_t _rightPin;

    void writePWM(uint8_t pin, float value);
};

#endif // THRUSTER_CONTROLLER_H
