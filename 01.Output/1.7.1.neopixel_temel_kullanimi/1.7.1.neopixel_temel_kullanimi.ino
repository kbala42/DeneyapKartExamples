/*****************************************************************************
Programın Adı: Neopixel temel kullanımı 

Programın Amacı:  Neopixel temel kullanımını öğrenmek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/fCiHz3QkhP6-171neopixel-temel-kullanimi/editel

******************************************************************************/

#include "deneyap.h"

#include <Adafruit_NeoPixel.h>
#define pin 3
#define pikselsayisi 1
 
Adafruit_NeoPixel tekpiksel = Adafruit_NeoPixel(pikselsayisi, pin, NEO_GRB + NEO_KHZ800);
 

//Adafruit_NeoPixel () sınıfı bir nesne oluşturucu ve NeoPixel 
//renk, parlaklık ve başlatma üzerinde denetim sağlayan çeşitli 
//yöntemler içerir. 

// noe_grb koblolu led tipleri için kullanılır
//neokhz800 NeoPixel ürünleri W/WS2812 LED'ler)
 
void setup() {
  tekpiksel.setBrightness(500); //Parlaklık
  tekpiksel.begin();  // pikseli başlatıyorz

}
 
void loop() {
 tekpiksel.setPixelColor(0,tekpiksel.Color(255,0,0));
 tekpiksel.show();
 delay(1000);
 tekpiksel.setPixelColor(0,tekpiksel.Color(0,255,0));
 tekpiksel.show();
 delay(1000);
 tekpiksel.setPixelColor(0,tekpiksel.Color(0,0,255)); 
 tekpiksel.show();
 delay(1000);
// ve show diyerek pixellerimize güç veriyoruz ledlerimiz yanıyor.

}