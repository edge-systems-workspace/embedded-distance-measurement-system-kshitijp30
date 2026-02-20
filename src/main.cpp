#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author Kshitij Singh Verma
 * @date 20-02-2026
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
 */

nt trigPin = 9;
int echoPin = 10;

long duration;
long distance;


void setup() {
    void setup() {
        pinMode(trigPin, OUTPUT);
        pinMode(echoPin, INPUT);
        Serial.begin(9600);
    }


    void loop() {

        digitalWrite(trigPin, LOW);
        delayMicroseconds(2);

        digitalWrite(trigPin, HIGH);
        delayMicroseconds(10);

        digitalWrite(trigPin, LOW);

        duration = pulseIn(echoPin, HIGH);

        distance = (duration * 0.0343) / 2;

        Serial.print("Distance: ");
        Serial.print(distance);
        Serial.println(" cm");

        delay(500);
    }
