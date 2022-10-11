/*****************************************************************************
Programın Adı:  Pot ile Neopixel Kontrolü

Programın Amacı: Potun değerine göre neopixel renk ayarını öğrenmek  


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/0aVRt8c7MTi-315pot-neopixel/editel
      
******************************************************************************/

#include "deneyap.h"

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

//Pino de dados da matriz de led
#define PIN 7

//Parametros: numero de leds, pino de ligacao
Adafruit_NeoPixel strip=Adafruit_NeoPixel(12,PIN);

void setup()
{
  strip.begin();
  strip.show();
  //Define o brilho dos leds
  strip.setBrightness(50);
}

void loop()
{
  //Acende os leds na cor verde
  colorWipe(strip.Color(0, 255, 0), 3000);
   //Acende os leds na cor amarela
  colorWipe(strip.Color(255, 255, 0), 3000);
  //Acende os leds na cor vermelha
  colorWipe(strip.Color(255, 0, 0), 3000);

/*  //Pisca os leds alternadamente
  theaterChase(strip.Color(0, 255, 0), 50); // verde
  theaterChase(strip.Color(255, 255, 0), 50); // amarelo
  theaterChase(strip.Color(255, 0, 0), 50); // vermelho
  //Efeito arco-iris
*/	//rainbow(20);

}

void colorWipe(uint32_t c, uint8_t wait) 
{
  for (uint16_t i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }

}

void rainbow(uint8_t wait) 
{
/*  uint16_t i, j;
  for (j = 0; j < 256; j++) {
    for (i = 0; i < strip.numPixels(); i++) {
     strip.setPixelColor(i, Wheel((i + j) & 255));
    }
    strip.show();
  	delay(wait);
  }
 */ 
}


void theaterChase(uint32_t c, uint8_t wait) 
{
  for (int j = 0; j < 10; j++) { //do 10 cycles of chasing
    for (int q = 0; q < 3; q++) {
      for (int i = 0; i < strip.numPixels(); i = i + 3) {
        strip.setPixelColor(i + q, c);  //turn every third pixel on
      }
      strip.show();
      delay(wait);
      for (int i = 0; i < strip.numPixels(); i = i + 3) {
        strip.setPixelColor(i + q, 0);      //turn every third pixel off
      }
    }
  }
}

uint32_t Wheel(byte WheelPos) 
{
	 WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  
  if (WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
