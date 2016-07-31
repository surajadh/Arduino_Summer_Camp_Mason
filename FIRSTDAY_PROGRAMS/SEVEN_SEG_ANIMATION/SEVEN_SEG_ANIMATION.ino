//This only runs once
byte a = 2;
byte b = 3;
byte c = 4;
byte d = 5;
byte e = 6;
byte f = 7;
byte g = 8;
byte dot = 9;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dot, OUTPUT);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);  
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);  
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);  
  digitalWrite(g, LOW);
  digitalWrite(dot, LOW);  
}

//This runs until Arduino is reset or powered off
void loop() {
  digitalWrite(f, LOW);
  digitalWrite(a, HIGH);
  delay(200);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  delay(200);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  delay(200);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  delay(200);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  delay(200);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  delay(200);
}
