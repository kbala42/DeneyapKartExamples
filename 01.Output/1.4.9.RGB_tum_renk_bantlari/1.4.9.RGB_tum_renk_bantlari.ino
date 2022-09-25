/*****************************************************************************
Programın Adı: Analog Çıkıla RGB bütün renk bant elde eden program                                                                                                                                                                                                                                                                                                                                     
Programın Amacı: Analog çıkış kullanarak RGB ledle bütün 
				renk bandını elde etmek

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/f0dKQcMfoh4-149-rgb-tum-renk-bantlari/editel

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
    for(int iYesil=0;iYesil<256;iYesil++)
    {
      for(int iKirmizi=0;iKirmizi<256;iKirmizi++)
      {
        // Tüm kombinasyonlarda ışık elde ediyoruz
        analogWrite(D0, iKirmizi);
        analogWrite(D1, iMavi);
        analogWrite(D2, iYesil);
        delay(1);// 1 ms sağlıyoruz    
      }
    }
  }
  delay(1000);// 1000 ms gecikme sağlıyoruz 
}
