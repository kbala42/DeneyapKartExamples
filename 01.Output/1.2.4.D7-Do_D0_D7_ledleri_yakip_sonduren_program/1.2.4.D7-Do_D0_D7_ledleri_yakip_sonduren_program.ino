/*****************************************************************************
Programın Adı: D7-D0,ardından D0-D7 doğru ledleri sırayla yakıp söndüren program

Programın Amacı: D7-D0 doğru ledlerin azalan ardından D0-D7 doğru çoğalan sırada 
				yanıp sönmesini sağlamak

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022  

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/9hJoXfisQsF-124-13-6-6-13-ledleri-yakip-sonduren-program/editel

******************************************************************************/

#include "deneyap.h"

			   
void setup()
{
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz

  //13'den 6'ya kadar pinleri 1 azaltarak fonksiyonu yürütüyoruz
  for(int i=7; i>=0;i--)
  {
    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(pinler[i], OUTPUT);
  }

}

void loop()
{
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz

  int iZaman=100;// Gecikmeyi tanımlayan iZaman değişkeni

  //D7'den 6D0'ya kadar pinleri 1 azaltarak fonksiyonu yürütüyoruz
  
  for(int i=7;i>=0;i--)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik LOW yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz    
  }
  
  //delay(1000);//1000 ms (1 sn) gecikme sağlıyoruz. İsteğe bağlı	
  
  // D0'dan D7'e kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  
  for(int i=0;i<8;i++)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik LOW yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz    
  }
  
  //delay(1000);//1000 ms (1 sn) gecikme sağlıyoruz.İsteğe bağlı	
}
