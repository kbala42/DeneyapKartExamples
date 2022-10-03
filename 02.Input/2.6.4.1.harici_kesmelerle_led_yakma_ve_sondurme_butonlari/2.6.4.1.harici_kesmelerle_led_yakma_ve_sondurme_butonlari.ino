/*****************************************************************************
Programın Adı Harici kesme ile yakma ve sönsüre butonları

Programın Amacı: Harici kesme ile yakma ve sönsürme butonlarının
				 çalışmasını öğrenmek

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/fGCgBSpOvQY-2632-led-yakma-ve-sondurme-butonlari/editel

******************************************************************************/

#include "deneyap.h"

const int interruptSondur = 2;
const int interruptYak = 3;
const int ledPin = 13;
  
void setup()
{
  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  for(int iPin=6;iPin<14;iPin++)
  {
    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(ledPin, OUTPUT);
  }
  
  pinMode(interruptSondur,INPUT);
  pinMode(interruptYak,INPUT);
  
  attachInterrupt(0, ledSondur, RISING);
  attachInterrupt(1, ledYak, RISING);
  
}

void loop()
{
}

void ledYak()
{
  digitalWrite(ledPin, HIGH);
}
void ledSondur()
{
  digitalWrite(ledPin, LOW);
}