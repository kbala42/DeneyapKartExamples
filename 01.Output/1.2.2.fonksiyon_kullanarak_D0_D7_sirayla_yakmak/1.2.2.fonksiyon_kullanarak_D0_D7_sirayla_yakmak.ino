/*****************************************************************************
Programın Adı: Fonksiyon kullanarak işlemleri sadeleştirmek

Programın Amacı: Fonksiyon kullanarak kod içinde defalarca
				 tekrarladığımız işlemleri sadeleştirme

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/kZ4Qno60xDy-121sekiz-ledi-yakip-sondurme-degisken-kullanimi/editel

******************************************************************************/

#include "deneyap.h"
int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz

			   
void setup()
{
  
  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  for(int i = 0; i < 8; i++)
  {
    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(pinler[i], OUTPUT);
  }
  

}

void loop()
{
  int iZaman=100;// Gecikmeyi tanımlayan iZaman değişkeni
  
  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  for(int i = 0; i < 8; i++)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik LOW yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz    
  }
 
}
