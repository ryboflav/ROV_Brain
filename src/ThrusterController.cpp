#include "ThrusterController.h"

ThrusterController::ThrusterController(uint8_t leftPin, uint8_t rightPin, uint8_t verticalPin)
    : _leftPin(leftPin), _rightPin(rightPin), _verticalPin(verticalPin) {}

void ThrusterController::begin() {
    pinMode(_leftPin, OUTPUT);
    pinMode(_rightPin, OUTPUT);
    pinMode(_verticalPin, OUTPUT);
    analogWrite(_leftPin, 0);
    analogWrite(_rightPin, 0);
    analogWrite(_verticalPin, 0);
}

void ThrusterController::setHorizontal(int16_t thrust) {
    int left = constrain(thrust, -255, 255);
    int right = constrain(thrust, -255, 255);
    analogWrite(_leftPin, abs(left));
    analogWrite(_rightPin, abs(right));
}

void ThrusterController::setVertical(int16_t thrust) {
    int value = constrain(thrust, -255, 255);
    analogWrite(_verticalPin, abs(value));
}
