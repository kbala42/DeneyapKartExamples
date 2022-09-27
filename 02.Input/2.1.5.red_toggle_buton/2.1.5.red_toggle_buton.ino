/*****************************************************************************
Programın Adı: Buton basıldğında ledin yanması, buton basıldığında söndürülmesi                                                                                                                                                                                                                                                                                                
				Red toggle Buton

Programın Amacı: Buton basıldığında ledin sürekli yanmasının sağlanması, 
				 butona basıldığında ledin sürekli sönmesinin sağlanması

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/3rj4GIA0zoS-215red-led-toggle-button/editel

******************************************************************************/

#include "deneyap.h"

const unsigned int BUTTON_PIN = D7;
const unsigned int LED_PIN = D13;

int old_button_state = LOW;
int led_state = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  const int CURRENT_BUTTON_STATE = digitalRead(BUTTON_PIN);

  if (CURRENT_BUTTON_STATE != old_button_state &&
      CURRENT_BUTTON_STATE == HIGH)
  {
    led_state = (led_state == LOW ? HIGH : LOW);
    digitalWrite(LED_PIN, led_state);
    delay(50);
  }
  old_button_state = CURRENT_BUTTON_STATE;
  delay(20);
}