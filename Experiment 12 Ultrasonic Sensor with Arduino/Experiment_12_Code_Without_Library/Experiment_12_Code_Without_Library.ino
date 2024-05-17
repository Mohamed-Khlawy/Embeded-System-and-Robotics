int Trig_Pin = 13;

int Echo_Pin = 12;

long duration = 0;

int distance = 0;

void setup() 
{
  Serial.begin(9600);

  pinMode(Trig_Pin, OUTPUT);
}

void loop() 
{
  digitalWrite(Trig_Pin, LOW);

  delayMicroseconds(2);

  digitalWrite(Trig_Pin, HIGH);

  delayMicroseconds(10);

  digitalWrite(Trig_Pin, LOW);


  duration = pulseIn(Echo_Pin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance = ");

  Serial.println(distance);
}
