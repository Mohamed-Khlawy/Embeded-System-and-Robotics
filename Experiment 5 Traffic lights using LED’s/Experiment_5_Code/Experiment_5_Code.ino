int Red = 13;
int Yellow = 12;
int Green = 11;

int Red_Delay = 4000;
int Yellow_Delay = 2000;
int Green_Delay = 4000;

void green_light()
{
  digitalWrite(Green, HIGH);
  digitalWrite(Yellow, LOW);
  digitalWrite(Red, LOW);
}

void yellow_light()
{
  digitalWrite(Green, LOW);
  digitalWrite(Yellow, HIGH);
  digitalWrite(Red, LOW);
}

void red_light()
{
  digitalWrite(Green, LOW);
  digitalWrite(Yellow, LOW);
  digitalWrite(Red, HIGH);
}

void setup()
{
  pinMode(Red, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Green, OUTPUT);
}

void loop()
{
  green_light();
  delay(Green_Delay);

  yellow_light();
  delay(Yellow_Delay);

  red_light();
  delay(Red_Delay);
}