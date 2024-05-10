int Buzzer = 13;

void setup()
{
  pinMode(Buzzer, OUTPUT);
}

void loop()
{
  unsigned char i;

  while(1)
  {
    // Frequency 1
    for (i = 0; i < 80; i++)
    {
      digitalWrite(Buzzer, HIGH);

      delay(1);

      digitalWrite(Buzzer, LOW);

      delay(1);
    }

    // Frequency 2
    for (i = 0; i < 100; i++)
    {
      digitalWrite(Buzzer, HIGH);

      delay(5);

      digitalWrite(Buzzer, LOW);

      delay(5);
    }
  }
}