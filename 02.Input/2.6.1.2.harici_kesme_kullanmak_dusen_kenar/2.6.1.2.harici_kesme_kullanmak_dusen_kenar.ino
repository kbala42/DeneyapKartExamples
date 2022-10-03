 /*****************************************************************************
Programın Adı Buton  Harici kesme kullanımı (Yükselen kenar)

Programın Amacı: Harici kesmekullanmasını öğrenmek. 
			     (Yükselen kenar)

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/aastiAnkis1-2612buton-ile-harici-kesme-rasing/editel

******************************************************************************/

#include "deneyap.h"

volatile int ledDurum = HIGH;
const int ledPin= 13;
const int interruptButton = 2;

void setup()
{
  pinMode(ledPin, OUTPUT); 
  pinMode(interruptButton,INPUT);  
  attachInterrupt(0, buttonDurum, RISING);
}

void loop()
{

}

void buttonDurum()
{
  ledDurum = !ledDurum;
  digitalWrite(ledPin, ledDurum);
}