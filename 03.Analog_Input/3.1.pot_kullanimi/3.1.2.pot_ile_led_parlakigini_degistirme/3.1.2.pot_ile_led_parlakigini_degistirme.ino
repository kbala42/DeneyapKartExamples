 /*****************************************************************************
Programın Adı Potonsiyometre kullanımı

Programın Amacı: Potosiyometre kullanımını öğrenmek

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/aTrXM8J3vcd-312potileledparlakiginidegistirme/editel
      
******************************************************************************/

#include "deneyap.h"

//Analog değere bağlı olarak ledin parlaklığını ayarlayan program
int led= 11; // ledin bulunduğu pini saklayan değişken
int pot=A0;// Potun üzerindeki değeri aldığımız pini saklayan değişken
int potValue = 0;// Analog girişten okuduğumuz anlık değer
int mapValue = 0;// Okunan analog değeri dönüştürdüğümüz dijital 
				// değeri sakladığımız değişken 

void setup(){

    pinMode(pot, INPUT);// pot pinini giriş olarak atıyoruz
    pinMode(led, OUTPUT);// led pinini çıkış olarak atıyoruz
    Serial.begin(9600);// Seri haberleşmeyi başlatıyoruz
}

void loop(){
  
  potValue = analogRead(pot);// Okunana analog değeri saklıyoruz.
  mapValue = map(potValue, 0, 1023, 0, 255);// Okunan analog değeri
  				// 0 ile 1023 arası bir değere dönüştürüyoruz
  
  delay(10);// 10 ms gecikme sağlıyoruz
  analogWrite(led,mapValue);// dönüştürülen değere göre 
  				// pwm sinyal üreterek ledi yakıyoruz
}

