int Photo_Pin = A0;
int Red_Led = 13;
int light = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(Red_Led, OUTPUT);  
  pinMode(Photo_Pin, INPUT);

}

void loop() 
{
  light = analogRead(Photo_Pin);

  if(light >= 100)
  {
    digitalWrite(Red_Led, HIGH);
  }

  else 
  {
    digitalWrite(Red_Led, LOW);
  }
  
  Serial.println(light);
}