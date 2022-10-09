/*****************************************************************************
Programın Adı:  Keypad çıkışlarını okuma

Programın Amacı:  Keypad tuşlarına basıldığında serial çıkıştan
				okumak


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/eQFLKH4ZClV-281keypadserimonitor/editel
      
******************************************************************************/

#include "deneyap.h"

#include <Keypad.h>
const byte ROWS = 4; // satırları 4 olarak tanımlıyoruz
const byte COLS = 4; // sütunları 4 olarak tanımlıyoruz

// Klavye haritasını tanımlıyoruz
char keys[ROWS][COLS] = {
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = { 9, 8, 7, 6 }; // satır pinleri 0,1,2,3.
byte colPins[COLS] = { 5, 4, 3, 2}; // sütun pinleri 0,1,2,3
// kalvyeyi oluşturuyoruz
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
}

void loop(){
  char key = kpd.getKey();
  
  if (key){
    Serial.println(key);
  }
 
}