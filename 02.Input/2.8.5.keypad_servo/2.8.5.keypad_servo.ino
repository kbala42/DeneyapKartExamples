/*****************************************************************************
Programın Adı:  Şifre doğru girişmişse kapıyı açmak

Programın Amacı:Şifreyi doğrulamak,
				şifre doğru girilmişse kapıyı açmak
                Toşla kapıyı kapatmak


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/iNVD0aqHxKg-285keypadservo/editel
      
******************************************************************************/

#include "deneyap.h"

// === Includes ===
#include <Keypad.h>
// #include <Servo.h>

#include <ESP32Servo.h>
//Servo myservo;  


/* ===== *
 * Keypad
 * ===== */
// === Constants ===
const byte numDigits = 4;
const char password[numDigits] = {'1','2','3','4'};

const byte ROWS = 4; 
const byte COLS = 4;

// === Variables ===
char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}};

byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
char customKey;


/* ===== *
 * Global
 * ===== */
// === Constants ===
const int servo_pin = 10; 
const int ledG_pin = 11;
const int ledB_pin = 12;
const int ledR_pin = 13;

const int doorClosed = 0;
const int doorOpen = 90;
const int loopDelay = 100;

// === Variables ===
Servo myServo;

char keysPressed[numDigits];
byte keysIndex = 0;


void setup()
{
  Serial.begin(9600);
  
  myServo.attach(servo_pin);
  
  pinMode(ledR_pin, OUTPUT);
  pinMode(ledG_pin, OUTPUT);
  pinMode(ledB_pin, OUTPUT);
  
  CloseDoor();
}


void loop()
{
  customKey = customKeypad.getKey();
  
  if (customKey)
  {
    if (customKey == '#')
    {
      Serial.println(customKey);
      keysIndex = 0;
    }
    else if (customKey == 'C')
    {
      Serial.println(customKey);
      CloseDoor();
      keysIndex = 0;
    }
    else
    {
      Serial.print(customKey);
      keysPressed[keysIndex] = customKey;
      keysIndex++;
    }
    
    if (keysIndex >= 4)
    {
      Serial.println("");
      CheckCode();
      keysIndex = 0;
    }
  }
  
  delay(loopDelay);
}


void OpenDoor()
{
  LedsOff();
  
  // Start opening door
  myServo.write(doorOpen);
  
  // Blink orange
  BlinkOrange();
  
  // Set light to Green
  digitalWrite(ledG_pin, HIGH);
}


void CloseDoor()
{
  LedsOff();
  
  // Start closing door
  myServo.write(doorClosed);
  
  // Blink orange
  BlinkOrange();
  
  // Set light to Red
  digitalWrite(ledR_pin, HIGH);
}


void LedsOff()
{
  digitalWrite(ledR_pin, LOW);
  digitalWrite(ledG_pin, LOW);
  digitalWrite(ledB_pin, LOW);
}


void BlinkOrange()
{
  digitalWrite(ledR_pin, LOW);
  digitalWrite(ledG_pin, LOW);
  delay(500);
  
  for (int i = 0; i<3; i++)
  {
    digitalWrite(ledR_pin, HIGH);
    analogWrite(ledG_pin, 100);
    delay(500);

    digitalWrite(ledR_pin, LOW);
    digitalWrite(ledG_pin, LOW);
    delay(500);
  }
}


void CheckCode()
{
  for (int i=0; i<numDigits; i++)
  {
    if (keysPressed[i] != password[i])
    {
      Serial.println("Failed");
      return;
    }
  }
  Serial.println("Success");
  OpenDoor();
}
