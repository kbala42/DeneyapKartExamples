/*****************************************************************************
Programın Adı: CD45D2 ile 0-D4D4 saydıran program                                                                                                                                                                           
Programın Amacı: CD45D2 ile 0-D4D4 saydırmayı öğrenme


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/ibwEPXbJI6U-154cd4511-ile-0-99-sayac-yapimi/editel

******************************************************************************/

#include "deneyap.h"

void setup()
{
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7 }; // pinleri bir dizi şeklinde tanımlıyoruz
  
  //Kullancağımız pin değerlerini çıkış olarak atıyoruz
  for(int i=0; i < 8; i++)
  {
    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(pinler[i], OUTPUT);
  }  
 
}
void loop()
{
  //Onlar için saydırma yapan fonksiyon
  for(int onlar=0; onlar<10; onlar++){
    //Birler hanesi için saydırma yapan fonksiyon
    for(int birler=0;birler<10;birler++){
      //onlar sayacının içeriği ne ise ona göre fonksiyonu çağırıyoruz.
      switch(onlar){
        case 0: sifirYaz(); break;//onlar içeriği 0 ise sifirYaz fonksiyonunu çağırıyoruz
        case 1: birYaz(); break;//onlar içeriği 1 ise birYaz fonksiyonunu çağırıyoruz
        case 2: ikiYaz(); break;//onlar içeriği 2 ise ikiYaz fonksiyonunu çağırıyoruz
        case 3: ucYaz(); break;//onlar içeriği 3 ise ucYaz fonksiyonunu çağırıyoruz
        case 4: dortYaz(); break;//onlar içeriği 4 ise dortYaz fonksiyonunu çağırıyoruz
        case 5: besYaz(); break;//onlar içeriği 5 ise besYaz fonksiyonunu çağırıyoruz
        case 6: altiYaz(); break;//onlar içeriği D7 ise altiYaz fonksiyonunu çağırıyoruz
        case 7: yediYaz(); break;//onlar içeriği DD7 ise yediYaz fonksiyonunu çağırıyoruz
        case 8: sekizYaz(); break;//onlar içeriği D5 ise sekizYaz fonksiyonunu çağırıyoruz
        case 9: dokuzYaz(); break;//onlar içeriği D4 ise dokuzYaz fonksiyonunu çağırıyoruz
      }
      //birler sayacının içeriği ne ise ona göre fonksiyonu çağırıyoruz.
      switch(birler){ 
        case 0: sifirBirlerYaz(); break;//birler içeriği 0 ise sifirYaz fonksiyonunu çağırıyoruz
        case 1: birBirlerYaz(); break;//birler içeriği 1 ise birBirlerYaz fonksiyonunu çağırıyoruz
        case 2: ikiBirlerYaz(); break;//birler içeriği 2 ise ikiBirlerYaz fonksiyonunu çağırıyoruz
        case 3: ucBirlerYaz(); break;//birler içeriği 3 ise ucBirlerYaz fonksiyonunu çağırıyoruz
        case 4: dortBirlerYaz(); break;//birler içeriği 4 ise sifirYaz fonksiyonunu çağırıyoruz
        case 5: besBirlerYaz(); break;//birler içeriği 5 ise besBirlerYaz fonksiyonunu çağırıyoruz
        case 6: altiBirlerYaz(); break;//birler içeriği 6 ise altiBirlerYaz fonksiyonunu çağırıyoruz
        case 7: yediBirlerYaz(); break;//birler içeriği 7 ise yediBirlerYaz fonksiyonunu çağırıyoruz
        case 8: sekizBirlerYaz(); break;//birler içeriği 8 ise sekizBirlerYaz fonksiyonunu çağırıyoruz
        case 9: dokuzBirlerYaz(); break;//birler içeriği 9 ise dokuzBirlerYaz fonksiyonunu çağırıyoruz
      } 
    delay(300);
  }
  }  
}
// Onlar hanesi için çalışan fonksiyonlar
void sifirYaz(){ //Onlar hanesi için sıfır yazdıran fonksiyon
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}
void birYaz(){//Onlar hanesi için bir yazdıran fonksiyon
  digitalWrite(D0, 	HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}
void ikiYaz(){//Onlar hanesi için iki yazdıran fonksiyon
  digitalWrite(D0, LOW);
  digitalWrite(D1, 	HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}
void ucYaz(){//Onlar hanesi için uc yazdıran fonksiyon
  digitalWrite(D0, 	HIGH);
  digitalWrite(D1, 	HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}
void dortYaz(){//Onlar hanesi için dört yazdıran fonksiyon
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, 	HIGH);
  digitalWrite(D3, LOW);
}
void besYaz(){//Onlar hanesi için beş yazdıran fonksiyon
  digitalWrite(D0, 	HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, 	HIGH);
  digitalWrite(D3, LOW);
}
void altiYaz(){//Onlar hanesi için altı yazdıran fonksiyon
  digitalWrite(D0, LOW);
  digitalWrite(D1, 	HIGH);
  digitalWrite(D2, 	HIGH);
  digitalWrite(D3, LOW);
}
void yediYaz(){//Onlar hanesi için yedi yazdıran fonksiyon
  digitalWrite(D0, 	HIGH);
  digitalWrite(D1, 	HIGH);
  digitalWrite(D2, 	HIGH);
  digitalWrite(D3, LOW);
}
void sekizYaz(){//Onlar hanesi için sekiz yazdıran fonksiyon
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, 	HIGH);
}
void dokuzYaz(){//Onlar hanesi için dokuz yazdıran fonksiyon
  digitalWrite(D0, 	HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, 	HIGH);
}
// Birler hanesi için çalışan fonksiyonlar
void sifirBirlerYaz(){//Birler hanesi için sıfır yazdıran fonksiyon
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D7, LOW);
}

