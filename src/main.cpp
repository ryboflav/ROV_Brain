#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  // Wait for Serial to be ready but do not block forever (max 5 seconds)
  unsigned long start = millis();
  while (!Serial && (millis() - start) < 5000) {
    delay(100);
  }

  const int pwmPin = 9; // Choose a PWM-capable pin

  pinMode(pwmPin, OUTPUT);
  analogWrite(pwmPin, 0); // Initialize with 0 duty cycle

}

void loop() {
  // put your main code here, to run repeatedly:
}

