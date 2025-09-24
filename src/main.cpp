#include <Arduino.h>
#include <WiFi.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
    Serial.print("\nDefault ESP32 MAC Address: ");
    Serial.println(WiFi.macAddress());
}

void loop() {
  // put your main code here, to run repeatedly:

}

