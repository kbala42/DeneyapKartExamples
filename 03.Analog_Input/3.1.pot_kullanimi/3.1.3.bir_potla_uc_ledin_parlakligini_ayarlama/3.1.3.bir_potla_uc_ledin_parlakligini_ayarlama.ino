/*****************************************************************************
Programın Adı Potonsiyometre kullanarak üç ledi açıp kapatmak

Programın Amacı: Potonsiyometre değerine bağlı olarak
				üç ledi açıp kapatmak

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/bnF57Iwdeud-313bir-potla-uc-ledin-parlakligini-ayarlama/editel
      
******************************************************************************/

#include "deneyap.h"

//Bir potansiyometre ile üç ledin parlaklığını ayarlamak
int led1 = D8; // 8. pini mavi led çıkışı olarak ayarlıyoruz
int led2 = D9; // 9. pini yeşil led çıkışı olarak ayarlıyoruz
int led3 = D10; // 10. pini kırmızı led çıkışı olarak ayarlıyoruz
int pot = A0; // A0 girişini pot değişkeni olarak atıyoruz
int potdeger;  // potun değerini sakladığımız değişken
 
void setup() {
pinMode(led1, OUTPUT); //8. pini çıkış olarak atıyoruz
pinMode(led2, OUTPUT); //9. pini çıkış olarak atıyoruz
pinMode(led3, OUTPUT); //10. pini çıkış olarak atıyoruz
pinMode(pot, INPUT); // A0 giriş olarak atıyoruz
  
;
}
 
void loop() {
potdeger= analogRead(pot);// A0 girişini okuyoruz

if (potdeger<250){ //potdeger 250 den küçükse hiçbir ledi yakmaz
digitalWrite(led1, LOW);//led 1 i sondur
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
}
if (potdeger>250){ //potdeger 250 den büyükse sadece led1 i yak
digitalWrite(led1, HIGH);//led 1 i aç
digitalWrite(led2, LOW);//led 2 söndür
digitalWrite(led3, LOW);
}
  
if (potdeger>500){ //potdeger 500 den büyükse led1 i ve led2 yi yak
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
}
  
if (potdeger>750){ //potdeger 750 den büyükse led1 i, led2 yi ve led3 ü yak
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
}

}