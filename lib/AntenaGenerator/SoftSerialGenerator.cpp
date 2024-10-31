#include "SoftSerialGenerator.h"

// Ініціалізація статичних змінних
SoftwareSerial* SoftSerialGenerator::mySerial = nullptr;

// Метод для отримання вказівника на SoftwareSerial
SoftwareSerial* SoftSerialGenerator::getSoftSerial() {
    if (mySerial == nullptr) { // Перевірка на null, щоб уникнути повторної ініціалізації
        mySerial = new SoftwareSerial(RX_PIN, TX_PIN); // Створюємо об'єкт на купі
    }
    return mySerial; // Повертаємо вказівник на об'єкт
}
