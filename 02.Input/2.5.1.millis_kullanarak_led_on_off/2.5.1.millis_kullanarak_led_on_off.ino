/*****************************************************************************
Programın Adı:millis fonksiyonunun kullanımını öğrenmek

Programın Amacı: nillis fonksiyonunu ile bir ledi yakı söndürme

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/2i6vNdcZR0X-251tek-ledi-yakip-sondurme-tek-gecikme/editel

******************************************************************************/

#include "deneyap.h"

unsigned long bekleme=1000;  
unsigned long ilkZaman=0;  
 
bool ledDurum = false;  
 
void setup() {
 pinMode(13, OUTPUT);
 digitalWrite(13, ledDurum);
}
 
void loop() 
{
 unsigned long sonZaman = millis();  
 
 if ((unsigned long)(sonZaman - ilkZaman) >= bekleme) {
  
   ledDurum  = !ledDurum ;  
   digitalWrite(13, ledDurum);  
   ilkZaman = millis();
 }
}
