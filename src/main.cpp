#include <Arduino.h>
#include "ThrusterController.h"
#include "IMU.h"

ThrusterController thrusters(3, 4, 5); // Example PWM pins
IMU imu;

void setup() {
  Serial.begin(115200);
  unsigned long start = millis();
  while (!Serial && (millis() - start) < 5000) {
    delay(100);
  }
  thrusters.begin();
  imu.begin();
}

void loop() {
  imu.update();
  // Placeholder for future control logic
  delay(10);
}
