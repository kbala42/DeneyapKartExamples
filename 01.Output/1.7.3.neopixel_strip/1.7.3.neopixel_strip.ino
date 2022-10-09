/*****************************************************************************
Programın Adı: Neopixel strip 

Programın Amacı:  


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/c0vWgipX58x-173neopixel-strip/editel

******************************************************************************/

#include "deneyap.h"

#include <Adafruit_NeoPixel.h>

#define PIN 2	 // input pin Neopixel is attached to

#define NUMPIXELS      12 // number of neopixels in Ring

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100; // timing delay

int redColor = 0;
int greenColor = 0;
int blueColor = 0;

void setup() {
  pixels.begin(); // Initializes the NeoPixel library.
//  Serial.begin(9600);
}

void loop() {
  setColor();

  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor)); // Moderately bright green color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);
    
    if (i == NUMPIXELS){
    	i = 0; // start all over again!
        setColor();
	  }

  }
}

// setColor()
// picks random values to set for RGB

void setColor(){
  redColor = random(0, 255);
  greenColor = random(0,255);
  blueColor = random(0, 255);
  Serial.print("red: ");
  Serial.println(redColor);
  Serial.print("green: ");
  Serial.println(greenColor);
  Serial.print("blue: ");
  Serial.println(blueColor);
  
}