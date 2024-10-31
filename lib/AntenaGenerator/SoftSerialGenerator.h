#ifndef SOFTSERIALGENERATOR_H
#define SOFTSERIALGENERATOR_H

#include "SoftwareSerial.h"

// Піни для підключення
const int RX_PIN = 2;
const int TX_PIN = 3;


class SoftSerialGenerator {
private:
    static SoftwareSerial* mySerial; // Зберігаємо вказівник на SoftwareSerial

public:
    // Метод для отримання вказівника на SoftwareSerial
    static SoftwareSerial* getSoftSerial();
};

#endif // ANTENAGENERATOR_H
