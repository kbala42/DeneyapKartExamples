/*****************************************************************************
Programın Adı:  Pot 6 ledi kontrol eden program

Programın Amacı: Pot seviyesine göre 6 ledi yakıp söndürme 


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/azNVOz6Ob2C-314potla-sinyal-seviyesine-gore-led-yakma/editel
      
******************************************************************************/

#include "deneyap.h"

int pot=A5; //entrada analogica
int lectura;
int led2=D12;
int led1=D13;
int led3=D11;
int led4=D10;
int led5=D9;
int led6=D8;


void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(13, 1);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
 
}

void loop()
{
  lectura=analogRead(A5);
  Serial.println(lectura);
  	delay(400);
  if(lectura==0)
  {
    digitalWrite(13, 0);
    digitalWrite(12, 0);
  }
  else if(lectura>0 && lectura<=340)  
  {  
  	digitalWrite(13, HIGH);
  	digitalWrite(12, HIGH);
  	digitalWrite(11, 0); // el 0 significa LOW
  	digitalWrite(10, 0);        
  }

  else if(lectura>=341&&lectura<=682)    
  {
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
  }
  else if(lectura>=683)
  {    
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  }
}

