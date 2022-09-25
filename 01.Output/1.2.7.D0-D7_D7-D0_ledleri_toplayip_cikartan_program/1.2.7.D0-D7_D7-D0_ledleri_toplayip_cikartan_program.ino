/*****************************************************************************
Programın Adı: 00-D7 ledleri yakıp D7-D0 ledleri söndüren ardından
			   D7-D0 ledleri yakıp D0-D7 ledleri söndüren program 

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

https://www.tinkercad.com/things/lOVFpNXBg2E-127-6-13-13-6-ledleri-toplayip-cikartan-program/editel

******************************************************************************/

#include "deneyap.h"		

void setup()
{
  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  for(int i=0;i<8;i++)
  {
    int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz

    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(pinler[i], OUTPUT);
  }

}

void loop()
{
  int iZaman=200;// Gecikmeyi tanımlayan iZaman değişkeni

  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz

  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  // 6'dan 13 tüm ledleri sırayla yakıyoruz
  for(int i=0;i<8;i++)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
  }
  //13'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  //13'den 6 ya ledleri söndürüyorz
   for(int i=7;i>=0;i--)
  {
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik LOW yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz    
   } 
  //iki fonksiyon arası gecikme için
  delay(2*iZaman); // 2*iZaman kadar gecikme sağlıyoruz 
  
  //13'den 6'ya kadar pinleri 1 azaltarak fonksiyonu yürütüyoruz
  //13'den 6'ya tüm ledleri sırayla yakıyoruz
  for(int i=7;i>=0;i--)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
  }
  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  //6'den 13 e ledleri söndürüyoruz
   for(int i=0;i<8;i++)
  {
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik LOW yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz    
  }  
}