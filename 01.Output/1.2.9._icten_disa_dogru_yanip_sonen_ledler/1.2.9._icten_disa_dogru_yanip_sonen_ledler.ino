/*****************************************************************************
Programın Adı: İçten dışarı doğru yanıp söndüren program

Programın Amacı: Ledlerin aşağıda ki sırada yanıp sönmesini sağlıyoruz
                         D3 D4    
                      D2       D5  
                   D1             D6  
                D0                   D7                

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022 

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/b594OLy8lhO-129-icten-disa-dogru-yanip-sonen-ledler/editel

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

  int j=3; // İkinci led için başlangıç değeri tanımlıyoruz

  for(int i=4; i<8; i++)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    digitalWrite(pinler[j], HIGH);//o anki iPinIki değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik HIGH yapıyoruz
    digitalWrite(pinler[j], LOW);//o anki iPinIki değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    j--;// O anki iPinIki değerini bir azaltıyoruz
  }
  
}