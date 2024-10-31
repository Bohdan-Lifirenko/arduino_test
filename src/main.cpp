#include <Arduino.h>
#include "SoftwareSerial.h"
#include "LoRa_E32.h"
#include "AntenaGenerator.h"

// Глобальні змінні для використання в основному циклі
SoftwareSerial* mySerial = nullptr;
LoRa_E32* e32 = nullptr;

void setup() {
  // Отримуємо вказівник на SoftwareSerial
  mySerial = AntenaGenerator::getSoftSerial();
  
  // Отримуємо вказівник на LoRa_E32
  e32 = AntenaGenerator::getLora();

  // Ініціалізуємо серійний порт
  Serial.begin(9600);
  
  // Ініціалізація модуля E32
  bool success = e32->begin();
  if (!success) {
    Serial.println("Помилка ініціалізації E32");
    delay(10000);
    return;
  }

    // Отримання конфігурації антени
  ResponseStructContainer configContainer = e32->getConfiguration();
  if (configContainer.status.code != 1) {
    Serial.println("Помилка отримання конфігурації: " + String(configContainer.status.getResponseDescription()));
    delay(10000);
    return;
  }
}

void loop() {
  // Ваш код тут
}
