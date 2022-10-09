/*****************************************************************************
Programın Adı:  LCD Sayaç

Programın Amacı:  LCD ekran üzerinde saydırma işleminin nasıl
				  yapıldığını öğrenmek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/0z6naOAGkiz-234sayaclcd0-99/editel
      
******************************************************************************/

#include "deneyap.h"

#include <LiquidCrystal.h>

int iSayac = 0;

const int UP=8;
const int DOWN=9;
const int rs=6;
const int enable=7;
const int d4=2;
const int d5=3;
const int d6=4;
const int d7=5;
const int colonne=16;
const int righe=2;
int C=0;
LiquidCrystal lcd(rs, enable, d4,d5,d6,d7);

void setup() 
{
  for(int i=2;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
  for(int j=8;j<11;j++)
  {
    pinMode(j, OUTPUT);
  }

  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("COUNTER: ");
  lcd.print(C);
}

void loop() 
{
  
 
  if(digitalRead(8)==HIGH||digitalRead(9)==HIGH || digitalRead(10)==HIGH)
  {
     if(digitalRead(8)==HIGH)
        iSayac++;    
     else
        iSayac--;
     if(iSayac==100)
        iSayac=99;
     if(iSayac==-1)
        iSayac=0;
    
     if(digitalRead(10)==HIGH)
      	iSayac=0;
    
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("COUNTER: ");
     lcd.print(iSayac);
     while(digitalRead(8)==HIGH||digitalRead(9)==HIGH)
        delay(10);
  }
 
}