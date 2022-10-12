/*****************************************************************************
Programın Adı: PWM dalgası ile DC motor çalıştırmak

Programın Amacı: PWM frekansına bağlı üretilen voltajla
				 dc motor çalışmasını inceleme


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/0Fp16we200Y-42motor-pwm/editel
      
******************************************************************************/

#include "deneyap.h"

void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(5000);  
  digitalWrite(9, LOW);
  delay(1000); 
}
