/*****************************************************************************
Programın Adı: Analog Çıkıla RGB yeşil renk bant elde eden program                                                                                                                                                               

Programın Amacı: Analog çıkış kullanarak RGB ledle yeşil 
				renk bandını elde etmek


Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/iTWPd5YZjDm-147-rgb-yesi-renk-bant/editel

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
  
  for(int iYesil=0;iYesil<256;iYesil++)
  {
    // Yeşil ışık elde ediyoruz
    analogWrite(D0, 0);
    analogWrite(D1, 0);
    analogWrite(D2, iYesil);
    delay(10);// 10 ms sağlıyoruz     
  }

 

  
}