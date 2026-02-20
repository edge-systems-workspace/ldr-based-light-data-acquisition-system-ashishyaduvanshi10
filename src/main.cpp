/**
 * @file LDR_Light_Monitor.ino
 * @author Ashish Kumar Yadav
 * @date 2026-02-20
 * @version 1.0
 *
 * @brief Reads light intensity using an LDR sensor.
 *
 * @details
 * This program reads the analog value from an LDR (Light Dependent Resistor)
 * connected to analog pin A3. The raw analog value (0–1023) is mapped
 * to a percentage value (0–100%) representing light intensity.
 *
 * Connections:
 * - LDR voltage divider output → Analog Pin A3
 *
 * @note
 * LDR must be connected using a proper voltage divider circuit.
 *
 * @warning
 * Incorrect resistor values in the voltage divider may give unstable readings.
 */

#include <Arduino.h>

/** @brief Analog pin connected to LDR output */
#define LDR_PIN A3


/**
 * @brief Initializes serial communication and LDR pin.
 */
void setup()
{
    Serial.begin(9600);
    pinMode(LDR_PIN, INPUT);
    Serial.println("LDR Test");
}


/**
 * @brief Main loop function.
 *
 * @details
 * Reads raw analog value from LDR and converts it
 * to percentage of light intensity.
 */
void loop()
{
    int ldrRaw = analogRead(LDR_PIN);                   ///< Raw analog value (0–1023)
    int lightPercent = map(ldrRaw, 0, 1023, 0, 100);    ///< Convert to percentage

    Serial.print("Light Raw: ");
    Serial.println(ldrRaw);

    Serial.print(" | Light: ");
    Serial.print(lightPercent);
    Serial.println("%");

    delay(500);
}