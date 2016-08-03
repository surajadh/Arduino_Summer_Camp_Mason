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
}

//This runs until Arduino is reset or powered off
void loop() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);
  delay(2000);
  digitalWrite(c, HIGH);
  digitalWrite(e, LOW);
  delay(2000);
  digitalWrite(c, LOW);
  digitalWrite(e, HIGH);
}
