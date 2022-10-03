 /*****************************************************************************
Programın Adı Buton  Harici kesme kullanımı

Programın Amacı: Harici kesmekullanmasını öğrenmek

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/6FUblcfbQzo-2611buton-ile-harici-kesme/editel

******************************************************************************/

#include "deneyap.h"

volatile boolean ledDurum = false;
const int ledPin= 13;
const int interruptButton = 2;

void setup()
{
  pinMode(ledPin, OUTPUT); 
  pinMode(interruptButton,INPUT);  
  attachInterrupt(0, buttonDurum, FALLING);
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

