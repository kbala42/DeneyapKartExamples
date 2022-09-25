/*****************************************************************************
Programın Adı: Beş ledi sırayla yanıp söndürme

Programın Amacı: Beş ledin sırayla yanıp sönmesini sağlamak

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/g4pYs6HYXp2-114-bes-led-yakip-sondurme/editel

******************************************************************************/
#include "deneyap.h"

void setup()
{
  //D0. pini çıkış olarak atıyoruz
  pinMode(D0, OUTPUT);
  //D1. pini çıkış olarak atıyoruz  
  pinMode(D1, OUTPUT);
  //D2. pini çıkış olarak atıyoruz  
  pinMode(D2, OUTPUT);
  //D3. pini çıkış olarak atıyoruz  
  pinMode(D3, OUTPUT);
  //D4. pini çıkış olarak atıyoruz  
  pinMode(D4, OUTPUT);
}

void loop()
{
  digitalWrite(D0, HIGH);//D0. pini lojik HIGH yapıyoruz
  delay(300); // 300 ms gecikme sağlıyoruz
  digitalWrite(D0, LOW);//D0. pini lojik LOW yapıyoruz
  delay(300); // 300 ms gecikme sağlıyoruz
  digitalWrite(D1, HIGH);//D1. pini lojik HIGH yapıyoruz
  delay(300); //300 ms gecikme sağlıyoruz
  digitalWrite(D1, LOW);//D1. pini lojik LOW yapıyoruz
  delay(300); //300 ms gecikme sağlıyoruz
  digitalWrite(D2, HIGH);//D2. pini lojik HIGH yapıyoruz
  delay(300); //300 ms gecikme sağlıyoruz
  digitalWrite(D2, LOW);//D2. pini lojik LOW yapıyoruz
  delay(300); // 300 ms gecikme sağlıyoruz
  digitalWrite(D3, HIGH);//D3. pini lojik HIGH yapıyoruz
  delay(300); // 300 ms gecikme sağlıyoruz
  digitalWrite(D3, LOW);//D3. pini lojik LOW yapıyoruz
  delay(300); // 300 ms gecikme sağlıyoruz
  digitalWrite(D4, HIGH);//D4. pini lojik HIGH yapıyoruz
  delay(300); // 300 ms gecikme sağlıyoruz
  digitalWrite(D4, LOW);//D4. pini lojik LOW yapıyoruz
  delay(300); // 300 ms gecikme sağlıyoruz
}