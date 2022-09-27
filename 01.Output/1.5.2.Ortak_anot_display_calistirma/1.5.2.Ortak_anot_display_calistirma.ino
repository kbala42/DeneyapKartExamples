/*****************************************************************************
Programın Adı: Ortak anot displayi elde eden program           

Programın Amacı: Ortak anot led displayin çalıştırılması mantığını anlamak


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/c3BtHXOY4sY-152ortak-anot-display-calistirma/editel

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

  sekizYaz();//Sekiz fonksiyonunu çağırıyoruz
  delay(1000); // 100 ms gecikme sağlıyoruz  

  dokuzYaz();//Dokuz fonksiyonunu çağırıyoruz
  delay(1000); // 100 ms gecikme sağlıyoruz  

}
// Sıfır yazdırma fonksiyonunu tanımlıyoruz
void sifirYaz()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, LOW);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin,   HIGH);
}
// Bir yazdırma fonksiyonunu tanımlıyoruz
void birYaz()
{
  digitalWrite( aPin, HIGH);
  digitalWrite( bPin,   LOW);
  digitalWrite( cPin,   LOW);
  digitalWrite( dPin, HIGH);
  digitalWrite( ePin, HIGH);
  digitalWrite( fPin, HIGH);
  digitalWrite( gPin, HIGH);
}
// İki yazdırma fonksiyonunu tanımlıyoruz
void ikiYaz()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin,   HIGH);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, LOW);
  digitalWrite( fPin,   HIGH);
  digitalWrite( gPin, LOW);
}
// Üç yazdırma fonksiyonunu tanımlıyoruz
void ucYaz()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin,   HIGH);
  digitalWrite( fPin,   HIGH);
  digitalWrite( gPin, LOW);
}
// Dört yazdırma fonksiyonunu tanımlıyoruz
void dortYaz()
{
  digitalWrite( aPin, HIGH);
  digitalWrite( bPin,   LOW);
  digitalWrite( cPin,   LOW);
  digitalWrite( dPin, HIGH);
  digitalWrite( ePin, HIGH);
  digitalWrite( fPin,   LOW);
  digitalWrite( gPin,   LOW);
}
// Beş yazdırma fonksiyonunu tanımlıyoruz
void besYaz()
{
  digitalWrite( aPin,   LOW);
  digitalWrite( bPin, HIGH);
  digitalWrite( cPin,   LOW);
  digitalWrite( dPin,   LOW);
  digitalWrite( ePin, HIGH);
  digitalWrite( fPin,   LOW);
  digitalWrite( gPin,   LOW);
}
// Altı yazdırma fonksiyonunu tanımlıyoruz
void altiYaz()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin,   HIGH);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, LOW);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin, LOW);
}
// Yedi yazdırma fonksiyonunu tanımlıyoruz
void yediYaz()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin,   HIGH);
  digitalWrite( ePin,   HIGH);
  digitalWrite( fPin,   HIGH);
  digitalWrite( gPin,   HIGH);
}
// Sekiz yazdırma fonksiyonunu tanımlıyoruz
void sekizYaz()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, LOW);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin, LOW);
}
// Dokuz yazdırma fonksiyonunu tanımlıyoruz
void dokuzYaz()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin,   HIGH);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin, LOW);
}
