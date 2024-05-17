int Sensor_Power = 7;

int Sensor_Pin = A0;

void setup() 
{
  pinMode(Sensor_Power, OUTPUT);

  digitalWrite(Sensor_Power, LOW);

  Serial.begin(9600);
}

int Read_Sensor()
{
  digitalWrite(Sensor_Power, HIGH);

  delay(10);

  int value = analogRead(Sensor_Pin);

  digitalWrite(Sensor_Power, LOW);

  return value;
}

void loop() 
{
  Serial.print("Analog Output = ");
  Serial.println(Read_Sensor());

  delay(1000);
}