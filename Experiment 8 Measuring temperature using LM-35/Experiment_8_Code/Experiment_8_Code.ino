# define Sensor_Pin A0
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int reading = analogRead(Sensor_Pin);

  float voltage = reading * (5.0 / 1024.0);

  float temp_C = voltage * 100;

  Serial.print("Temperature: ");
  Serial.print(temp_C);
  Serial.print("\xC2\xB0");
  Serial.print("C   |   ");

  float temp_F = (temp_C * 9 / 5) + 32;

  Serial.print(temp_F);
  Serial.print("\xC2\xB0");
  Serial.println("F");

  delay(1000);
}