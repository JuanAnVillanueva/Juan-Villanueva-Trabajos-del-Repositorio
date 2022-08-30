#define fotor A4
#define temp A0
#define r 13
#define g 11
#define b 12
int foto;
int tempe;
int nfoto;
void setup()
{
  pinMode(fotor, INPUT);
  pinMode(temp, INPUT);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  foto = analogRead(fotor);
  tempe = analogRead(temp);
  nfoto = map(foto, 1017, 344, 0, 100);
  Serial.print("El nivel de luz actual es: ");
  Serial.print(nfoto);
  Serial.print(" %");
  Serial.print(" y la temperatura actual es: ");
  Serial.print(temp);
  Serial.println(" ºC");
  delay(500);
  if(nfoto = 0){
    if(tempe > 90){
      digitalWrite(r, HIGH);
    }
    else{
      digitalWrite(r, LOW);
    }
    if(tempe > 18){
      if(tempe < 90){
        digitalWrite(g, HIGH);
      }
    }
    else{
      digitalWrite(g, LOW);
    }
    if(tempe < 18){
      digitalWrite(b, HIGH);
    }
    else{
      digitalWrite(b, LOW);
    }
  }
}
