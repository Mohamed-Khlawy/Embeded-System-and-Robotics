int Sensor_Pin = A0;

int Sensor_Data = 0;

void setup() 
{
  Serial.begin(9600);

  pinMode(Sensor_Pin, OUTPUT);
}

void loop() 
{
  Sensor_Data = analogRead(Sensor_Pin);

  Serial.print("Sensor Data = ");

  Serial.println(Sensor_Data);

  delay(1000);
}