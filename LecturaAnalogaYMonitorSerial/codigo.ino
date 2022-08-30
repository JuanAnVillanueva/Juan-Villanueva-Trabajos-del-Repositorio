// C++ code
//
#define pul A5
#define poten1 A4
#define poten2 A3
#define poten3 A2
#define r 10
#define a 11
#define v 9
#define p1
#define p2
#define p3

void setup()
{
  pinMode(pul, INPUT);
  pinMode(poten1, INPUT);
  pinMode(poten2, INPUT);
  pinMode(poten3, INPUT);
  pinMode(r, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(v, OUTPUT);
}

void loop()
{
  digitalRead(pul);
  if(pul == HIGH){
    delay(10000);
    p1 = analogRead(poten1);
    p2 = analogRead(poten2);
    p3 = analogRead(poten3);
  }
  analogWrite(r, p1);
  analogWrite(a, p2);
  analogWrite(v, p3);
    
}
