#include <Arduino.h>
#include <ThrusterController.h>

// Pins for the left and right thrusters
static const uint8_t LEFT_THRUSTER_PIN = 9;
static const uint8_t RIGHT_THRUSTER_PIN = 10;

// Create the thruster controller with the chosen pins
ThrusterController thrusters(LEFT_THRUSTER_PIN, RIGHT_THRUSTER_PIN);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  // Wait for Serial to be ready but do not block forever (max 5 seconds)
  unsigned long start = millis();
  while (!Serial && (millis() - start) < 5000) {
    delay(100);
  }

  thrusters.begin();

}

void loop() {
  // Example: rotate in place for one second, then stop for one second
  thrusters.setThrust(0.5f, -0.5f); // apply yaw
  delay(1000);
  thrusters.setThrust(0.0f, 0.0f);
  delay(1000);
}

