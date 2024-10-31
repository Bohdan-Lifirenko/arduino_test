#include <Arduino.h>
#include "SoftwareSerial.h"
#include <SoftSerialGenerator.h>

#define M_0 3
#define M_1 4

// Глобальні змінні для використання в основному циклі
SoftwareSerial* mySerial = nullptr;

void setup() {
  pinMode(M_0, OUTPUT);
  pinMode(M_1, OUTPUT);

  digitalWrite(M_0, LOW);
  digitalWrite(M_1, LOW);

  // Отримуємо вказівник на SoftwareSerial
  mySerial = SoftSerialGenerator::getSoftSerial();
  
  // Ініціалізуємо серійний порт
  Serial.begin(9600);
}

void loop() {
  Serial.println(mySerial->available());
}
