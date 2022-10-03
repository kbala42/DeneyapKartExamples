 /*****************************************************************************
Programın Adı Buton  Harici kesme ile sayaç

Programın Amacı: Harici kesme kullanarak sayaç yapmak

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/fpkw6QJTT2n-2613buton-ile-harici-kesme-rasingcounter/editel

******************************************************************************/

#include "deneyap.h"

volatile int sayac = 0;
const int ledPin= 13;
const int interruptButton = 2;

void setup()
{
  pinMode(ledPin, OUTPUT); 
  pinMode(interruptButton,INPUT);  
  attachInterrupt(0, sayacArttir, RISING);
  Serial.begin(9600);
}

void loop()
{

}

void sayacArttir()
{
  sayac++;
  digitalWrite(ledPin,HIGH);
  delay(1000);
  digitalWrite(ledPin,LOW);

  
  Serial.print("Sayac: ");
  Serial.println(sayac);
  
}
