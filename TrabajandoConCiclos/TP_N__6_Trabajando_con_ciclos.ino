// C++ code
//
#define r 3
#define g 6
#define b 5
#define pot1 A0
#define pot2 A1
#define pot3 A2
int npot1;
int npot2;
int npot3;
void setup()
{
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(pot1, INPUT);
  pinMode(pot2, INPUT);
  pinMode(pot3, INPUT);
}

void loop()
{
  npot1 = map(pot1, 0, 1023, 0, 255);
  npot2 = map(pot2, 0, 1023, 0, 255);
  npot3 = map(pot3, 0, 1023, 0, 255);
  analogWrite(r, analogRead(npot1));
  analogWrite(g, analogRead(npot2));
  analogWrite(b, analogRead(npot3));
}
