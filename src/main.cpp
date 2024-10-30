#include <Arduino.h>

int state = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.write("Choose condition of a lamp (0, 1): \n");
  while (Serial.available() == 0)
  {
    /* code */
  }
  

  int state = Serial.parseInt();  //read until timeout
  Serial.println(state);

  digitalWrite(LED_BUILTIN, state);

  // if (state == 1)
  // {
  //   pinMode(LED_BUILTIN, HIGH);  
  // }
  
  // if (state == 0)
  // {
  //   pinMode(LED_BUILTIN, LOW);  
  // }
}