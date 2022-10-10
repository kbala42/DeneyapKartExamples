/*****************************************************************************
Programın Adı: Keypad ile led çıkışlarını kontrol etmek 

Programın Amacı:  Kepad ile farklı led çıkışlarını kontrol etmek
				  Keypad'te analog girişleri/çıkışları kullanmak


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022
       
Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/cID3EAOJADZ-283keypadleds-/editel
      
******************************************************************************/

#include "deneyap.h"

#include <Keypad.h>

byte LED1 = 2;
byte LED2 = 3;
byte LED3 = 4;
byte LED4 = 5;
byte LED5 = 6;
byte LED6 = 7;
byte LED7 = 8;
byte LED8 = 9;
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
char keys[ROWS][COLS] = {
 {'1','2','3','A'},
 {'4','5','6','B'}, 
 {'7','8','9','C'},
 {'*','0','#','D'}
};
byte rowPins[ROWS] = {A3, A2, A1, A0};
byte colPins[COLS] = {13, 12, 11, 10};
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


void setup(){
  Serial.begin(115200); 
 pinMode(LED1,OUTPUT);
 pinMode(LED2,OUTPUT);
 pinMode(LED3,OUTPUT);
 pinMode(LED4,OUTPUT);
 pinMode(LED5,OUTPUT);
 pinMode(LED6,OUTPUT);
 pinMode(LED7,OUTPUT);
 pinMode(LED8,OUTPUT);

}
void loop(){
  
  char Key;
    
  Key = keypad.getKey();  
  if(Key != NO_KEY){ 
     Serial.println(Key);
  	  if(Key == '1'){   
       digitalWrite(LED1,!digitalRead(LED1));
  }
     else if(Key == '2'){
        digitalWrite(LED2,!digitalRead(LED2));  
  }
     else if(Key == '3'){
        digitalWrite(LED3,!digitalRead(LED3));  
  }
     else if(Key == '4'){
        digitalWrite(LED4,!digitalRead(LED4));  
  }
     else if(Key == '5'){
        digitalWrite(LED5,!digitalRead(LED5));  
  }
     else if(Key == '6'){
        digitalWrite(LED6,!digitalRead(LED6));  
  }
     else if(Key == '7'){
        digitalWrite(LED7,!digitalRead(LED7));  
  }
     else if(Key == '8'){
        digitalWrite(LED8,!digitalRead(LED8));      
  }
      else if(Key == 'A'){
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
        digitalWrite(LED5, LOW);
        digitalWrite(LED6, LOW);
        digitalWrite(LED7, LOW);
        digitalWrite(LED8, LOW);
  }
     else if(Key == 'B'){
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED3, HIGH);
        digitalWrite(LED4, HIGH);
        digitalWrite(LED5, HIGH);
        digitalWrite(LED6, HIGH);
        digitalWrite(LED7, HIGH);
        digitalWrite(LED8, HIGH);
   }  
       else if(Key == 'C'){
        digitalWrite(LED1, HIGH);
        delay(800);
        digitalWrite(LED1, LOW);
        delay(800);
        digitalWrite(LED1, HIGH);
        delay(800);
        digitalWrite(LED1, LOW);
        delay(800);
  }
     else if(Key == 'D'){
       while(1){
       	digitalWrite(LED1, HIGH);
        delay(100);
        digitalWrite(LED1, LOW);
        delay(100);
          Key = keypad.getKey();  
           if(Key != NO_KEY){ 
            Serial.println(Key);
             if(Key == '#'){
               Serial.println("exit");
               break;
            }
              
           }
       
       } //end while
     }
  }
 }

