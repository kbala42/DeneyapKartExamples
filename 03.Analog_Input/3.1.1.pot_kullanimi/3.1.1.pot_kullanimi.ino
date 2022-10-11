  /*****************************************************************************
Programın Adı Potonsiyometre kullanımı

Programın Amacı: Potosiyometre kullanımını öğrenmek

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/4aRiqCyoxrX-glorious-jarv/editel?tenant=circuits

******************************************************************************/

#include "deneyap.h"

int potValue=0;

void setup() {
  
   pinMode(A0, INPUT);
   Serial.begin(9600);
   Serial.println("Degerleri anlik okuyoruz.........");

}

void loop() {

   potValue=analogRead(A0);
   Serial.print("Okunana deger: ");
   Serial.println(potValue);
   delay(500);

}

