#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  // Wait for Serial to be ready
  while (!Serial) {
    // Wait for Serial to be ready
    delay(100);
  } 

  const int pwmPin = 9; // Choose a PWM-capable pin

  pinMode(pwmPin, OUTPUT);
  analogWrite(pwmPin, 0); // Initialize with 0 duty cycle

}

void loop() {
  // put your main code here, to run repeatedly:
}

