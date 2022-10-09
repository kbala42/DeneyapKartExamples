/*****************************************************************************
Programın Adı:  Röle çalışması

Programın Amacı: Rölenin çalışmasını öğrenme 


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/3MPEHQJTE8F-1131relay-and-bulb/editel
      
******************************************************************************/

#include "deneyap.h"

int relayPin=13;

void setup()
{
   pinMode(relayPin,OUTPUT);  
}

void loop()
{

	digitalWrite(relayPin,HIGH);
  	delay(5000);
	digitalWrite(relayPin,LOW);
  	delay(1000);
 
}