/*****************************************************************************
Programın Adı: Trafik ışıklarını simüle eden program

Programın Amacı: Trafik ışıklarının günlük kullanımını simüle etmek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/0atyq61E0pH-13trafik-isiklari/editel       
******************************************************************************/

#include "deneyap.h"


void setup() 
{             
  int pinler[] = {D0, D1, D2, D3, D4};

  for(int i=0;i<5;i++)
  {
      pinMode(pinler[i], OUTPUT);// o ani iPin değerini çıkış atıyoruz
  }
  
}
 
void loop() {

  int pinler[] = {D0, D1, D2, D3, D4};

  // Yayalar için pin değişkenlerini atiyoruz
  int iYayaYesil=pinler[D0], iYayaKirmizi=pinler[D1];

  // Taşıtlar için pin değişkenlerini atiyoruz
  int iTasitYesil=pinler[D2], iTasitSari=pinler[D3], iTasitKirmizi=pinler[D4];
  
  // yayalar için yeşil yanması
  
  digitalWrite(iTasitKirmizi, HIGH);//taşıtlar için kırmızıyı yakıyoruz      
  digitalWrite(iYayaYesil, HIGH);// yayalar için yeşili yakıyoruz  
  digitalWrite(iYayaKirmizi,LOW);//yayalar için kırmızı söndürüyoruz         
  digitalWrite(iTasitSari, LOW);//tasıtlar için sarıyı söndürüyoruz     
  delay(5000);// 5 saniye (5000ms) gecikme sağlıyoruz 
  
  //yayalar için kırmızı tasıtlar için sarı
  
  digitalWrite(iTasitKirmizi, LOW);//tasıtlar için kırmızı söndürüyoruz       
  digitalWrite(iYayaYesil, LOW);// yayalar için yeşili söndürüyoruz        
  digitalWrite(iTasitSari, HIGH);//tasıtlar için sarıyı yakıyoruz       
  digitalWrite(iYayaKirmizi, HIGH);//yayalar için kırmızıyı yakıyoruz       
  delay(2000);// 2 sanıye (2000ms) gecikme sağlıyoruz
  
  //tasıtlar için serbest geciş
  
  digitalWrite(iTasitSari, LOW);//tasıtlar için sarıyı söndürüyoruz        
  digitalWrite(iTasitYesil, HIGH);//tasıtlar için yeşili yakıyoruz       
  delay(10000);//10 saniye (10000ms) gecikme sağlıyoruz
  
  //tasıtlar durması icin sarı 
  
  digitalWrite(iTasitYesil, LOW);//tasıtlar için yeşili söndürüyoruz  
  digitalWrite(iTasitSari, HIGH);//tasıtlar için sarıyı yakıyoruz       
  delay(2000);//2 saniye (3000ms) gecikme sağlıyoruz               
  
}
