/*****************************************************************************
Programın Adı:  DC motor çalışması

Programın Amacı: Basit şekilde dcmotor çalışmasını öğrenme 


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022
       
Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/f90vKEGL1xA-1121potla-dc-calistirma/editel
      
******************************************************************************/

#include "deneyap.h"

void setup() {
   
  pinMode(9,OUTPUT);
}

void loop() {
  
  digitalWrite(9,HIGH);
  delay(5000);
  
  digitalWrite(9,HIGH);
  delay(1000);

  
}