void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  analogWrite(13,0);
  delay(500);
  analogWrite(12,25);
  delay(500);
  analogWrite(11,50);
  delay(500);
  analogWrite(10,75);
  delay(500);
  analogWrite(9,100);
  delay(500);
  analogWrite(8,125);
  delay(500);
  analogWrite(7,150);
  delay(500);
  analogWrite(6,175);
  delay(500);
  analogWrite(5,200);
  delay(500);
  analogWrite(4,255);
  delay(500);
}
