/*****************************************************************************
Programın Adı: Butonlarla hız motor kontrolü

Programın Amacı: Butonlarla dc motorun hız arttırıp azaltmak


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022


Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/eMQKQbAqzet-42pwm-regulacion-motor-dc/editel
      
******************************************************************************/

#include "deneyap.h"

#define LED 11
#define SUBIR 6		
#define BAJAR 7		

int valor=120;   


void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(SUBIR, INPUT_PULLUP);
  pinMode(BAJAR, INPUT_PULLUP);
}

void loop()
{
  analogWrite(LED, valor);
 
  if ((!digitalRead(SUBIR)) && (valor<=235) ) valor=valor+20;
  if ((!digitalRead(BAJAR)) && (valor>=20) ) valor=valor-20;

delay(100);
}