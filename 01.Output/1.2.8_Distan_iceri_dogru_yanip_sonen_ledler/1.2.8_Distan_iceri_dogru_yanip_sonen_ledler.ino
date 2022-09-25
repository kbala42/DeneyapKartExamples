/*****************************************************************************
Programın Adı: Dıştan içeri doğru yanıp çıkartan program

Programın Amacı: Ledlerin aşağıda ki sırada yanıp sönmesini sağlıyoruz
                D0                   D7
                   D1             D6  
                      D2       D5  
                         D3 D4  
          
Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022 

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/jMDOBBe1qwL-128-distan-iceri-dogru-yanip-sonen-ledler/editel

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

  int j=8; // İkinci led için başlangıç değeri tanımlıyoruz
 
  for(int i=0;i<4;i++)
  {
    digitalWrite(pinler[i], HIGH);//o anki pinler[i] değerini lojik HIGH yapıyoruz
    digitalWrite(pinler[j], HIGH);//o anki pinler[j] değerini lojik HIGH yapıyoruz

    delay(iZaman); // iZaman kadar gecikme sağlıyoruz

    digitalWrite(pinler[i], LOW);//o anki pinler[i] değerini lojik HIGH yapıyoruz
    digitalWrite(pinler[j], LOW);//o anki pinler[j] değerini lojik HIGH yapıyoruz

    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    
    j--;// O anki iPinIki değerini bir azaltıyoruz
  }
  
}