// C++ code
//
#define r1 13
#define a1 12
#define v1 11
#define r2 10
#define a2 9
#define v2 8
void setup()
{
  pinMode(r1, OUTPUT);
  pinMode(a1, OUTPUT);
  pinMode(v1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(v2, OUTPUT);
}

void loop()
{
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(v2,LOW);
  delay(1000);
  digitalWrite(v1,HIGH);
  digitalWrite(a1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(v2,LOW);
  delay(1000);
  digitalWrite(v1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(v2,LOW);
  delay(1000);
  digitalWrite(r1,HIGH);
  digitalWrite(a1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(v2,LOW);
  delay(1000);
  digitalWrite(a1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(v2,LOW);
  delay(1000);
  digitalWrite(v1,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(a1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(v2,LOW);
  delay(1000);
  digitalWrite(v1,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(v2,LOW);
  delay(50);
  digitalWrite(r2,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(v1,LOW);
  delay(1000);
  digitalWrite(v2,HIGH);
  digitalWrite(a2,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(v1,LOW);
  delay(1000);
  digitalWrite(v2,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(v1,LOW);
  delay(1000);
  digitalWrite(r2,HIGH);
  digitalWrite(a2,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(v1,LOW);
  delay(1000);
  digitalWrite(a2,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(v1,LOW);
  delay(1000);
  digitalWrite(v2,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(a2,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(v1,LOW);
  delay(1000);
  digitalWrite(v2,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(v1,LOW);
  delay(50);
}
