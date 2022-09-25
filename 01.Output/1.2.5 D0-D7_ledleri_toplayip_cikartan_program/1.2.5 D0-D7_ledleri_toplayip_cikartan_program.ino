/*****************************************************************************
Programın Adı: D0-D7 ledleri sırayla toplayıp çıkartan program

Programın Amacı: Ledlerin aşağıda ki sırada yanıp sönmesini sağlıyoruz
				        D0  
                D0 D1  
                D0 D1 D2 
                D0 D1 D2 D3  
                D0 D1 D2 D3 D4 
                D0 D1 D2 D3 D4 D5 
                D0 D1 D2 D3 D4 D5 D6  
                D0 D1 D2 D3 D4 D5 D6 D7
                D0 D1 D2 D3 D4 D5 D6  
                D0 D1 D2 D3 D4 D5  
                D0 D1 D2 D3 D4  
                D0 D1 D2 D3  
                D0 D1 D2  
                D0 D1  
                D0  

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022  

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/jZzmKzxjqVq-125-6-13-ledleri-toplayip-cikartan-program/editel

******************************************************************************/
#include "deneyap.h"
			   
void setup()
{
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz
  
  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  for(int i = 0; i<8; i++)
  {
    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(pinler[i], OUTPUT);
  }

}

void loop()
{
  int iZaman=500;// Gecikmeyi tanımlayan iZaman değişkeni

  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz
  
  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  // 6'dan 13 tüm ledleri sırayla yakıyoruz
  for(int i=0; i<8; i++)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
  }
  //13'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  //13'den 6 ya ledleri söndürüyorz
   for(int i=7; i>=0; i--)
  {
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik LOW yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz    
   } 
}