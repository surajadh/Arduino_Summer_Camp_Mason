#include "SevSeg.h"

SevSeg sevseg;
unsigned long int oldMillis = 0;
int timeInSeconds = 0;
void setup() {  
  byte numDigits = 4;
  byte digitPins[] = {2, 3, 4, 5};
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
  
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins);
  sevseg.setBrightness(10);
}

void loop() {
  if(millis() - oldMillis > 1000) {
    timeInSeconds = timeInSeconds + 1;
    oldMillis = millis();
  }
  sevseg.setNumber(timeInSeconds, 0);
  sevseg.refreshDisplay(); // Must run repeatedly
}
