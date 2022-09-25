/*****************************************************************************
Programın Adı: RGB ledlerin birleşik olarak nasıl çalıştığını gösteren program

Programın Amacı: RGB ledlerin dijital olarak nasıl olduğunu anlamak


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/cJGS6bBenKk-142-rgb-di-yakip-sondurme/editel

******************************************************************************/
#include "deneyap.h"

// Ledlerin bağlı olduğu pinler için değişken ataması yapıyoruz.
int iKirmizi=D0, iYesil=D1, iMavi=D2
void setup() {
  pinMode(iKirmizi, OUTPUT);
  pinMode(iYesil, OUTPUT);
  pinMode(iMavi, OUTPUT);  
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
 
  // Sarı yakıyoruz
  digitalWrite(iKirmizi, HIGH);  
  digitalWrite(iYesil, HIGH);  
  digitalWrite(iMavi, LOW);  
  delay(1000);   

  // Hepsini kapatıyoruz  
  digitalWrite(iKirmizi, LOW);  
  digitalWrite(iYesil, LOW);  
  digitalWrite(iMavi, LOW);  
  delay(1000);    
   
  // MOR yakıyoruz
  digitalWrite(iKirmizi, HIGH);  
  digitalWrite(iYesil, LOW);  
  digitalWrite(iMavi, HIGH);  
  delay(1000); 
  
   // Hepsini kapatıyoruz  
  digitalWrite(iKirmizi, LOW);  
  digitalWrite(iYesil, LOW);  
  digitalWrite(iMavi, LOW);  
  delay(1000);
  
  //Turkuaz  yakıyoruz
  digitalWrite(iKirmizi, LOW);  
  digitalWrite(iYesil, HIGH);  
  digitalWrite(iMavi, HIGH);  
  delay(1000);   

  
}
