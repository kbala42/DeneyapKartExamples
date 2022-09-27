/*****************************************************************************
Programın Adı: Buton basıldğında ledin yanması, buton basıldığında söndürülmesi
               led toggle   
                                                                                                                                                       
Programın Amacı: Buton basıldığında ledin sürekli yanmasının sağlanması, 
				 butona basıldığında ledin sürekli sönmesinin sağlanması - toggle

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/fQhiTJ0KxSh-214buton-toogle/editel

******************************************************************************/

#include "deneyap.h"

int Led = D13; // Led pinini 13 olarak atıyoruz
int ledDurum = 0;
void setup()
{
  pinMode(D12, INPUT);// 12. pini giriş olarak atıyoruz
  pinMode(Led, OUTPUT);// 13. pini giriş olarak atıyoruz
  Serial.begin(9600);
}

void loop(){
  Serial.println(ledDurum);
  delay(1000);
  if(digitalRead(D12)== HIGH)//eger 12 pin HIGH ise
  {
    ledDurum = !ledDurum;
    digitalWrite(Led, ledDurum);
    
  } 
  delay(20);
  Serial.println(ledDurum);

}


