 /*****************************************************************************
Programın Adı Buton  Kullanarak millis fonksiyonu ile 
					iki ledi yakıp sönsürme

Programın Amacı: Bir led düzenli çalışırken bağımsız olarak
				 diğer ledin çalışmasını butonla kontroletme

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/6a50xlKPguV-255milis-2-buton-2-led/editel

******************************************************************************/

#include "deneyap.h"

int ledKirmizi = 13; 
int ledYesil = 12;
int button = 2; 

bool ledDurum = true;
unsigned long ilkZaman = 0;
unsigned long sonZaman;
void setup()
{
  pinMode(ledKirmizi, OUTPUT); 
  pinMode(ledYesil, OUTPUT); 
  pinMode(button, INPUT); 
    
  Serial.begin(9600);
}

void loop(){
  
  sonZaman = millis();

  if (sonZaman - ilkZaman > 100){
 
  	ilkZaman = millis();
    ledDurum = !ledDurum;
    digitalWrite(ledKirmizi, ledDurum);
  }
  digitalRead(button)? digitalWrite(ledYesil,LOW):digitalWrite(ledYesil,HIGH);
  
  Serial.println(ledDurum);

}


