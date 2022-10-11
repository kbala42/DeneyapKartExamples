/*****************************************************************************
Programın Adı:  Debounce azlatmak - Millis fonksiyonu kullanarak

Programın Amacı:  Millis fonksiyonu kullanarak debounce nasıl
				  kaldırabileceğimizi görmek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/2oTUK241biK-294buton-millis/editel
      
******************************************************************************/

#include "deneyap.h"

const int buttonPin = D2;  //This is the buttons read pin
const int ledPin = D13;    // This is the LED output pin

int ledState = HIGH;      //Variable for current LED state
int buttonState;          //Variable for current button reading
int lastButtonState = LOW;//Variable for last know button reading

unsigned long lastDebounceTime = 0; //last time the pin was toggled, used to keep track of time
unsigned long debounceDelay = 50;   //the debounce time which user sets prior to run

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);
}

void loop() {
  //read the button pin, if pressed will be high, if not pressed will be low
  int reading = digitalRead(buttonPin);
  //in the case that the reading is not equal to the last state set the last debounce time to current millis time
  if (reading != lastButtonState)  {
    lastDebounceTime = millis();
  }
  //check the difference between current time and last registered button press time, if it's greater than user defined delay then change the LED state as it's not a bounce
  if ((millis()-lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;
    if (buttonState == HIGH) {
      ledState = !ledState;
      }
    }
  }
  //set the LED
  digitalWrite(ledPin, ledState);

  //save the reading. next time through the loop the state of the reading will be known as the lastButtonState
  lastButtonState = reading;
}