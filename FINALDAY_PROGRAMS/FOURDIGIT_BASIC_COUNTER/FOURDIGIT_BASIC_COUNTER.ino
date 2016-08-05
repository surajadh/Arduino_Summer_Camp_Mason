#include "SevSeg.h"

SevSeg sevseg;
unsigned long int oldMillis = 0;
int count = 0;
int switchPin = 13;
int switchPinInputValue = LOW;
int previousValue = LOW;

void setup() {  
  byte numDigits = 4;
  byte digitPins[] = {2, 3, 4, 5};
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins);
  sevseg.setBrightness(10);
}

void loop() {
  switchPinInputValue = digitalRead(switchPin);
  if(switchPinInputValue == HIGH && switchPinInputValue != previousValue) {
    count = count + 1;
  }
  
  previousValue = switchPinInputValue;
  
  sevseg.setNumber(count, 0);
  sevseg.refreshDisplay(); // Must run repeatedly
}
