/*****************************************************************************
Programın Adı: Buton harici kesme inceleme - alıntı 

Programın Amacı:  Buton debounce için harici kesme kullanımını incelemek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/b8NWPaqgUZW-296buton-ile-harici-kesme-advanced/editel
      
******************************************************************************/

#include "deneyap.h"

//
//
//  This example and code is in the public domain and may be used without restriction and
//  without warranty.
//
// Exmple sketch - Button Switch Using An External Interrupt
// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// This sketch demonstrates the use of a simple button switch which is processed by
// an external interrupt process.  It presents a very different and alternative approach
// for associating a button switch to an interrupt.
//
// The sketch is designed such that button status is only flagged as 'switched' AFTER
// 1. button is pressed AND then released, AND
// 2. elapse of the debounce period AFTER release
//
// Note that the associated button interrupt handler function and the button_read()
// function work together - the interrupt handler starts the on/off process and the
// button_read() function completes/concludes it.  The interrupt handler can only restart AFTER
// button reading and debounce is complete.  This ensures that only one interrupt trigger is
// processed at a time.
//
// The button switch is wired in a standard configuration with a 10K ohm pull down resister which
// ensures the digital interrupt pin is kept LOW until the button switch is pressed and
// raises it to HIGH (+5v).
//
// Operation of the button is demonstrated by toggling the in built LED on and off.
//

#define LED_BUILTIN D13
#define LED LED_BUILTIN // digital pin connected to LED, for testing of switch code only
bool led_status = LOW; // start with LED off, for testing of switch code only

int     button_switch = D2; // external interrupt pin

#define switched true // value if the button switch has been pressed
#define triggered true // controls interrupt handler
#define interrupt_trigger_type RISING // interrupt triggered on a RISING input
#define debounce 10 // time to wait in milli secs

volatile  bool interrupt_process_status = {
  !triggered                                     // start with no switch press pending, ie false (!triggered)
};
bool initialisation_complete =            false; // inhibit any interrupts until initialisation is complete

//
// ISR for handling interrupt triggers arising from associated button switch
//
void button_interrupt_handler()
{
  if (initialisation_complete == true)
  { //  all variables are initialised so we are okay to continue to process this interrupt
    if (interrupt_process_status == !triggered) {
      // new interrupt so okay start a new button read process -
      // now need to wait for button release plus debounce period to elapse
      // this will be done in the button_read function
      if (digitalRead(button_switch) == HIGH) {
        // button pressed, so we can start the read on/off + debounce cycle wich will
        // be completed by the button_read() function.
        interrupt_process_status = triggered;  // keep this ISR 'quiet' until button read fully completed
      }
    }
  }
} // end of button_interrupt_handler

bool read_button() {
  int button_reading;
  // static variables because we need to retain old values between function calls
  static bool     switching_pending = false;
  static long int elapse_timer;
  if (interrupt_process_status == triggered) {
    // interrupt has been raised on this button so now need to complete
    // the button read process, ie wait until it has been released
    // and debounce time elapsed
    button_reading = digitalRead(button_switch);
    if (button_reading == HIGH) {
      // switch is pressed, so start/restart wait for button relealse, plus end of debounce process
      switching_pending = true;
      elapse_timer = millis(); // start elapse timing for debounce checking
    }
    if (switching_pending && button_reading == LOW) {
      // switch was pressed, now released, so check if debounce time elapsed
      if (millis() - elapse_timer >= debounce) {
        // dounce time elapsed, so switch press cycle complete
        switching_pending = false;             // reset for next button press interrupt cycle
        interrupt_process_status = !triggered; // reopen ISR for business now button on/off/debounce cycle complete
        return switched;                       // advise that switch has been pressed
      }
    }
  }
  return !switched; // either no press request or debounce period not elapsed
} // end of read_button function

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(button_switch, INPUT);
  attachInterrupt(digitalPinToInterrupt(button_switch),
                  button_interrupt_handler,
                  interrupt_trigger_type);
  initialisation_complete = true; // open interrupt processing for business
} // end of setup function

void loop() {
  // test buton switch and process if pressed
  if (read_button() == switched) {
    // button on/off cycle now complete, so flip LED between HIGH and LOW
    led_status = HIGH - led_status; // toggle state
    digitalWrite(LED, led_status);
  } else {
    // do other things....

  }
}