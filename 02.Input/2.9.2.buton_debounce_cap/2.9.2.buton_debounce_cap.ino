/*****************************************************************************
Programın Adı: Debounce azaltmak - Kapasitör kullanmak 

Programın Amacı: Debounce azlatmak için kullanılacak yöntemlerden
				 birisi olan buton uçlarına paralel kondansatör
                 bağlamaya gözlemlemek

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/dWBQ1UYY1Xv-292buton-debounce-cap/editel
      
******************************************************************************/

#include "deneyap.h"

const int buttonPin = D2;    
const int ledPin =  D13;     
boolean toggle = false; 
boolean buttonPressed = false; 

int debounce = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() 
{
	if(digitalRead(buttonPin) == HIGH)
    {
    	debounce++;
    }else
    {
    	debounce = 0;
      	buttonPressed = false;
      	toggle = false;
      
    }
  	if( debounce > 100)
    {
    	buttonPressed = true;
    }
  	if(buttonPressed == true && toggle == false)
    {
    	toggle = true;
      	ledDegistir();
    }

}
void ledDegistir()
{
	digitalWrite(ledPin,!digitalRead(ledPin));
}