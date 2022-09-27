/*****************************************************************************
Programın Adı: Harici kesme kullanma

Programın Amacı: Buton ile harici kesme üreterek ledi yakıp söndürmek

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/54VArqZIIWB-216buton-ile-harici-kesme/editel

******************************************************************************/

#include "deneyap.h"

volatile boolean ledDurum = false;
const int ledPin= D13;
const int interruptButton = D2;

void setup()
{
  pinMode(ledPin, OUTPUT); 
  pinMode(interruptButton,INPUT);  
  attachInterrupt(digitalPinToInterrupt(D2), buttonDurum, FALLING);
}

void loop(){

}

void buttonDurum()
{
	
  if (ledDurum) 
  {
    ledDurum = false;
    digitalWrite(ledPin, LOW);
  }
  else 
  {
    ledDurum = true;
    digitalWrite(ledPin, HIGH);
  }

}