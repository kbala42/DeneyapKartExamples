/*****************************************************************************
Programın Adı:  Basılan butonu LCD'den okumak

Programın Amacı: Basılan tuşu LCD'den okumak


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/7Gp9wK9dydu-286keypadsifreuyari/editel
      
******************************************************************************/

#include "deneyap.h"

#include <Keypad.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);

const byte numRows= 4; 
const byte numCols= 4; 


char keymap[numRows][numCols]=
{
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};


byte rowPins[numRows]= {9,8,7,6}; 
byte colPins[numCols]= {5,4,3,2}; 


Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);

void setup()
{
  	lcd.begin(16, 2);
  	lcd.clear();
}

void loop()
{
	char keypressed = myKeypad.getKey();
	if (keypressed)
		{
  			lcd.print(keypressed);
		}
}
