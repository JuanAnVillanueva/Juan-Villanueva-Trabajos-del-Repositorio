#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal pantalla(0);


#define fotor A3
#define temp A0
#define r 13
#define g 11
#define b 12
#define boton A1  
int foto;
int tempe;
int nfoto;
void setup(){
  pantalla.begin(16,2);
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
  if(boton == LOW){
    pantalla.setCursor(0, 0);
    pantalla.print("Nivel de Luz: ");
    pantalla.setCursor(0, 1);
    pantalla.print(nfoto);
    pantalla.print(" ");
    pantalla.print(" %  ");
  }
  else{
    pantalla.setCursor(0, 0);
    pantalla.print("Temperatura: ");
    pantalla.setCursor(0, 1);
    pantalla.print(tempe);
    pantalla.print(" ");
    pantalla.print(" ºC  ");
  }
}
