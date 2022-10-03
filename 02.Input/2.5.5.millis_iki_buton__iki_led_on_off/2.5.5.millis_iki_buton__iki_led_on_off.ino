 /*****************************************************************************
Programın Adı İki buton ile millis fonksiyonu kullanımı

Programın Amacı: İki buton ile bağımsız olarak iki ledin 
				çalışmasını kontrol etme

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/0dyJw8SfIaK-254buton-milis-2-led/editel

******************************************************************************/

#include "deneyap.h"

int ledKirmizi = 13; 
int ledYesil = 12;
int btnKirmizi = 2; 
int btnYesil = 3; 

bool ledDurumKirmizi = 0;
unsigned long ilkZamanKirmizi = 0;
unsigned long sonZamanKirmizi;

// bool ledDurum = 0;
unsigned long ilkZamanYesil = 0;
unsigned long sonZamanYesil;

void setup()
{
  pinMode(ledKirmizi, OUTPUT); 
  pinMode(ledYesil, OUTPUT); 
  
  pinMode(btnKirmizi, INPUT); 
  pinMode(btnYesil, INPUT); 
    
  Serial.begin(9600);
}

void loop(){
  
  sonZamanKirmizi = millis();

  if (sonZamanKirmizi - ilkZamanKirmizi > 100){
 
  	ilkZamanKirmizi = millis();
    digitalRead(btnKirmizi)? digitalWrite(ledKirmizi,HIGH):digitalWrite(ledKirmizi,LOW);
    
  }

    
  sonZamanYesil = millis();

  if (sonZamanYesil - ilkZamanYesil > 100){
 
  	ilkZamanYesil = millis();
    digitalRead(btnYesil)? digitalWrite(ledYesil,HIGH):digitalWrite(ledYesil,LOW);
    
  }
  
  //Serial.println(ledDurum);

}


