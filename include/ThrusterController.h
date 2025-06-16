#pragma once
#include <Arduino.h>

class ThrusterController {
public:
    ThrusterController(uint8_t leftPin, uint8_t rightPin, uint8_t verticalPin);
    void begin();
    void setHorizontal(int16_t thrust);
    void setVertical(int16_t thrust);
private:
    uint8_t _leftPin;
    uint8_t _rightPin;
    uint8_t _verticalPin;
};