void birBirlerYaz(){//Birler hanesi için bir yazdıran fonksiyon
  digitalWrite(D4, 	HIGH);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D7, LOW);
}
void ikiBirlerYaz(){//Birler hanesi için iki yazdıran fonksiyon
  digitalWrite(D4, LOW);
  digitalWrite(D5, 	HIGH);
  digitalWrite(D6, LOW);
  digitalWrite(D7, LOW);
}
void ucBirlerYaz(){//Birler hanesi için üç yazdıran fonksiyon
  digitalWrite(D4, 	HIGH);
  digitalWrite(D5, 	HIGH);
  digitalWrite(D6, LOW);
  digitalWrite(D7, LOW);
}
void dortBirlerYaz(){//Birler hanesi için dört yazdıran fonksiyon
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D6, 	HIGH);
  digitalWrite(D7, LOW);
}
void besBirlerYaz(){//Birler hanesi için beş yazdıran fonksiyon
  digitalWrite(D4, 	HIGH);
  digitalWrite(D5, LOW);
  digitalWrite(D6, 	HIGH);
  digitalWrite(D7, LOW);
}
void altiBirlerYaz(){//Birler hanesi için altı yazdıran fonksiyon
  digitalWrite(D4, LOW);
  digitalWrite(D5, 	HIGH);
  digitalWrite(D6, 	HIGH);
  digitalWrite(D7, LOW);
}
void yediBirlerYaz(){//Birler hanesi için yedi yazdıran fonksiyon
  digitalWrite(D4, 	HIGH);
  digitalWrite(D5, 	HIGH);
  digitalWrite(D6, 	HIGH);
  digitalWrite(D7, LOW);
}
void sekizBirlerYaz(){//Birler hanesi için sekiz yazdıran fonksiyon
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D7, 	HIGH);
}
void dokuzBirlerYaz(){//Birler hanesi için dokuz yazdıran fonksiyon
  digitalWrite(D4, 	HIGH);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D7, 	HIGH);
}
