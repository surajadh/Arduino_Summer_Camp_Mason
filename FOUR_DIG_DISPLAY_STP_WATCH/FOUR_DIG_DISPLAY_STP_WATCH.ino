#include "SevSeg.h"
SevSeg sevseg;

int count = 0;
int switchPin = 14;
int lastButtonState = HIGH;
long lastDebounceTime = 0;
long debounceDelay = 50;
int buttonState;
boolean stopwatchStopped = false;

void setup() {

  digitalWrite(switchPin, INPUT);
  
  byte numDigits = 4;
  byte digitPins[] = {2, 3, 4, 5};
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
  
  // USING SMA420564
  // Got more pin info from
  // http://haneefputtur.com/7-segment-4-digit-led-display-sma420564-using-arduino.html
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins);
  sevseg.setBrightness(10);
  
}

void loop() {
  static unsigned long timer = millis(); //10000
  static int seconds = 0;
  
  int reading = digitalRead(switchPin);
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if((millis() - lastDebounceTime) > debounceDelay) {

    if(reading != buttonState) {
      buttonState = reading;
      
      if (buttonState == HIGH) {
        stopwatchStopped = !stopwatchStopped;
        timer = millis();
      }
    }
  }

  lastButtonState = reading;
  
  if ((millis() - timer >= 1000) && !stopwatchStopped) {
    seconds++; // 1000 milliSeconds is equal to 1 second
    timer += 1000; 
    if (seconds == 10000) { // Reset to 0 after counting for 1000 seconds.
      seconds = 0;
    }
    sevseg.setNumber(seconds, 0);
  }

  sevseg.refreshDisplay(); // Must run repeatedly
}
