int Push_Button = 7;
int Red_Led = 13;
int Push_Button_Status = 0;

void setup()
{
  pinMode(Red_Led, OUTPUT);
}

void loop()
{
  Push_Button_Status = digitalRead(Push_Button);

  if(Push_Button_Status == HIGH) // Push Button Pressed
  {
    digitalWrite(Red_Led, HIGH);
  }

  else
  {
    digitalWrite(Red_Led, LOW);
  }
}