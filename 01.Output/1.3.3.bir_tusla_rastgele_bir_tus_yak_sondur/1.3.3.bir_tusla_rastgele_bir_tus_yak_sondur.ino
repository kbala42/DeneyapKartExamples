/*****************************************************************************
Programın Adı:  Bir tuşa basınca rastgele led yakma

Programın Amacı:  Bir tuşa bağla rastgele işlem yapma olayını öğrenmek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/hZh3KGYb39M-133bir-tusa-basinca-rastgele-led-yanip-sondurme/editel 

******************************************************************************/

#include "deneyap.h"
int iZaman=300;

void setup()
{
  pinMode(5, INPUT);
  for(int iPin=8;iPin<14;iPin++)
  {
    pinMode(iPin, OUTPUT);
  }

}

void loop()
{
  int iPin=random(8,14);
    if(digitalRead(5)==HIGH)
    {// Olmazsa yalnızca ilk satırı dahil eder. Diğerlerini görmez
  		digitalWrite(iPin, HIGH);
      	delay(iZaman);

     	digitalWrite(iPin, LOW);
      	delay(iZaman);
    }

}
