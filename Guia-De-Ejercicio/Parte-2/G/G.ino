// C++ code
//
#define poten A0
#define zum 11
void setup()
{
  pinMode(zum, OUTPUT);
  pinMode(poten, INPUT);
}

void loop()
{
  analogRead(poten);
  analogWrite(zum, poten);
}
