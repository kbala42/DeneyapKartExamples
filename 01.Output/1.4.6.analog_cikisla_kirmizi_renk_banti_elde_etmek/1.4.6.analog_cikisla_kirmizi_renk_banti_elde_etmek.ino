/*****************************************************************************
Programın Adı: Analog Çıkıla RGB kırmızı renk bant elde eden program                                                                                                                                                               

Programın Amacı: Analog çıkış kullanarak RGB ledle kırmızı 
				renk bandını elde etmek

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/8VyT9WFc7dY-146-analog-cikila-rgb-kirmizi-renk-bant-elde-etmek/editel

******************************************************************************/

#include "deneyap.h"
#include "analogWrite.h"

// Analog çıkış olarak kullanacağımız pinleri çıkış olarak atıyoruz
void setup() {
  
  // D0 -> RGB ledin kırmızı led bacağına bağlıyoruz
  // D1 -> RGB ledin yeşil led bacağına bağlıyoruz
  // D2 -> RGB ledin maviled bacağına bağlıyoruz

  analogWriteChannel(D0);
  analogWriteChannel(D1);
  analogWriteChannel(D2);  

}

void loop() {
  
  for(int iKirmizi=0;iKirmizi<256;iKirmizi++)
  {
    // Kırmızı ışık bandını elde ediyoruz
    analogWrite(D0, iKirmizi);
    analogWrite(D1, 0);
    analogWrite(D2, 0);
    delay(10);// 10 ms sağlıyoruz     
  }
  
}
