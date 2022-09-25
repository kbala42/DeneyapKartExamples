/*****************************************************************************
Programın Adı: D7-D0 doğru ledleri sırayla yakıp söndüren program

Programın Amacı: D7-D0 doğru ledlerin azalan sırada yanıp 
				sönmesini sağlamak. 
        
        Önceki uygulamada derleyici uyarılarından kurtulmak
        için pinler dizisi local olarak tanımlanmıştır

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/4TanJR2Zo6B-123-13-6-geriye-sirayla-yakip-sonduren-program/editel

******************************************************************************/
#include "deneyap.h"
			   
void setup()
{
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz

  //13'den 6'ya kadar pinleri 1 azaltarak fonksiyonu yürütüyoruz
  for(int i=7; i >= 0; i--)
  {
    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(pinler[i], OUTPUT);
  }

}

void loop()
{
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz
  
  int iZaman=100;// Gecikmeyi tanımlayan iZaman değişkeni

  //13'den 6'ya kadar pinleri 1 azaltarak fonksiyonu yürütüyoruz       
  for(int i=7; i >= 0; i--)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik LOW yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz    
  }

}