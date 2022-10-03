 /*****************************************************************************
Programın Adı:millis fonksiyonu iki ledi yakıp sönsürme

Programın Amacı: bmillis kullanrak iki ledin nasıl 
					yakılıp söndürüleceğini öğrenir

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/cgugx8Lft5B-253two-led-onoff-millis/editel

******************************************************************************/

#include "deneyap.h"

unsigned long oncekiZamanLED12=0;
unsigned long oncekiZamanLED13=0;
 int beklemeLED12 = 500;
int beklemeLED13 = 1000;
 
boolean LED13durum = false;     
boolean LED12durum = false;      
 
void setup() {
   pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
}
void loop() {
 
   unsigned long sonZaman = millis();
 
 
   if ((unsigned long)(sonZaman- oncekiZamanLED12) >= beklemeLED12) {
      LED12durum = !LED12durum;
      digitalWrite(12, LED12durum);
       
      oncekiZamanLED12 = sonZaman;
   }
 
 
  if ((unsigned long)(sonZaman- oncekiZamanLED13) >= beklemeLED13) {
      LED13durum = !LED13durum;
      digitalWrite(13, LED13durum);
 
      oncekiZamanLED13 = sonZaman;
  }
}
