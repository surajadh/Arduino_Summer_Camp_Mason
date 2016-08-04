int valueOfSwitch = 0;
int switchPin = 2;
int led1Pin = 3;
int led2Pin = 4;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}

void loop() {
  if(valueOfSwitch) {
    blinkLed1();
    turnOnLed2();  
  }
  else {
    turnOffLed1();
    turnOffLed2();
  }
}

void blinkLed1() {
  digitalWrite(led1Pin, HIGH);
  delay(500);
  digitalWrite(led1Pin, LOW);
  delay(500);
}

void turnOnLed2() {
  digitalWrite(led2Pin, HIGH); 
}

void turnOffLed1() {
  digitalWrite(led1Pin, LOW);
}

void turnOffLed2() {
  digitalWrite(led2Pin, LOW);
}

