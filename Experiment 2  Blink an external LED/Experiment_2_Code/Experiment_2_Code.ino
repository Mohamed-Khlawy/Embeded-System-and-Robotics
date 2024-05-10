int Red_Led = 13;

void setup() {
  pinMode(Red_Led, OUTPUT);
}

void loop() {
  digitalWrite(Red_Led, HIGH);

  delay(500);

  digitalWrite(Red_Led, LOW);

  delay(500);
}