// C++ code
//
#define led1 13
#define led2 12
#define zumbador 6
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(zumbador, OUTPUT);
}

void loop()
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  analogWrite(zumbador,255);
  delay(400);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  analogWrite(zumbador,125);
  delay(400);
}
