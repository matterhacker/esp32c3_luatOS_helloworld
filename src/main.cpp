#include <Arduino.h>

#define PIN_LED1 12 // D4
#define PIN_LED2 13 // D5

void setup() {
  Serial.begin(115200);
  Serial.println("Hello ESP32C3!!");
  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
}

void loop() {
  // LEDs D4 and D5 are active high
  digitalWrite(PIN_LED1, HIGH);
  digitalWrite(PIN_LED2, LOW);
  delay(500);
  digitalWrite(PIN_LED1, LOW);
  digitalWrite(PIN_LED2, HIGH);
  delay(500);
  Serial.print(".");
}

