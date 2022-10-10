/*****************************************************************************
Programın Adı:  Uzakığa bağlı olarak girişe izin vermek

Programın Amacı:  Uzaklık belli bir değerin üzerinde ise (doğru yerde)
				 girişe izin vermek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/7Gp9wK9dydu-286keypadsifreuyari/editel
      
******************************************************************************/

#include "deneyap.h"

int Distance = 0;

int GreenLED = 0;

int Button = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(3, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);
}

void loop()
{
  GreenLED = digitalRead(3);
  Distance = 0.01723 * readUltrasonicDistance(A0, A0);
  Serial.println(Distance);
  
  if (Distance > 100) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  } else {
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  }
  
  if (GreenLED == HIGH) {
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(10, LOW);
    // Column 1
    if (digitalRead(9) == LOW) {
      digitalWrite(13, HIGH);
    }
    if (digitalRead(9) == HIGH) {
      Button = 11;
    }
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    if (digitalRead(9) == HIGH) {
      Button = 21;
    }
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    if (digitalRead(9) == HIGH) {
      Button = 31;
    }
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    if (digitalRead(9) == HIGH) {
      Button = 41;
    }
    digitalWrite(10, LOW);
    // Column 2
    if (digitalRead(8) == LOW) {
      digitalWrite(13, HIGH);
      if (digitalRead(8) == HIGH) {
        Button = 12;
      }
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      if (digitalRead(8) == HIGH) {
        Button = 22;
      }
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      if (digitalRead(8) == HIGH) {
        Button = 32;
      }
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      if (digitalRead(8) == HIGH) {
        Button = 42;
      }
      digitalWrite(10, LOW);
      // Column 3
      if (digitalRead(7) == LOW) {
        digitalWrite(13, HIGH);
      }
      if (digitalRead(7) == HIGH) {
        Button = 13;
      }
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      if (digitalRead(7) == HIGH) {
        Button = 23;
      }
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      if (digitalRead(7) == HIGH) {
        Button = 33;
      }
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      if (digitalRead(7) == HIGH) {
        Button = 43;
      }
      digitalWrite(10, LOW);
      // Column 4
      if (digitalRead(6) == LOW) {
        digitalWrite(13, HIGH);
      }
      if (digitalRead(6) == HIGH) {
        Button = 14;
      }
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      if (digitalRead(6) == HIGH) {
        Button = 24;
      }
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      if (digitalRead(6) == HIGH) {
        Button = 34;
      }
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      if (digitalRead(6) == HIGH) {
        Button = 44;
      }
      digitalWrite(10, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
      if (Button > 0) {
        Serial.println(Button);
        Button = 0;
      }
    }
  }
}