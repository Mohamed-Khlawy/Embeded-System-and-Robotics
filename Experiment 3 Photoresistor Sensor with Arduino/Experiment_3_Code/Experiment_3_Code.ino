int Photo_Pin = A0;
int light = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  light = analogRead(Photo_Pin);

  Serial.print("Photoresistor Read = ");
  Serial.println(light);

  delay(1000);
}