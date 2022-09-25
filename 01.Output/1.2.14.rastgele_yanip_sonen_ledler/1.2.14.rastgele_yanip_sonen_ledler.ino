/*****************************************************************************
Programın Adı: Rastgele yanip sönen ledler

Programın Amacı: Ledlerin rastgele yanip sönmesini sağlıyoruz            

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/4FPy90bot5P-1214-rastgele-yanip-sonen-ledler/editel  
     
******************************************************************************/

#include "deneyap.h"

 void setup()
{
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7};

  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  
  for(int i=0;i<8;i++)
  {
    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(pinler[i], OUTPUT);
  }

}

void loop()
{
  int iZaman=300;// Gecikmeyi tanımlayan iZaman değişkeni

  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7};
  
  int i = random(0,8);
  
  digitalWrite(pinler[i], HIGH);
  delay(iZaman);

  digitalWrite(pinler[i], LOW);
  delay(iZaman);

}