/*****************************************************************************
Programın Adı: Debounce azaltmak için  if if sorgusu

Programın Amacı:  Mekanik sönümün yaklaşık 20 ms olduğunu düşünerek
				  tetikleme yapmak


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/kuPni0cysFu-291buton-counter-debounce/editel
      
******************************************************************************/

#include "deneyap.h"

const int ledPin =D13;
const int buttonPin = D2;
boolean pressButton = false;
int count=0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, OUTPUT);
  
}
void loop()
{

  if (digitalRead(buttonPin) == true)
  {
    delay(20);
    if (digitalRead(buttonPin) == true)
    {
      count++;
    }
  }
  Serial.println(count);	
}