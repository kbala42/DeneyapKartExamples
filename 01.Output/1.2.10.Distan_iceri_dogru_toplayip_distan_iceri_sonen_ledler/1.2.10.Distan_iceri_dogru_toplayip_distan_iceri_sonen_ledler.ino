/*****************************************************************************
Programın Adı: Dıştan içeri doğru toplayıp, dışardan içeri çıkartan program

Programın Amacı: Ledlerin aşağıda ki sırada yanıp sönmesini sağlıyoruz
                D0                   D7
                D0 D1             D6 D7
                D0 D1 D2       D5 D6 D7
                D0 D1 D2 D3 D4 D5 D6 D7
                   D1 D2 D3 D4 D5 D6  
                      D2 D3 D4 D5  
                         D3 D4              

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022 

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/3wpQktblvYy-1210-distan-iceri-dogru-toplayip-distan-iceri-sonen-ledler/editel

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
  int iZaman=200;// Gecikmeyi tanımlayan iZaman değişkeni

  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz

  int j=7; // İkinci led için başlangıç değeri tanımlıyoruz

  for(int i=0;i<4;i++)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    digitalWrite(pinler[j], HIGH);//o anki iPinIki değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    j--;// O anki iPinIki değerini bir azaltıyoruz
  }
  
  delay(2*iZaman); // iZaman kadar gecikme sağlıyoruz
  
  j=4;// Son değeri tekrar alıyoruz
  for(int i=0;i<4;i++)
  {
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik LOW yapıyoruz
    digitalWrite(pinler[j], LOW);//o anki iPinIki değerini lojik LOW yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    j--;// O anki iPinIki değerini bir azaltıyoruz
  } 
  delay(iZaman); // iZaman kadar gecikme sağlıyoruz
}