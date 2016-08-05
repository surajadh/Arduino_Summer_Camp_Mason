#include "SevSeg.h"

SevSeg sevseg;
unsigned long int timer = 0;
void setup() {  
  byte numDigits = 4;
  byte digitPins[] = {2, 3, 4, 5};
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
  
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins);
  sevseg.setBrightness(10);
  
}

void loop() {
  if(millis() - timer < 1000) {
    sevseg.setNumber(1111, 0);  
  }
  if(millis() - timer > 1000 && millis() - timer < 2000) {
    sevseg.setNumber(2222, 0);
  }
  if(millis() - timer > 2000 && millis() - timer < 3000) {
    sevseg.setNumber(3333, 0);
  }
  if(millis() - timer > 3000 && millis() - timer < 4000) {
    sevseg.setNumber(4444, 0);
  }
  if(millis() - timer > 4000 && millis() - timer < 5000) {
    sevseg.setNumber(5555, 0);
  }
  if(millis() - timer > 5000 && millis() - timer < 6000) {
    sevseg.setNumber(6666, 0);
  }
  if(millis() - timer > 6000 && millis() - timer < 7000) {
    sevseg.setNumber(7777, 0);
  }
  if(millis() - timer > 7000 && millis() - timer < 8000) {
    sevseg.setNumber(8888, 0);
  }
  if(millis() - timer > 8000 && millis() - timer < 9000) {
    sevseg.setNumber(9999, 0);
  }
  if(millis() - timer > 10000) {
    timer = millis();
  }
  sevseg.refreshDisplay(); // Must run repeatedly
}
