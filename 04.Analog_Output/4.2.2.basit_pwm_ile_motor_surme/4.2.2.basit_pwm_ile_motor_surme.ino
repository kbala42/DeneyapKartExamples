/*****************************************************************************
Programın Adı:  PWM kullanarak basit bir motor sürmek 

Programın Amacı: Yalnızca pwm çıkışını ve transistör kullanrak
				 dc motor sürmek. Motor güç kaynağı için harici 
                 kaynak kullanıyoruz. Böylece doğruda motoru sürmeye göre
                 Arduino'dan çok az akım çektiğimizi görüyoruz


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022
       
Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/9lrmBCaQWzz-422basit-pwm-ile-motor-surme/editel
      
******************************************************************************/

#include "deneyap.h"

void setup()
{
  pinMode(D3, OUTPUT);
}

void loop()
{
  analogWrite(D3,225);
}