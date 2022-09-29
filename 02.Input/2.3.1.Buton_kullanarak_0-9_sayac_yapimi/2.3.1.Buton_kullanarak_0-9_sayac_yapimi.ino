/*****************************************************************************
Programın Adı: CD4511 entegresi yardımıyla 0-9 sayan program                                                                                                                                                                                                                                                                                                                 
Programın Amacı: Buton kullanarak sayaç yapımı


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/iJYdaHZEeQ7-231butonlu-sayac-0-9-cd4511/editel

Simülasyonla benzemesi için daha önce ki sayac programından farklı olarak
aynı dijital pinler kullanılmıştır.

******************************************************************************/

#include "deneyap.h"

int iSayac=0;

// Çıkış olarak kullanacağımız pinleri çıkış olarak atıyoruz
void setup(){
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12, D13}; // pinleri bir dizi şeklinde tanımlıyoruz
  
  // Yalnızca D6-D13 arası pinleri çıkış olarak atıyoruz
  for(int i=13;i>5;i--)
  {
    pinMode(pinler[i] ,OUTPUT);
  }
  pinMode(D5,INPUT);//12 pini giriş olarak atıyoruz
}
void loop(){
  
  if(digitalRead(D5)==LOW)//eger 5 pin LOW ise
  {
    iSayac++;
    ileriSay();
    delay(300);
  }
}
void ileriSay(){
	switch(iSayac){
        case 0: sifirYaz(); break;//onlar içeriği 0 ise sifirYaz fonksiyonunu çağırıyoruz
        case 1: birYaz(); break;//onlar içeriği 1 ise birYaz fonksiyonunu çağırıyoruz
        case 2: ikiYaz(); break;//onlar içeriği 2 ise ikiYaz fonksiyonunu çağırıyoruz
        case 3: ucYaz(); break;//onlar içeriği 3 ise ucYaz fonksiyonunu çağırıyoruz
        case 4: dortYaz(); break;//onlar içeriği 4 ise dortYaz fonksiyonunu çağırıyoruz
        case 5: besYaz(); break;//onlar içeriği 5 ise besYaz fonksiyonunu çağırıyoruz
        case 6: altiYaz(); break;//onlar içeriği 6 ise altiYaz fonksiyonunu çağırıyoruz
        case 7: yediYaz(); break;//onlar içeriği 7 ise yediYaz fonksiyonunu çağırıyoruz
        case 8: sekizYaz(); break;//onlar içeriği 8 ise sekizYaz fonksiyonunu çağırıyoruz
        case 9: dokuzYaz(); break;//onlar içeriği 9 ise dokuzYaz fonksiyonunu çağırıyoruz
      }
}
// Sıfır yazdıran fonksiyon 
void sifirYaz(){
  digitalWrite(D13, LOW);
  digitalWrite(D12, LOW);
  digitalWrite(D11, LOW);
  digitalWrite(D10, LOW);
}
// Bir yazdıran fonksiyon 
void birYaz(){
  digitalWrite(D13, HIGH);
  digitalWrite(D12, LOW);
  digitalWrite(D11, LOW);
  digitalWrite(D10, LOW);
}
// İki yazdıran fonksiyon 
void ikiYaz(){
  digitalWrite(D13, LOW);
  digitalWrite(D12, HIGH);
  digitalWrite(D11, LOW);
  digitalWrite(D10, LOW);
}
// Üç yazdıran fonksiyon 
void ucYaz(){
  digitalWrite(D13, HIGH);
  digitalWrite(D12, HIGH);
  digitalWrite(D11, LOW);
  digitalWrite(D10, LOW);
}
//Dört yazdıran fonksiyon 
void dortYaz(){
  digitalWrite(D13, LOW);
  digitalWrite(D12, LOW);
  digitalWrite(D11, HIGH);
  digitalWrite(D10, LOW);
}
// Beş yazdıran fonksiyon 
void besYaz(){
  digitalWrite(D13, HIGH);
  digitalWrite(D12, LOW);
  digitalWrite(D11, HIGH);
  digitalWrite(D10, LOW);
}
// Altı yazdıran fonksiyon 
void altiYaz(){
  digitalWrite(D13, LOW);
  digitalWrite(D12, HIGH);
  digitalWrite(D11, HIGH);
  digitalWrite(D10, LOW);
}
// Yedi yazdıran fonksiyon 
void yediYaz(){
  digitalWrite(D13, HIGH);
  digitalWrite(D12, HIGH);
  digitalWrite(D11, HIGH);
  digitalWrite(D10, LOW);
}
// Sekiz yazdıran fonksiyon 
void sekizYaz(){
  digitalWrite(D13, LOW);
  digitalWrite(D12, LOW);
  digitalWrite(D11, LOW);
  digitalWrite(D10, HIGH);
}
// Dokuz yazdıran fonksiyon 
void dokuzYaz(){
  digitalWrite(D13, HIGH);
  digitalWrite(D12, LOW);
  digitalWrite(D11, LOW);
  digitalWrite(D10, HIGH);
}

