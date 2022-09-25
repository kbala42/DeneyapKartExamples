/*****************************************************************************
Programın Adı: Analog Çıkıla RGB mavi renk bant elde eden program                                                                                                                                                                                                                                                                                                                                       
Programın Amacı: Analog çıkış kullanarak RGB ledle mavi 
				renk bandını elde etmek


Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/fODJwAKuHvu-148-rgb-mavi-renk-bandi/editel

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
  
  for(int iMavi=0;iMavi<256;iMavi++)
  {
    // Mavi ışık elde ediyoruz
    analogWrite(D0, 0);
    analogWrite(D1, iMavi);
    analogWrite(D2, 0);
    delay(10);// 10 ms sağlıyoruz     
  }

 

  
}
