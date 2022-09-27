/*****************************************************************************
Programın Adı: CD45D2 entegresi yardımıyla 0-9 sayan program                                                                                                                                                               

Programın Amacı: CD45D2 entegresi yardımıyla arduino pinlerini sadeleştirmeyi öğrenme


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/3ZZCcgb2mr3-153sayac-0-9-cd4511/editel

******************************************************************************/

#include "deneyap.h"

// Çıkış olarak kullanacağımız pinleri çıkış olarak atıyoruz
void setup(){

  int pinler[] = {D0, D1, D2, D3 }; // pinleri bir dizi şeklinde tanımlıyoruz
  
  //Kullancağımız pin değerlerini çıkış olarak atıyoruz
  for(int i=0; i < 4; i++)
  {
    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(pinler[i], OUTPUT);
  }  

}

void loop(){

  int iZaman=300;
  // Sıfır yazdıran fonksiyonu çağırıyoruz
  sifirYaz();
  delay(iZaman);//iZaman ms kadar gecikme sağlıyoruz
  // Bir yazdıran fonksiyonu çağırıyoruz
  birYaz();
  delay(iZaman);//iZaman ms kadar gecikme sağlıyoruz
  // İki yazdıran fonksiyonu çağırıyoruz
  ikiYaz();
  delay(iZaman);//iZaman ms kadar gecikme sağlıyoruz
  // Üç yazdıran fonksiyonu çağırıyoruz
  ucYaz();
  delay(iZaman);//iZaman ms kadar gecikme sağlıyoruz
  // Dört yazdıran fonksiyonu çağırıyoruz
  dortYaz();
  delay(iZaman);//iZaman ms kadar gecikme sağlıyoruz
  // Beş yazdıran fonksiyonu çağırıyoruz
  besYaz();
  delay(iZaman);//iZaman ms kadar gecikme sağlıyoruz
  // Altı yazdıran fonksiyonu çağırıyoruz
  altiYaz();
  delay(iZaman);//iZaman ms kadar gecikme sağlıyoruz
  // Yedi yazdıran fonksiyonu çağırıyoruz
  yediYaz();
  delay(iZaman);//iZaman ms kadar gecikme sağlıyoruz
  // Sekiz yazdıran fonksiyonu çağırıyoruz
  sekizYaz();
  delay(iZaman);//iZaman ms kadar gecikme sağlıyoruz
  // Dokuz yazdıran fonksiyonu çağırıyoruz
  dokuzYaz();
  delay(iZaman);//iZaman ms kadar gecikme sağlıyoruz
}
// Sıfır yazdıran fonksiyon 
void sifirYaz(){
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}
// Bir yazdıran fonksiyon 
void birYaz(){
  digitalWrite(D0, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}
// İki yazdıran fonksiyon 
void ikiYaz(){
  digitalWrite(D0, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}
// Üç yazdıran fonksiyon 
void ucYaz(){
  digitalWrite(D0, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}
//Dört yazdıran fonksiyon 
void dortYaz(){
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
}
// Beş yazdıran fonksiyon 
void besYaz(){
  digitalWrite(D0, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
}
// Altı yazdıran fonksiyon 
void altiYaz(){
  digitalWrite(D0, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
}
// Yedi yazdıran fonksiyon 
void yediYaz(){
  digitalWrite(D0, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
}
// Sekiz yazdıran fonksiyon 
void sekizYaz(){
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
}
// Dokuz yazdıran fonksiyon 
void dokuzYaz(){
  digitalWrite(D0, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
}

