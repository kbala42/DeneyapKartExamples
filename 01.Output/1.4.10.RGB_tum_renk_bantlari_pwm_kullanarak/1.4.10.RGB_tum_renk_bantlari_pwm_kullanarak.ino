/*****************************************************************************
Programın Adı: Analog Çıkıla RGB bütün renk bant elde eden program                                                                                                                                                                                                                                                                                                                                     
Programın Amacı: Analog çıkış kullanarak RGB ledle bütün 
				renk bandını PWM modülastonu kullanarak elde etmek

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/f0dKQcMfoh4-149-rgb-tum-renk-bantlari/editel

******************************************************************************/

#include "deneyap.h"

// Analog çıkış olarak kullanacağımız pinleri çıkış olarak atıyoruz
void setup() {
  
  // D0 -> RGB ledin kırmızı led bacağına bağlıyoruz
  // D1 -> RGB ledin yeşil led bacağına bağlıyoruz
  // D2 -> RGB ledin maviled bacağına bağlıyoruz

  ledcSetup(0, 5000,8); // kanal 0, led frekansı 5000, 8 bit çözünürlüğünde
  ledcSetup(1, 5000,8); // kanal 1, led frekansı 5000, 8 bit çözünürlüğünde
  ledcSetup(2, 5000,8); // kanal 2, led frekansı 5000, 8 bit çözünürlüğünde
  ledcAttachPin(D0, 0); // D0 kırmızı 0 kanala iliştiriliyor
  ledcAttachPin(D1, 1); // D1 yeşi 1 kanala iliştiriliyor
  ledcAttachPin(D2, 2); // D2 mavi 2 kanala iliştiriliyor


}

void loop() {
  
  for(int iMavi=0;iMavi<256;iMavi++)
  {
    for(int iYesil=0;iYesil<256;iYesil++)
    {
      for(int iKirmizi=0;iKirmizi<256;iKirmizi++)
      {
        // Tüm kombinasyonlarda ışık elde ediyoruz
        ledcWrite(D0, iKirmizi);
        ledcWrite(D2, iMavi);
        ledcWrite(D1, iYesil);
        delay(1);// 1 ms sağlıyoruz    
      }
    }
  }
  delay(1000);// 1000 ms gecikme sağlıyoruz 
}
