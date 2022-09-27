/*****************************************************************************
Programın Adı: Buton basıldğında ledin yanması, buton basıldığında söndürülmesi                                                                                                                                                          

Programın Amacı: Buton basıldığında ledin sürekli yanmasının sağlanması, 
				 butona basıldığında ledin sürekli sönmesinin sağlanması

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/fsS04WtYE3J-213buton-bas-ledi-yak-buton-bas-ledi-sondur-muhurleme/editel

******************************************************************************/

#include "deneyap.h"

//butona bas ledi yak, butona bas ledi sondur 
int ledDurum = 0;//Ledin durumunu saklamak için değişken
int butonDurum = 0;//Butonunun durumunu saklamak için değişken
int bayrak = 0;// bayrak durumunu saklamak için değişken 
int Led = D13; // Led pinini D13 olarak atıyoruz
void setup()
{
  pinMode(D12, INPUT);// 12. pini giriş olarak atıyoruz
  pinMode(D13, OUTPUT);// 13. pini giriş olarak atıyoruz
}

void loop()
{
  butonDurum = digitalRead(D12);// 12.pinin (butonun) durumunu okuyoruz
  if (butonDurum == 1 && bayrak == 0) {//Butona basılı ve bayrak 0 ise
    
    if (ledDurum == 0) {// Led yanmıyorsa
      ledDurum = 1;//Ledin durumunu 1 yapıyoruz
    } else {// Led yanıyorsa
      ledDurum = 0;//ledin durumunu 0 yapıyoruz
      
    }
    bayrak = 1;//bayrağı 1 yapıyoruz
  }
  if (ledDurum == 1) {//Ledin durumu 1 ise
    digitalWrite(D13, HIGH);// Ledi yakıyoruz
  } else { // Ledin durumu 1 ise
    digitalWrite(D13, LOW);// Ledi söndürüyoruz
  }
  if (butonDurum == 0 && bayrak == 1) {//buton basılı degil ise ve bayrak 1 ise
    bayrak = 0;//bayrak 0 yap
  }
  delay(10);//butonu mekanik salınımı için gecikme
}

