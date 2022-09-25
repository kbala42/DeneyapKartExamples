/*****************************************************************************
Programın Adı: RGB ledlerin yanıp söndürmek için fonksiyon kullanılması

Programın Amacı: RGB ledlerin dijital olarak çalışmasını 
				fonksiyonlarla sadeleştirmek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022
       
Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/gKGFkIG87j4-143-rgb-di-yakip-sondurme-fonksiyon/editel

******************************************************************************/
#include "deneyap.h"

// Ledlerin bağlı olduğu pinler için değişken ataması yapıyoruz.
int iKirmizi=D0, iYesil=D1, iMavi=D2, iZaman=500;

void setup() 
{
  pinMode(iKirmizi, OUTPUT);
  pinMode(iYesil, OUTPUT);
  pinMode(iMavi, OUTPUT);  
}

void loop() 
{

  // Kırmızı ledi yakma fonksiyonunu çağırıyoruz
  kirmiziYak();  
  delay(iZaman);  
  
  // Bütün ledleri kapatma fonksiyonunu çağırıyoruz 
  rgbKapat();
  delay(iZaman);  
  
  // Yeşil ledi yakma fonksiyonunu çağırıyoruz
  yesilYak();  
  delay(iZaman);   
  
  // Bütün ledleri kapatma fonksiyonunu çağırıyoruz 
  rgbKapat();
  delay(iZaman);
 
  // Kırmızı ledi yakma fonksiyonunu çağırıyoruz
  maviYak();  
  delay(iZaman);   
  
  // Bütün ledleri kapatma fonksiyonunu çağırıyoruz 
  rgbKapat();
  delay(iZaman); 
  
  // Beyaz ledi yakma fonksiyonunu çağırıyoruz
  beyazYak();  
  delay(iZaman);    

  // Bütün ledleri kapatma fonksiyonunu çağırıyoruz 
  rgbKapat();
  delay(iZaman);  
  
  morYak();
  delay(iZaman);
  
  turkuazYak();
  delay(iZaman);
 
  sariYak();
  delay(iZaman);  
     
}

  // Bütün ledleri söndürme fonksiyonu
  void rgbKapat()
  {
    digitalWrite(iKirmizi, LOW);  
    digitalWrite(iYesil, LOW);  
    digitalWrite(iMavi, LOW); 
  }
  // Kırımızı led yakma fonksiyonu
  void kirmiziYak()
  {
    digitalWrite(iKirmizi, HIGH);  
    digitalWrite(iYesil, LOW);  
    digitalWrite(iMavi, LOW);   
  }
  // Yeşil ledi yakma fonksiyonu
  void yesilYak()
  {
    digitalWrite(iKirmizi, LOW);  
    digitalWrite(iYesil, HIGH);  
    digitalWrite(iMavi, LOW);  
  }
  // Mavi ledi yakma fonksiyonu
  void maviYak()
  {
     // Mavi
    digitalWrite(iKirmizi, LOW);  
    digitalWrite(iYesil,LOW);  
    digitalWrite(iMavi, HIGH);  
  }
  // Beyaz led yakma fonksiyonu
  void beyazYak()
  {
    digitalWrite(iKirmizi, HIGH);  
    digitalWrite(iYesil, HIGH);  
    digitalWrite(iMavi, HIGH);  
  }

void sariYak()
{  
  // Turuncu yakıyoruz
  digitalWrite(iKirmizi, HIGH);  
  digitalWrite(iYesil, HIGH);  
  digitalWrite(iMavi, LOW);  
}   

void morYak()
{
  // MOR yakıyoruz
  digitalWrite(iKirmizi, HIGH);  
  digitalWrite(iYesil, LOW);  
  digitalWrite(iMavi, HIGH);  
}

void turkuazYak()
{
  //Sarı yakıyoruz
  digitalWrite(iKirmizi, LOW);  
  digitalWrite(iYesil, HIGH);  
  digitalWrite(iMavi, HIGH);  
  delay(1000);
}