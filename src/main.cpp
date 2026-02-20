#include <Arduino.h>

#define ldrPin A3

void setup() {
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
    Serial.println("LDR Test");
}

void loop() {
    int ldrRaw = analogRead(ldrPin);
    int lightPercent = map(ldrRaw, 0, 1023, 0, 100);

    Serial.print("Light Raw: ");
    Serial.println(ldrRaw);
    Serial.print(" | Light: ");
    Serial.println(lightPercent);
    Serial.println("%");

    delay(500);
}