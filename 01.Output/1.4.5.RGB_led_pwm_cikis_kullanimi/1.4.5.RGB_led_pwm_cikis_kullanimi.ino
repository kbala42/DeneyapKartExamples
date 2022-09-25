/*****************************************************************************
Programın Adı: Analog çıkışla Ana RGB renkleri

Programın Amacı: Analog çıkışı kullanarak değişik renkler elde etmek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/cqCpD0SaXUF-145rgb-led-analog/editel

******************************************************************************/

#include "deneyap.h"
#include "analogWrite.h"

void setup()
{
  // D0 -> RGB ledin kırmızı led bacağına bağlıyoruz
  // D1 -> RGB ledin yeşil led bacağına bağlıyoruz
  // D2 -> RGB ledin maviled bacağına bağlıyoruz

  analogWriteChannel(D0);
  analogWriteChannel(D1);
  analogWriteChannel(D2);
  
}

void loop()
{
  // Analog çıkışlar 0255 değerler verir
  
  analogWrite(D0, 255); // Kırmızı renk
  analogWrite(D1, 0);
  analogWrite(D2, 0);
  delay(1000); // Wait for 1000 millisecond(s)

  analogWrite(D0, 153);
  analogWrite(D1, 153);
  analogWrite(D2, 255);
  delay(1000); // Wait for 1000 millisecond(s)
}
