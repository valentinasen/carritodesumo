#include <SoftwareSerial.h>
SoftwareSerial BT(8,9);
char leer = 0;

void setup(){
  BT.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop(){
  Serial.println(leer);
  if(BT.available()>0){
    leer=BT.read();
    switch(leer){
      case '1':
      Adelante();
      Serial.println(leer);
      break;
      case '2':
      Atras();
      Serial.println(leer);
      break;
      case '3':
      Derecha();
      Serial.println(leer);
      break;
      case '4':
      Izquierda();
      Serial.println(leer);
      break;
      case '5':
      Detener();
      Serial.println(leer);
      break;
    }
  }
}

void Adelante(){
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
}
void Atras(){
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
}
void Derecha(){
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
}
void Izquierda(){
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
}
void Detener(){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
}