#include "NewPing.h"

int Trig_Pin = 13;

int Echo_Pin = 12;

int Max_Distance = 400;

NewPing sonar(Trig_Pin, Echo_Pin, Max_Distance);

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  Serial.print("Distance = ");
  Serial.print(sonar.ping_cm());
  Serial.println(" Cm");

  delay(500);
}