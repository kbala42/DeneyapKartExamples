/*****************************************************************************
Programın Adı: Servo motorun çalıştırılması

Programın Amacı: Sefvo motorun çalışmasını incelemek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022
       
Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/0WKMjnKHO6X-1111servo-motor-kontrolu/editel

******************************************************************************/

#include "deneyap.h"
 
#include <Servo.h>  // Servo kütüphanesi alıyoruz
// motoru kütüphaneden çağırıyoruz ,hazır yüklüdür 
Servo sg90;  // Servo sınıfından sg90 nesnesini oluşturuyoruz
// servoda sg90 isminde nesne oluşturduk
void setup()
{
  sg90.attach(9);  // 9. pine bağlı servo motoru başlatıyoruz
}

void loop()
{
  sg90.write(100); // 180 den büyük değer yazarsanız daha fazla ileriye gitmez
}