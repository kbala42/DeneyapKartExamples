/*****************************************************************************
Programın Adı:Butonlarla Fonksiyonları Kullanmak

Programın Amacı: Kullanıcı tanımlı fonksiyonları butonlar yardımıyla 
				nasıl çağrılacağını öğrenmek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/54VArqZIIWB-216buton-ile-harici-kesme/editel

******************************************************************************/

#include "deneyap.h"

int iZaman=100;// Gecikmeyi tanımlayan iZaman değişkeni
			   
void setup()
{
   
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12, D13}; // pinleri bir dizi şeklinde tanımlıyoruz
  
  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  for(int i=6;i<14;i++)
  {
    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(pinler[i], OUTPUT);
  }
  
  for(int i=0; i<6;i++)
  {
  	pinMode(pinler[i],INPUT);//5 pini giriş olarak atıyoruz
  }

}

void loop()
{  

/*
  if(digitalRead(5)==HIGH)//eger 5. pin HIGH ise
  {
    sagaDogruToplama();
  }
  if(digitalRead(4)==HIGH)//eger 4. pin HIGH ise
  {
    solaDogruToplama();
  }
  
  if(digitalRead(3)==HIGH)//eger 3. pin  HIGH  ise
  {
    ictenDisariToplama();
  }
  if(digitalRead(2)==HIGH)//eger 2. pin  HIGH  ise
  {
     distanIceriToplama();
  }
  
  if(digitalRead(1)==HIGH)//eger 1. pin  HIGH  ise
  {
     distanIce();
  }
  
  if(digitalRead(0)==LOW)//eger 0. pin  HIGH  ise
  {
     ictenDisa(); 
  }
 */
}

void sagaDogruToplama()
{
  int pinler[] = {D6, D7, D8, D9, D10, D11, D12, D13}; // pinleri bir dizi şeklinde tanımlıyoruz
  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  // 6'dan 13 tüm ledleri sırayla yakıyoruz
  for(int i=6;i<14;i++)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
  }
  //13'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  //13'den 6 ya ledleri söndürüyorz
   for(int i=13;i>5;i--)
  {
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik LOW yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz    
   } 
  //iki fonksiyon arası gecikme için
  delay(2*iZaman); // 2*iZaman kadar gecikme sağlıyoruz 
}


void solaDogruToplama()
{
  int pinler[] = {D6, D7, D8, D9, D10, D11, D12, D13}; // pinleri bir dizi şeklinde tanımlıyoruz

    //13'den 6'ya kadar pinleri 1 azaltarak fonksiyonu yürütüyoruz
  //13'den 6'ya tüm ledleri sırayla yakıyoruz
  for(int i=13;i>5;i--)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
  }
  //6'dan 13 kadar pinleri 1 arttırarak fonksiyonu yürütüyoruz
  //6'den 13 e ledleri söndürüyoruz
   for(int i=6;i<14;i++)
  {
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik LOW yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz    
  } 
}

 void ictenDisa()
 {
   int pinler[] = {D6, D7, D8, D9, D10, D11, D12, D13}; // pinleri bir dizi şeklinde tanımlıyoruz

  int j=9; // İkinci led için başlangıç değeri tanımlıyoruz

  for(int i=10;i<14;i++)
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
 
 void distanIce()
 {
   int pinler[] = {D6, D7, D8, D9, D10, D11, D12, D13}; // pinleri bir dizi şeklinde tanımlıyoruz

 	int j=13; // İkinci led için başlangıç değeri tanımlıyoruz

    for(int i=6;i<10;i++)
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

void ictenDisariToplama()
{
  int pinler[] = {D6, D7, D8, D9, D10, D11, D12, D13}; // pinleri bir dizi şeklinde tanımlıyoruz

  int j=9; // İkinci led için başlangıç değeri tanımlıyoruz
 
  for(int i=10;i<14;i++)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    digitalWrite(pinler[j], HIGH);//o anki iPinIki değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    j--;// O anki iPinIki değerini bir azaltıyoruz
  }
  
  delay(2*iZaman); // iZaman kadar gecikme sağlıyoruz  
  
  j=6;
  for(int i=13;i>9;i--)
  {
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik HIGH yapıyoruz
    digitalWrite(pinler[j], LOW);//o anki iPinIki değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    j++;// O anki iPinIki değerini bir azaltıyoruz
  } 
  delay(2*iZaman); // iZaman kadar gecikme sağlıyoruz

}

void distanIceriToplama()
{
  int pinler[] = {D6, D7, D8, D9, D10, D11, D12, D13}; // pinleri bir dizi şeklinde tanımlıyoruz

  int j=6; // İkinci led için başlangıç değeri tanımlıyoruz

  for(int i=13;i>9;i--)
  {
    digitalWrite(pinler[i], HIGH);//o anki iPin değerini lojik HIGH yapıyoruz
    digitalWrite(pinler[j], HIGH);//o anki iPinIki değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    j++;// O anki iPinIki değerini bir azaltıyoruz
  }
  
  delay(2*iZaman); // 2*iZaman kadar gecikme sağlıyoruz  
  
  j=9;
  for(int i=10;i<14;i++)
  {
    digitalWrite(pinler[i], LOW);//o anki iPin değerini lojik HIGH yapıyoruz
    digitalWrite(pinler[j], LOW);//o anki iPinIki değerini lojik HIGH yapıyoruz
    delay(iZaman); // iZaman kadar gecikme sağlıyoruz
    j--;// O anki iPinIki değerini bir azaltıyoruz
  } 
  delay(2*iZaman); // 2*iZaman kadar gecikme sağlıyoruz
}
