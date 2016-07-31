//This only runs once
void setup() {
  //Set pin 2 as output
  pinMode(13, OUTPUT);
}

//This runs until Arduino is reset or powered off
void loop() {
  digitalWrite(13, HIGH);
  //Delay half second
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}
