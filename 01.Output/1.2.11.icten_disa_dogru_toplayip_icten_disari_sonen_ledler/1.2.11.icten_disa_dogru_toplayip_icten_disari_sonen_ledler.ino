/*****************************************************************************
Programın Adı: İçten dışa doğru toplarak yakan ardından 
				içten dışarı doğru söndüren program

Programın Amacı: Ledlerin aşağıda ki sırada yanıp sönmesini sağlıyoruz
                         D3 D4  
                      D2 D3 D4 D5  
                   D1 D2 D3 D4 D5 D6   
                D0 D1 D2 D3 D4 D5 D6 D7 
                D0 D1 D2       D5 D6 D7
                D0 D1             D6 D7
                D0                   D7              
Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022 

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/6wTdvL90drT-1211-icten-disa-dogru-toplayip-icten-disari-sonen-ledler/editel

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

  int j=3; // İkinci led için başlangıç değeri tanımlıyoruz

  for(int i=4;i<8;i++)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    digitalWrite(pinler[j], HIGH);//o anki iPinIki değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    j--;// O anki iPinIki değerini bir azaltıyoruz
  }
  delay(iZaman); // iZaman kadar gecikme sağlıyoruz 

  j=3;

  for(int i=4;i<8;i++)
  {
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik HIGH yapıyoruz
    digitalWrite(pinler[j], LOW);//o anki iPinIki değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    j--;// O anki iPinIki değerini bir azaltıyoruz
  } 
  delay(iZaman); // iZaman kadar gecikme sağlıyoruz
}