/*****************************************************************************
Programın Adı: D7-D0 ledleri sırayla toplayıp, D0-D7 söndüren program

Programın Amacı: Ledlerin aşağıda ki sırada yanıp sönmesini sağlıyoruz
								                     D7
                                  D6 D7
                               D5 D6 D7
                            D4 D5 D6 D7
                         D3 D4 D5 D6 D7
                      D2 D3 D4 D5 D6 D7
                   D1 D2 D3 D4 D5 D6 D7
                D0 D1 D2 D3 D4 D5 D6 D7 
                   D1 D2 D3 D4 D5 D6 D7
                      D2 D3 D4 D5 D6 D7
                         D3 D4 D5 D6 D7
                            D4 D5 D6 D7
                               D5 D6 D7
                                  D6 D7
                                     D7
Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022 

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/bM6vD9UWbOn-126-13-6-ledleri-toplayip-cikartan-program/editel

******************************************************************************/

#include "deneyap.h"
			   
void setup()
{
   int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz

  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  for(int i=0;i<8;i++)
  {
    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(pinler[i], OUTPUT);
  }

}

void loop()
{
  int iZaman=500;// Gecikmeyi tanımlayan iZaman değişkeni

   int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz

  //13'den 6 kadar pinleri 1 azaltarak fonksiyonu yürütüyoruz
  //13'den 6 kadar tüm ledleri sırayla yakıyoruz
  for(int i=7;i>=0;i--)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
  }
  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  //6'dan 13 kadar ledleri söndürüyorz
   for(int i=0;i<8;i++)
  {
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik LOW yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz    
  } 
}