/*****************************************************************************
Programın Adı: Harici led yakıp söndüren program

Programın Amacı: Ledlerin aşağıda ki sırada yanıp sönmesini sağlıyoruz

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/lzEem5usgcI-112tek-ledi-yakip-sondurme/editel

******************************************************************************/

#include "deneyap.h"

void setup()
{
  pinMode(D0, OUTPUT);// D0 pini çıkış olarak atanıyor
}

void loop()
{
  digitalWrite(D0, HIGH);// D0 pini high yapılıyor. Yani ledi yakmamızı sağlıyor
  delay(1000); //1000 ms bekliyor 1000ms= 1s bekliyor
  digitalWrite(D0, LOW); // D0 pini dijital low yapılıyor yani ledi söndürdük
  delay(1000); // 1000 ms bekliyor  1000ms= 1s bekliyor
}

