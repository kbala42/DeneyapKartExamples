/*****************************************************************************
Programın Adı: Ortak katot displayi elde eden program                                                                                                                                                               

Programın Amacı: Ortak led displayin çalıştırılması mantığını anlamak


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/ex2mXTD80lM-151ortak-katot-display-calistirma/editel

******************************************************************************/

#include "deneyap.h"

// Display bacaklarının bağlı olduğu bacaklar için değişken tanımlıyoruz

int aPin = D0;  
int bPin = D1;
int cPin = D2;  
int dPin = D3;  
int ePin = D4;  
int fPin = D5;  
int gPin = D6;  

void setup()
{
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz
  
  //Kullancağımız pin değerlerini çıkış olarak atıyoruz
  for(int i=0; i < 8; i++)
  {
    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(pinler[i], OUTPUT);
  }
  
}

void loop()
{
  sifirYaz();//Sıfır yazdırmak için fonksiyonunu çağırıyoruz
  delay(1000); // 100 ms gecikme sağlıyoruz
  
  birYaz();//Bir yazdırmak için fonksiyonunu çağırıyoruz
  delay(1000); // 100 ms gecikme sağlıyoruz
  
  ikiYaz();//İki fonksiyonunu çağırıyoruz
  delay(1000); // 100 ms gecikme sağlıyoruz
  
  ucYaz();//Üç fonksiyonunu çağırıyoruz
  delay(1000); // 100 ms gecikme sağlıyoruz

  dortYaz();//Dört fonksiyonunu çağırıyoruz
  delay(1000); // 100 ms gecikme sağlıyoruz

  besYaz();//Beş fonksiyonunu çağırıyoruz
  delay(1000); // 100 ms gecikme sağlıyoruz
  
  altiYaz();//Altı fonksiyonunu çağırıyoruz
  delay(1000); // 100 ms gecikme sağlıyoruz  

  yediYaz();//Yedi fonksiyonunu çağırıyoruz
  delay(1000); // 100 ms gecikme sağlıyoruz  

  sekizYaz();//Sekiz fonksiyfonunu çağırıyoruz
  delay(1000); // 100 ms gecikme sağlıyoruz 

  dokuzYaz();//Dokuz fonksiyonunu çağırıyoruz
  delay(1000); // 100 ms gecikme sağlıyoruz  
}
// Sıfır yazdırma fonksiyonu
void sifirYaz()
{
  digitalWrite( aPin, 	HIGH);
  digitalWrite( bPin, 	HIGH);
  digitalWrite( cPin, 	HIGH);
  digitalWrite( dPin, 	HIGH);
  digitalWrite( ePin, 	HIGH);
  digitalWrite( fPin, 	HIGH);
  digitalWrite( gPin, LOW);
}
// Bir yazdırma fonksiyonu
void birYaz()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, 	HIGH); 
  digitalWrite( cPin, 	HIGH); 
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, LOW);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin, LOW);
}
// İki yazdırma fonksiyonu
void ikiYaz()
{
  digitalWrite( aPin, 	HIGH);
  digitalWrite( bPin, 	HIGH);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, 	HIGH);
  digitalWrite( ePin, 	HIGH);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin, 	HIGH);
}
// Üç yazdırma fonksiyonu
void ucYaz()
{
  digitalWrite( aPin,	HIGH);
  digitalWrite( bPin,  	HIGH);
  digitalWrite( cPin,   HIGH);
  digitalWrite( dPin,   HIGH);
  digitalWrite( ePin, LOW); 
  digitalWrite( fPin, LOW); 
  digitalWrite( gPin,   HIGH);
}
// Dört yazdırma fonksiyonu
void dortYaz()
{
  digitalWrite( aPin, LOW); 
  digitalWrite( bPin,   HIGH);
  digitalWrite( cPin,   HIGH);
  digitalWrite( dPin, LOW); 
  digitalWrite( ePin, LOW); 
  digitalWrite( fPin,   HIGH);
  digitalWrite( gPin,   HIGH);
}
// Beş yazdırma fonksiyonu
void besYaz()
{
  digitalWrite( aPin,   HIGH);
  digitalWrite( bPin, LOW);//
  digitalWrite( cPin,   HIGH);
  digitalWrite( dPin,   HIGH);
  digitalWrite( ePin, LOW);//
  digitalWrite( fPin,   HIGH);
  digitalWrite( gPin,   HIGH);
}
// Altı yazdırma fonksiyonu
void altiYaz()
{
  digitalWrite( aPin,   HIGH);
  digitalWrite( bPin, LOW); 
  digitalWrite( cPin,   HIGH);
  digitalWrite( dPin,   HIGH);
  digitalWrite( ePin,   HIGH);
  digitalWrite( fPin,   HIGH);
  digitalWrite( gPin,   HIGH);
}
// Yedi yazdırma fonksiyonu
void yediYaz()
{
  digitalWrite( aPin,   HIGH);//
  digitalWrite( bPin,   HIGH);//
  digitalWrite( cPin,   HIGH);//
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, LOW);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin, LOW);
}
// Sekiz yazdırma fonksiyonu
void sekizYaz()
{
  digitalWrite( aPin,   HIGH);
  digitalWrite( bPin,   HIGH);
  digitalWrite( cPin,   HIGH);
  digitalWrite( dPin,   HIGH);
  digitalWrite( ePin,   HIGH);
  digitalWrite( fPin,   HIGH);
  digitalWrite( gPin,   HIGH);
}
// Dokuz yazdırma fonksiyonu
void dokuzYaz()
{
  digitalWrite( aPin,   HIGH);
  digitalWrite( bPin,   HIGH);
  digitalWrite( cPin,   HIGH);
  digitalWrite( dPin,   HIGH);
  digitalWrite( ePin, LOW); 
  digitalWrite( fPin,   HIGH);
  digitalWrite( gPin,   HIGH);
}