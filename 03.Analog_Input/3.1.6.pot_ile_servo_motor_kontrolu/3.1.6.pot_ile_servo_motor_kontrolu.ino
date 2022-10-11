/*****************************************************************************
Programın Adı Potun konumuna göre servo motorun çalıştırılması

Programın Amacı: Potonsiyometre değerine bağlı olarak
				servo motoru konumlamak

       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/68niRF6C2Hr-316pot-ile-servo-motor-kontrolu/editel
      
******************************************************************************/

#include "deneyap.h"

#include <ESP32Servo.h>
//#include <Servo.h>  // Servo kütüphanesi alıyoruz
// motoru kütüphaneden çağırıyoruz  
Servo motor;  // Servo sınıfından motor nesnesini oluşturuyoruz

int pot = A0;  //potun anlık değerini sakladığımız değişken
int potDeger;// Okuduğumuz analog değerin 0-1023 aralığındaki 
			// karşılığını saklıyoruz
 
void setup() //
{
  motor.attach(9);  // motor çıkışını 9. pin olarak belirliyoruz
  
} 
 
void loop()
{
  // Okuduğumuz analog değeri değişkende saklıyoruz    
  potDeger = analogRead(pot);   
  // Okuduğumuz analog değeri 0-1023 arasında değere çeviriyoruz
  // Maksimum 0-180 arasında bir değer
  potDeger = map(potDeger, 0, 1023, 0, 180);  
  //okunan değere göre pwm üreterek çıkışa yazdırıyoruz
  motor.write(potDeger); 
  delay(15); // 15 ms gcikme sağlıyoruz                          
}