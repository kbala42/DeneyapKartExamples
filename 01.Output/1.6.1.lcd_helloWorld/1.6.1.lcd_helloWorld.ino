/*****************************************************************************
Programın Adı:  Ekrana Merhaba Dünya mesajı yazdıran program

Programın Amacı:  LCD temel kullanımını öğrenmek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/jydLPK6AQU2-161lcd-merhaba-dunya

******************************************************************************/

#include "deneyap.h"

// kitaplık kodunu projemize dahil ediyoruz
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
// Arayüz pinlerinin sayıları ile lcd nesnemizi başlatıyoruz.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // lcd nesnesinin begin metodunu 16 sütun ve 2 satır için çağırıyoruz
  lcd.begin(16, 2);
  // lcd nesnesinin print metodu ile "merhaba dunya!" mesajı yazdırıyoruz.
  lcd.print("merhaba dunya!");
}

void loop() {
  // 1. satır 0 sütunu imleci yerleştiriyoruz.
  lcd.setCursor(0, 1);
  // Yenileme sayısını yazdırıyoruz
  lcd.print(millis() / 1000);
}
 
