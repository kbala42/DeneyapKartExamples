/*****************************************************************************
Programın Adı:Buzzer çalıştırma

Programın Amacı: Buzzer'ın nasıl çalıştığını öğrenmek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/bXFGK35k5cc-241buzzer-kontrolu/editel

******************************************************************************/

#include "deneyap.h"


// sabit tone ile buzzer çalıştırma

void setup(){
  pinMode(D8,OUTPUT);//8. pini çıkış olarak atıyoruz
}

void loop(){
  
  tone(D8,440);// tone fonksiyonu ile buzzer çalıştıyoruz

  delay(10);// 10 ms gecikme sağlıyoruz.

}