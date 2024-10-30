#include <Arduino.h>

int state = 0;

void setup() {
  pinMode(LED_BUILTIN, HIGH);
  Serial.begin(9600);

  state = Serial.available();
  Serial.println(state);
}

void loop() {

    if (state != Serial.available())
    {
      state = Serial.available();
      Serial.println(state);
    }

    if (state == 10)
    {
      String str = Serial.readString();
      Serial.println(str);
    }
}