void setup() {
  pinMode(7, OUTPUT);

}

void loop() {
  int val = 1000;
  digitalWrite(7, HIGH);
  delayMicroseconds(val);
  digitalWrite(7, LOW);
  delayMicroseconds(val);
}
