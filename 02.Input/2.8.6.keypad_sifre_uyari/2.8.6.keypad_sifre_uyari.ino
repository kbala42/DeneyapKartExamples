/*****************************************************************************
Programın Adı:  Şifre doğrulamasına göre uyarı tonu değiştirmek

Programın Amacı:  Şifreyi kontrol etme,
			      doğru girilmişse giriş tonu
                  yanlış girilmişse giriş tonu üretmek



Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/7Gp9wK9dydu-286keypadsifreuyari/editel
      
******************************************************************************/

#include "deneyap.h"

#include <Keypad.h>

const byte row= 4;
const byte col= 4;
const int redLed= 10;
const int greenLed= 11;
const int piezo= 12;

char numPad[row][col] = {
  {'1', '2', '3'},{'4', '5', '6'},
  {'7', '8', '9'},{'*', '0', '#'}
};

byte rowPin[row] = {9, 8, 7, 6}; 
byte colPin[col] = {5, 4, 3, 2}; 

String password = "6556";
String vstup = "";

Keypad cKeypad = Keypad(makeKeymap(numPad), rowPin, colPin, row, col); 

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(piezo, OUTPUT);
  digitalWrite(redLed,HIGH);
  Serial.begin(9600);
  Serial.print("Sifreyi giriniz: ");
}

void loop()
{
  char cKey= cKeypad.getKey();
  
  if (cKey){
    if(vstup.length() < 4) {
      Serial.print("*");
      vstup += cKey;
    }
  }

  if(vstup.length() == 4) {
    delay(1500);
    if(password == vstup) {
      Serial.println("\nOnaylandi");
      digitalWrite(redLed,LOW);
      digitalWrite(greenLed,HIGH);
      tone(piezo,500);
      delay(100);
      noTone(piezo);
    } else {
      Serial.println("\nSifre yanlis");
      digitalWrite(redLed,HIGH);
      digitalWrite(greenLed,LOW);
      tone(piezo,1000);
      delay(800);
      tone(piezo,1000);
      delay(800);
      noTone(piezo);
    }
     delay(1500);
     vstup = "";
     Serial.println("Sifre giriniz: ");
     digitalWrite(redLed,HIGH);
     digitalWrite(greenLed,LOW);
  }
}