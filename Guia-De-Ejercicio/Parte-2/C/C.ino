// C++ code
//
#define r 10
#define a 9
#define v 11
void setup()
{
  pinMode(r, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(v, OUTPUT);
}

void loop()
{
  analogWrite(a,200);
  analogWrite(v,200);
  analogWrite(r,0);
  delay(5000);
  analogWrite(a,0);
  analogWrite(v,0);
  analogWrite(r,200);
  delay(5000);
  analogWrite(v,200);
  delay(5000);
}
