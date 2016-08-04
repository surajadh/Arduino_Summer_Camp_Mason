//This only runs once
boolean initial = true;

void setup() {
  //Set pin 2 as output
  pinMode(13, OUTPUT);
}

//This runs until Arduino is reset or powered off
void loop(){
if(initial) {
  for (int i=0; i <= 12; i++){
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
  }
  initial = false;
}
  //Delay half second
  
}
