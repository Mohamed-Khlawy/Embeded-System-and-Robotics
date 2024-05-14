#include <dht.h>

dht DHT;

int DHT11_Pin = 13;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
 int check = DHT.read11(DHT11_Pin);

 Serial.print("Temperature = ");
 Serial.println(DHT.temperature);

 Serial.print("Humidity = ");
 Serial.println(DHT.humidity);

 delay(1000); 
}