// C++ code
//
#define r 11
#define a 10
#define v 9
#define potenR A2
#define potenA A1
#define potenV A0
void setup()
{
  pinMode(r, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(v, OUTPUT);
  pinMode(potenR,INPUT);
  pinMode(potenA,INPUT);
  pinMode(potenV,INPUT);
}

void loop()
{
  analogRead(potenR);
  analogRead(potenA);
  analogRead(potenV);
  analogWrite(a,potenA);
  analogWrite(v,potenV);
  analogWrite(r,potenR);
}
