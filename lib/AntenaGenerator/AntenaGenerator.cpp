#include "AntenaGenerator.h"

// Ініціалізація статичних змінних
SoftwareSerial* AntenaGenerator::mySerial = nullptr;
LoRa_E32* AntenaGenerator::e32ttl100 = nullptr;

// Метод для отримання вказівника на SoftwareSerial
SoftwareSerial* AntenaGenerator::getSoftSerial() {
    if (mySerial == nullptr) { // Перевірка на null, щоб уникнути повторної ініціалізації
        mySerial = new SoftwareSerial(RX_PIN, TX_PIN); // Створюємо об'єкт на купі
    }
    return mySerial; // Повертаємо вказівник на об'єкт
}

// Метод для отримання вказівника на LoRa_E32
LoRa_E32* AntenaGenerator::getLora() {
    if (e32ttl100 == nullptr) { // Перевірка на null
        e32ttl100 = new LoRa_E32(getSoftSerial(), AUX_PIN, M0_PIN, M1_PIN); // Створюємо об'єкт на купі
    }
    return e32ttl100; // Повертаємо вказівник на об'єкт
}
