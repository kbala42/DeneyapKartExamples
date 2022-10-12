/*****************************************************************************
Programın Adı:  PWM dalgasının değişimini şekle bağlı olarak ölçme

Programın Amacı:  PWM Dalgasının değişimini osiloskop üzerinde gözleme,
				  değişime bağlı olarak ölçüm değerinin değiştiğini görmek



Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/cy6SWgnNvaO-411pwm-measurement/editel
      
******************************************************************************/

#include "deneyap.h"

void setup()
{
  pinMode(D11, OUTPUT);
}

void loop()
{
  static int pwm = 0;
  if(pwm > 255) pwm = 0;
  analogWrite(D11, pwm++);
  delay(10);
}