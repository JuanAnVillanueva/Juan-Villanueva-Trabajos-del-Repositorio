void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  int time = 2000;
}

void loop()
{
  analogWrite(11, 200);
  analogWrite(10, 100);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  delay(1000); 
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(1000); 
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  delay(1000); 
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  analogWrite(2, 150);
  delay(1000); 
  digitalWrite(2, LOW);
  
}
