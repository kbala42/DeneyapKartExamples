/*****************************************************************************
Programın Adı: RGB ledlerin ayrı ayrı nasıl çalıştığını gösteren program

Programın Amacı: RGB ledlerin yapısını oluşturan ledlerin nasıl olduğunu anlamak


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/2VLBEUFsKNB-141-rgb-temel-ayri-uc-ledi-yakip-sondurme/editel

******************************************************************************/

#include "deneyap.h"

// Ledlerin bağlı olduğu pinler için değişken ataması yapıyoruz.
int iKirmizi=D0, iYesil=D1, iMavi=D2;

void setup() {
  pinMode(iKirmizi, OUTPUT);// iKirmizi çıkış olarak ata
  pinMode(iYesil, OUTPUT);// iYesil çıkış olarak ata
  pinMode(iMavi, OUTPUT); // iMavi çıkış olarak ata 
}

void loop() {
  //  Kırmızıyı yakıyoruz
  digitalWrite(iKirmizi, HIGH);  
  digitalWrite(iYesil, LOW);  
  digitalWrite(iMavi, LOW);  
  delay(1000);  
  
  // Hepsini kapatıyoruz 
  digitalWrite(iKirmizi, LOW);  
  digitalWrite(iYesil, LOW);  
  digitalWrite(iMavi, LOW);  
  delay(1000);  
  
  // Yeşili yakıyoruz
  digitalWrite(iKirmizi, LOW);  
  digitalWrite(iYesil, HIGH);  
  digitalWrite(iMavi, LOW);  
  delay(1000);  
  
  // Hepsini kapatıyoruz 
  digitalWrite(iKirmizi, LOW);  
  digitalWrite(iYesil, LOW);  
  digitalWrite(iMavi, LOW);  
  delay(1000); 
  
   // Maviyi yakıyoruz
  digitalWrite(iKirmizi, LOW);  
  digitalWrite(iYesil,LOW);  
  digitalWrite(iMavi, HIGH);  
  delay(1000);  
  
  // Hepsini kapatıyoruz  
  digitalWrite(iKirmizi, LOW);  
  digitalWrite(iYesil, LOW);  
  digitalWrite(iMavi, LOW);  
  delay(1000);  
  
  // Beyazı yakıyoruz
  digitalWrite(iKirmizi, HIGH);  
  digitalWrite(iYesil, HIGH);  
  digitalWrite(iMavi, HIGH);  
  delay(1000);   

  // Hepsini kapatıyoruz 
  digitalWrite(iKirmizi, LOW);  
  digitalWrite(iYesil, LOW);  
  digitalWrite(iMavi, LOW);  
  delay(1000);     
     
}