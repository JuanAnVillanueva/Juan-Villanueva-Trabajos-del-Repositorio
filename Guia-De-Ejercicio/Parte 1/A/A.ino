// C++ code
//
#define noPasar 13
#define pasar 12
#define rojo 11
#define ama 10
#define verde 9
void setup()
{
  pinMode(noPasar, OUTPUT);
  pinMode(pasar, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(ama, OUTPUT);
  pinMode(verde, OUTPUT);
  
    
}

void loop()
{
  digitalWrite(pasar, HIGH);
  digitalWrite(rojo, HIGH);
  digitalWrite(noPasar, LOW);
  digitalWrite(ama, LOW);
  delay(5000);
  digitalWrite(pasar, HIGH);
  digitalWrite(rojo, LOW);
  digitalWrite(ama, HIGH);
  delay(500);
  digitalWrite(pasar, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(ama, LOW);
  digitalWrite(noPasar, HIGH);
  delay(5000);
  digitalWrite(noPasar, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(ama, HIGH);
  delay(500);
}
