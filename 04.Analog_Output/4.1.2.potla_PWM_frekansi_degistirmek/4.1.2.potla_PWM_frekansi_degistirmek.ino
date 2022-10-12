/*****************************************************************************
Programın Adı: Pota bağlı olarak PWM frekansı değiştirmek 

Programın Amacı:  


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022
       
Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/1DPw5QEWbTp-412potla-pwm-frekansi-degistirmek/editel
      
******************************************************************************/

#include "deneyap.h"

int pot = A0;
int led = D5;

void setup(){
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int pot_value = analogRead(pot);
  int brightness = map(pot_value, 0, 1023, 0, 255);
  Serial.println(brightness);
  analogWrite(led, brightness);
  
}
    