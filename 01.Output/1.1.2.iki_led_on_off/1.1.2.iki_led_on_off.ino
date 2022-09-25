/*****************************************************************************
Programın Adı: İki ledi sırayla yanıp söndürme

Programın Amacı: İki ledin sırayla yanıp sönmesini sağlamak

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/1i670W7r2GX-113iki-ledi-yakip-sondurme/editel

******************************************************************************/
#include "deneyap.h"

void setup()
{
  //D0 pini çıkış olarak atıyoruz
  pinMode(D0, OUTPUT);
  //D1 pini çıkış olarak atıyoruz
  pinMode(D1, OUTPUT);  
}

void loop()
{
  digitalWrite(D0, HIGH);//D0. pini lojik HIGH yapıyoruz
  delay(1000); // 1000 ms gecikme sağlıyoruz
  digitalWrite(D0, LOW);//D0. pini lojik LOW yapıyoruz
  delay(1000); // 1000 ms gecikme sağlıyoruz
  digitalWrite(D1, HIGH);//D1. pini lojik HIGH yapıyoruz
  delay(1000); // 1000 ms gecikme sağlıyoruz
  digitalWrite(D1, LOW);//D1. pini lojik LOW yapıyoruz
  delay(1000); // 1000 ms gecikme sağlıyoruz
  
}
