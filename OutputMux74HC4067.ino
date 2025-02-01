#include <Arduino.h>
#include "MUX74HC4067.h"

MUX74HC4067 DigitalMux(D0, D1, D2, D3, D5); 
int pinCh = 16;  // Pilih channel 0 (bisa diganti sesuai kebutuhan)

void setup() {
  Serial.begin(115200);
  DigitalMux.signalPin(D6, OUTPUT, DIGITAL);
   
}

void loop() {
//  DigitalMux.setChannel(pinCh);  // Pastikan channel dipilih sebelum menyalakan LED

//  digitalWrite(D6, HIGH);  
  DigitalMux.write(pinCh, HIGH);  
  Serial.print("LED ON di channel = ");
  Serial.println(pinCh);
  delay(1000);  

//  digitalWrite(D6, LOW);
  DigitalMux.write(pinCh, LOW);    
  Serial.print("LED OFF di channel = ");
  Serial.println(pinCh);
  delay(1000);  
}
