#include <Arduino.h>

#define ldrPin A3

void setup() {
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
    Serial.println("LDR Test");
}

void loop() {
}