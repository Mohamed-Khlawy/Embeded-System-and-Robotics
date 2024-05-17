int Motion_Sensor_Pin = 8;

int Red_Led = 13;

int Motion_State_Current = LOW;

int Motion_State_Previous = LOW;

void setup() 
{
  Serial.begin(9600);

  pinMode(Red_Led, OUTPUT);
}

void loop() 
{
  Motion_State_Previous = Motion_State_Current;

  Motion_State_Current = digitalRead(Motion_Sensor_Pin);

  if (Motion_State_Previous == LOW && Motion_State_Current == HIGH)
  {
    Serial.println("Motion Detected!!");

    digitalWrite(Red_Led, HIGH);
  }

  else if (Motion_State_Previous == HIGH && Motion_State_Current == LOW)
  {
    Serial.println("Motion Stopped!!");

    digitalWrite(Red_Led, LOW);
  }
}