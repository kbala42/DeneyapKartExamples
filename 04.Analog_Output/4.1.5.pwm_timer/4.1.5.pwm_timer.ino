/*****************************************************************************
Programın Adı:  Timer kullanarak PWM çıkışlarını izleme

Programın Amacı:  


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/jHSeVgW1AZW-415pwm-cikislarini-incelemek/editel
      
******************************************************************************/

#include "deneyap.h"
int Aux=0;

ISR(TIMER0_COMPA_vect){
 	Aux=analogRead(A0)/4;
 	if(Aux<1)Aux=10;
  	if(Aux>254)Aux=245;
  	OCR0A=Aux;
  	OCR0B=Aux;
}
  
void setup()
{
 	cli();
 	DDRD   = 0b01100000;
  	TCCR0A = _BV(COM0A1) | _BV(COM0B1)| _BV(COM0B0)|_BV(WGM00);
  	TCCR0B = _BV(CS00);
  	TIMSK0 = 0b00000010;
	sei();  
}

void loop()
{
}