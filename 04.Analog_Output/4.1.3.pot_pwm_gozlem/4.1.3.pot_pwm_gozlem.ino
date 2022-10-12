/*****************************************************************************
Programın Adı:  PWM frekansının değişimini voltmetre ve lcd'den izlemek

Programın Amacı:  


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022
       
Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/ksniMQfd9au-413pot-pwm-gozlem/editel
      
******************************************************************************/

#include "deneyap.h"

#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int leitura=0;
int velocidade = 6; // pino do led
int analog = A0;
float medida1=0;
float medida2=0;


void setup() {
  
 lcd.begin(16, 2); // Define número de colunas e linhas
 lcd.setCursor(0, 0);
 lcd.print("IFFAR SR 2020");
 delay(4000);
 lcd.clear();
}

void loop() {

 medida1 = analogRead(analog);
 medida2=(medida1/204);
 lcd.setCursor(9, 1);
 lcd.print("      ");
 lcd.setCursor(9, 1);
 lcd.print(medida2);
 analogWrite(velocidade, 795); 
// analogWrite(velocidade, medida1/ 4); 
 delay(500);

}















