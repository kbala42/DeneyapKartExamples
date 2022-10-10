/*****************************************************************************
Programın Adı: Doğru şifre girdiğinde ledi yakmak 

Programın Amacı:  Doğru şifre girilip girilmediğini test ederek
				  doğru girildiğinde ledi yakmak


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022


Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/3gJjO5xaXwN-284-keypadsifreled/editel
      
******************************************************************************/

#include "deneyap.h"

#include <Keypad.h>

const int redLED = 10;
const byte ROWS = 4;
const byte COLS = 4;

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3' ,'A'},
  {'4', '5', '6' ,'B'},
  {'7', '8', '9' ,'C'},  
  {'*', '0', '#' ,'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad keypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

String password = "";

void setup() {
  pinMode(redLED,OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  char customKey = keypad.getKey();
  
 if(customKey){
    
   	if(customKey=='B'){
      digitalWrite(redLED,LOW);
      Serial.println(" Sifreyi girin");
      password = "";
    }  
   
  	else if(customKey=='C'){ //Şifreyi girmek için "C" tuşuna basın
      Serial.print(password);
      if(password=="7837436A"){
        digitalWrite(redLED,HIGH);
		Serial.println(" Sifreniz onaylandi");
      }
      else{
        digitalWrite(redLED,LOW);
        Serial.println(" Yanlis sifre tekrar giriniz");
      }
    password = "";
  }
      
  else{
   password += customKey;
  }
            
 }
}
