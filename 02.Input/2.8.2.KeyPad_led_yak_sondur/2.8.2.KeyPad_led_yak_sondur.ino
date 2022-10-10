/*****************************************************************************
Programın Adı:  Keypad ile led yakıp söndürmek

Programın Amacı:  keypad 1 ve 0 tuşlarını kullanarak 
				bir ledi yakıp söndürmek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/akIPy0SHjaT-282keypad/editel
      
******************************************************************************/

#include "deneyap.h"

#include<Keypad.h>
#define ROWS 4 
#define COLS 4
char mapKeys[ROWS][COLS] = {
                              {'1', '2', '3', 'A'},
                              {'4', '5', '6', 'B'},
                              {'7', '8', '9', 'C'},
                              {'*', '0', '#', 'D'}
                            };
byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 
Keypad kpd = Keypad(makeKeymap(mapKeys), rowPins, colPins, ROWS, COLS); 
  
void setup()
{
  Serial.begin(9600);
}
  
void loop()
{
  char key = kpd.getKey();
  if (key)
  {
    Serial.println(key);
    if (key == '1')
      digitalWrite(13,1);
    if (key == '0')
      digitalWrite(13,0);
  }
}
