/*****************************************************************************
Programın Adı: 6 eksenli bir robot kontrolu

Programın Amacı: 6 servo motor kullanarak 6 eksenli robot kontrolü

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/hCPLTYBaHVl-317-potlarla-ile-6-eksen-kontrolu/editel
      
******************************************************************************/

#include "deneyap.h"

//#include <Servo.h> 
#include <ESP32Servo.h>

Servo motor0;//0 motor nesnesi tanımlanıyor 
Servo motor1;
Servo motor2;
Servo motor3; 
Servo motor4;
Servo motor5;//5 motor nesnesi tanımlanıyor
 
int pot0 = A0;//pot 0 için analog giris
int pot1 = A1;
int pot2 = A2;
int pot3 = A3;
int pot4 = A4;
int pot5 = A5;//pot 5 için analog giris
int potDeger0;// 0 için anlık deger
int potDeger1;
int potDeger2;
int potDeger3;
int potDeger4;
int potDeger5;//5 için anlık deger
void setup()
{
  motor0.attach(3);//0. motor cıkısı
  motor1.attach(5); 
  motor2.attach(6); 
  motor3.attach(9);
  motor4.attach(10); 
  motor5.attach(11);//5. motor  cıkısı
} 
 
void loop()
{
  potDeger0 = analogRead(pot0);//anlık degeri okuyoruz            
  potDeger0 = map(potDeger0, 0, 1023, 0, 180);//0-180 dönüştürüyoruz     
  motor0.write(potDeger0);//pot degerine göre cıkısı yazdırıyoruz 
 
  potDeger1 = analogRead(pot1);            
  potDeger1 = map(potDeger1, 0, 1023, 0, 180);     
  motor1.write(potDeger1); 
  
  potDeger2 = analogRead(pot2);            
  potDeger2 = map(potDeger2, 0, 1023, 0, 180);     
  motor2.write(potDeger2); 
   
  potDeger3 = analogRead(pot3);            
  potDeger3 = map(potDeger3, 0, 1023, 0, 180);     
  motor3.write(potDeger3); 

  potDeger4 = analogRead(pot4);            
  potDeger4 = map(potDeger4, 0, 1023, 0, 180);     
  motor4.write(potDeger4); 
  
  potDeger5 = analogRead(pot5);            
  potDeger5 = map(potDeger5, 0, 1023, 0, 180);     
  motor5.write(potDeger5); 
  
  delay(100);//100 ms gecikme
}