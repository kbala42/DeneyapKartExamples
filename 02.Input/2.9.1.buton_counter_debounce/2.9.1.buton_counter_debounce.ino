/*****************************************************************************
Programın Adı:  Butonda ki titreşimi gözlemek 

Programın Amacı:  Buton açma ve kapatma sırasında oluşan
				 mekanik titreşimleri gözlemlemek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/kuPni0cysFu-291buton-counter-debounce/editel
      
******************************************************************************/

#include "deneyap.h"

const int buttonPin = D2;    
const int ledPin =  D13;     
int ledState = LOW;
boolean buttonState = LOW; 

int pressed=0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  Serial.println(pressed);
  Serial.println(digitalRead(buttonPin));
  
  if(digitalRead(buttonPin) == HIGH && buttonState == LOW)
  {
    pressed++;
    buttonState = HIGH;
  }
  else if(digitalRead(buttonPin) == HIGH && buttonState == HIGH)
  {
       buttonState = LOW;
  }
   if(pressed == 10)
  {
    digitalWrite(ledPin,HIGH);
  }

}
