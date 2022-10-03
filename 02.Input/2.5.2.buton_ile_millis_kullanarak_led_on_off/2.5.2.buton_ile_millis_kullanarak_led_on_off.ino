/*****************************************************************************
Programın Adı:millis fonksiyonu ile buton kullanımını öğrenmek

Programın Amacı: buton kullanarak nillis fonksiyonunu ile 
				bir ledi yakı söndürme

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/03Q2uER2eTA-252buton-toogle-milis/editel

******************************************************************************/

#include "deneyap.h"

int Led = 13; // Led pinini 13 olarak atıyoruz
int ledDurum = 0;
unsigned long ilkZaman = 0;
unsigned long sonZaman;
void setup()
{
  pinMode(12, INPUT);// 12. pini giriş olarak atıyoruz
  pinMode(Led, OUTPUT);// 13. pini giriş olarak atıyoruz
  Serial.begin(9600);
}

void loop(){
  
  sonZaman = millis();

  if (sonZaman - ilkZaman >= 500)
  {
    if(digitalRead(12)== HIGH)//eger 12 pin HIGH ise
    {
      ledDurum = !ledDurum;
      digitalWrite(Led, ledDurum);

    }    
    ilkZaman = sonZaman;
  
  }


  Serial.println(ledDurum);

}


