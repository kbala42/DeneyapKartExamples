/*****************************************************************************
Programın Adı Loop döngü, harici kesme (Düşen kenar - Sade)

Programın Amacı: Loop döngüsüde harici kesme kullanımı (Yükselen kenar)

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/0oUCvrTovXH-2631led-loop-buton-ile-harici-kesme-sade/editel

******************************************************************************/

#include "deneyap.h"

volatile boolean ledDurum = false;

const int ledRed= 13;
const int ledGreen = 12;

const int interruptButton = 2;

void setup()
{
  pinMode(ledRed, OUTPUT); 
  pinMode(ledGreen, OUTPUT); 
  
  pinMode(interruptButton,INPUT);
  
  attachInterrupt(0, buttonDurum, FALLING);
}

void loop()
{
  digitalWrite(ledRed, HIGH);
  delay(5000);
  digitalWrite(ledRed, LOW);
  delay(5000);  

}

void buttonDurum()
{ 
    ledDurum = !ledDurum;
    digitalWrite(ledGreen, ledDurum);

}