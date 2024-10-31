#ifndef ANTENAGENERATOR_H
#define ANTENAGENERATOR_H

#include "SoftwareSerial.h"
#include "LoRa_E32.h"

// Піни для підключення
const int RX_PIN = 10;
const int TX_PIN = 11;
const byte AUX_PIN = 6;
const byte M0_PIN = 7;
const byte M1_PIN = 8;

class AntenaGenerator {
private:
    static SoftwareSerial* mySerial; // Зберігаємо вказівник на SoftwareSerial
    static LoRa_E32* e32ttl100; // Зберігаємо вказівник на LoRa_E32

public:
    // Метод для отримання вказівника на SoftwareSerial
    static SoftwareSerial* getSoftSerial();

    // Метод для отримання вказівника на LoRa_E32
    static LoRa_E32* getLora();
};

#endif // ANTENAGENERATOR_H
