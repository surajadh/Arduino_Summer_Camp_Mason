#include "SevSeg.h"

int switchPin = 13;
int switchPinInputValue = LOW;
int previousValue = LOW;
boolean stopped = false;
unsigned long pressedTime = 0;

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

  switchPinInputValue = digitalRead(switchPin);

  if(switchPinInputValue == HIGH && previousValue == HIGH ) {
    if(millis() - pressedTime > 3000) {
      timeInSeconds = 0;
    }
  }

  if(switchPinInputValue == HIGH && switchPinInputValue != previousValue) {
    stopped = !stopped;
    pressedTime = millis();
  }

  previousValue = switchPinInputValue;
  
  if(!stopped) {
    if(millis() - oldMillis > 1000) {
      timeInSeconds = timeInSeconds + 1;
      oldMillis = millis();
    }
  }
  
  sevseg.setNumber(timeInSeconds, 0);
  sevseg.refreshDisplay(); // Must run repeatedly
}
