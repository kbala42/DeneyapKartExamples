/*****************************************************************************
Programın Adı: RGB ledi dijital çalışmasında oluşturulabilecek
				tüm farklı kombinasyonlarını gösteren program

Programın Amacı: RGB ledlerin bacaklarına uygulanacak tüm farklı
				kombinasyonlarla renkleri göstermek



Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022
       
Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/b88rjbaLgzf-144-rgb-dijital-tum-renkler/editel

******************************************************************************/
#include "deneyap.h"
// Ledlerin bağlı olduğu pinler için değişken ataması yapıyoruz.
int iKirmizi=D0, iYesil=D1, iMavi=D2;

int iGecikme=100;

void setup() {
  pinMode(iKirmizi, OUTPUT);
  pinMode(iYesil, OUTPUT);
  pinMode(iMavi, OUTPUT);  
}

void loop() {

  // Kırmızı ledi yakma fonksiyonunu çağırıyoruz
  kirmiziYak();  
  delay(iGecikme);  
  
  // Bütün ledleri kapatma fonksiyonunu çağırıyoruz 
  rgbKapat();
  delay(iGecikme);  
  
  // Yeşil ledi yakma fonksiyonunu çağırıyoruz
  yesilYak();  
  delay(iGecikme);  
  
  // Bütün ledleri kapatma fonksiyonunu çağırıyoruz 
  rgbKapat();
  delay(iGecikme);
 
  // Kırmızı ledi yakma fonksiyonunu çağırıyoruz
  maviYak();  
  delay(iGecikme);   
  
  // Bütün ledleri kapatma fonksiyonunu çağırıyoruz 
  rgbKapat();
  delay(iGecikme); 
  
  // Beyaz ledi yakma fonksiyonunu çağırıyoruz
  beyazYak();  
  delay(1000);    

  // Bütün ledleri kapatma fonksiyonunu çağırıyoruz 
  rgbKapat();
  delay(iGecikme); 
  
  // Mor ledi yakma fonksiyonunu çağırıyoruz
  morYak();  
  delay(iGecikme);   

  // Bütün ledleri kapatma fonksiyonunu çağırıyoruz 
  rgbKapat();
 delay(iGecikme);
  
  // Turkuaz ledi yakma fonksiyonunu çağırıyoruz
  turkuazYak();  
  delay(iGecikme);

  // Bütün ledleri kapatma fonksiyonunu çağırıyoruz 
  rgbKapat();
  delay(iGecikme);
  
  // Sarı ledi yakma fonksiyonunu çağırıyoruz
  sariYak();  
  delay(iGecikme);  

  // Bütün ledleri kapatma fonksiyonunu çağırıyoruz 
  rgbKapat();
  delay(iGecikme);
}

  // Bütün ledleri söndürme fonksiyonu
  void rgbKapat()
  {
    digitalWrite(iKirmizi, LOW);  
    digitalWrite(iYesil, LOW);  
    digitalWrite(iMavi, LOW); 
  }
  // Kırımızı led yakma fonksiyonu
  void kirmiziYak()
  {
    digitalWrite(iKirmizi, HIGH);  
    digitalWrite(iYesil, LOW);  
    digitalWrite(iMavi, LOW);   
  }
  // Yeşil ledi yakma fonksiyonu
  void yesilYak()
  {
    digitalWrite(iKirmizi, LOW);  
    digitalWrite(iYesil, HIGH);  
    digitalWrite(iMavi, LOW);  
  }
  // Mavi ledi yakma fonksiyonu
  void maviYak()
  {
     // Mavi
    digitalWrite(iKirmizi, LOW);  
    digitalWrite(iYesil,LOW);  
    digitalWrite(iMavi, HIGH);  
  }
  // Beyaz led yakma fonksiyonu
  void beyazYak()
  {
    digitalWrite(iKirmizi, HIGH);  
    digitalWrite(iYesil, HIGH);  
    digitalWrite(iMavi, HIGH);  
  }

  // Mor led yakma fonksiyonu
  void morYak()
  {
    digitalWrite(iKirmizi, HIGH);  
    digitalWrite(iYesil, LOW);  
    digitalWrite(iMavi, HIGH);  
  }

  // Turkuaz led yakma fonksiyonu
  void turkuazYak()
  {
    digitalWrite(iKirmizi, LOW);  
    digitalWrite(iYesil, HIGH);  
    digitalWrite(iMavi, HIGH);  
  }
  // Sarı led yakma fonksiyonu
  void sariYak()
  {
    digitalWrite(iKirmizi, HIGH);  
    digitalWrite(iYesil, HIGH);  
    digitalWrite(iMavi, LOW);  
  }