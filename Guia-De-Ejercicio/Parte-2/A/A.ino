// C++ code
//
#define led 13
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  analogWrite(led,50);
  delay(500);
  analogWrite(led,100);
  delay(500);
  analogWrite(led,150);
  delay(500);
  analogWrite(led,200);
  delay(500);
  analogWrite(led,250);
  delay(500);
  analogWrite(led,0);
  delay(100);
}
