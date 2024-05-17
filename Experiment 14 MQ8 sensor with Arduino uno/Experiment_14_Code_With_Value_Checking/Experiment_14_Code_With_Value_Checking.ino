int AOUT_Pin = A0;

int DOUT_Pin = 8;

int Red_Led = 13;

int limit = 0;

int value = 0;

void setup() 
{
  Serial.begin(115200);

  pinMode(Red_Led, OUTPUT);
}

void loop() 
{
  value = analogRead(AOUT_Pin);

  limit = digitalRead(DOUT_Pin);

  Serial.print("Hydrogen value = ");

  Serial.println(value);

  Serial.print("Limit = ");

  Serial.println(limit);

  delay(100);

  if (limit == HIGH)
  {
    digitalWrite(Red_Led, HIGH);
  }

  else 
  {
    digitalWrite(Red_Led, LOW);
  }
}