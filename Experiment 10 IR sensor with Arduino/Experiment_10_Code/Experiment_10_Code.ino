int IR_Sensor = 9;

int Red_Led = 13;

void setup()
{
  Serial.begin(115200);

  Serial.println("Serial Working...");

  pinMode(Red_Led, OUTPUT);
}

void loop() 
{
  int sensor_status = digitalRead(IR_Sensor);

  if (sensor_status == 1)
  {
    digitalWrite(Red_Led, LOW);

    Serial.println("Motion Detected!!");
  }

  else 
  {
    digitalWrite(Red_Led, HIGH);

    Serial.println("Motion Ended!!");
  }
}