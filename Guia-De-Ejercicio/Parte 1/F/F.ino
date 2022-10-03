// C++ code
//
#define pulzar 12
#define zum 11
void setup()
{
  pinMode(zum, OUTPUT);
  pinMode(pulzar, INPUT);
}

void loop()
{
  if(pulzar == 1){
    digitalWrite(zum, HIGH);
    delay(500);
    digitalWrite(zum, LOW);
    delay(500);
  }
  else{
    digitalWrite(zum, LOW);
  }
}
