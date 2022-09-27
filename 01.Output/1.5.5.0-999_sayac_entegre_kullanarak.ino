/*****************************************************************************
Programın Adı: CD4511 ile 0-999 saydıran program                                                                                                                                                                 
Programın Amacı: CD4511 ile 0-999 saydırmayı öğrenme

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/i5EAu0beV6d-155cd4511-ile-0-999-sayac-yapimi/editel

******************************************************************************/
/*
13 - > D0
12 - > D1
11 - > D2
10 - > D3
9 - > D4
8 - > D5
7 - > D6
6 - > D7
5 - > D8
4 - > D9
3 - > D10
2 - > D11
*/

#include "deneyap.h"

void setup()
{
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11 }; // pinleri bir dizi şeklinde tanımlıyoruz
  
  //Kullancağımız pin değerlerini çıkış olarak atıyoruz
  for(int i=0; i < 12; i++)
  {
    //iPin o anki içeriğini çıkış pini olarak atıyoruz
    pinMode(pinler[i], OUTPUT);
  }   
}
void loop()
{
  //yuzler için saydırma yapan fonksiyon
  for(int yuzler=0; yuzler<10; yuzler++){
    //Onlar için saydırma yapan fonksiyon
    for(int onlar=0; onlar<10; onlar++){
      //Birler hanesi için saydırma yapan fonksiyon
      for(int birler=0;birler<10;birler++){
        //yuzler sayacının içeriği ne ise ona göre fonksiyonu çağırıyoruz.*/
        switch(yuzler){
          case 0: sifirYuzlerYaz(); break;//yuzler içeriği 0 ise sifirYaz fonksiyonunu çağırıyoruz
          case 1: birYuzlerYaz(); break;//yuzler içeriği 1 ise birYaz fonksiyonunu çağırıyoruz
          case 2: ikiYuzlerYaz(); break;//yuzler içeriği 2 ise ikiYaz fonksiyonunu çağırıyoruz
          case 3: ucYuzlerYaz(); break;//yuzler içeriği 3 ise ucYaz fonksiyonunu çağırıyoruz
          case 4: dortYuzlerYaz(); break;//yuzler içeriği 4 ise dortYaz fonksiyonunu çağırıyoruz
          case 5: besYuzlerYaz(); break;//yuzler içeriği 5 ise besYaz fonksiyonunu çağırıyoruz
          case 6: altiYuzlerYaz(); break;//yuzler içeriği 6 ise altiYaz fonksiyonunu çağırıyoruz
          case 7: yediYuzlerYaz(); break;//yuzler içeriği 7 ise yediYaz fonksiyonunu çağırıyoruz
          case 8: sekizYuzlerYaz(); break;//yuzler içeriği 8 ise sekizYaz fonksiyonunu çağırıyoruz
          case 9: dokuzYuzlerYaz(); break;//yuzler içeriği 9 ise dokuzYaz fonksiyonunu çağırıyoruz
        }
        //onlar sayacının içeriği ne ise ona göre fonksiyonu çağırıyoruz.
        switch(onlar){
          case 0: sifirOnlarYaz(); break;//onlar içeriği 0 ise sifirYaz fonksiyonunu çağırıyoruz
          case 1: birOnlarYaz(); break;//onlar içeriği 1 ise birYaz fonksiyonunu çağırıyoruz
          case 2: ikiOnlarYaz(); break;//onlar içeriği 2 ise ikiYaz fonksiyonunu çağırıyoruz
          case 3: ucOnlarYaz(); break;//onlar içeriği 3 ise ucYaz fonksiyonunu çağırıyoruz
          case 4: dortOnlarYaz(); break;//onlar içeriği 4 ise dortYaz fonksiyonunu çağırıyoruz
          case 5: besOnlarYaz(); break;//onlar içeriği 5 ise besYaz fonksiyonunu çağırıyoruz
          case 6: altiOnlarYaz(); break;//onlar içeriği 6 ise altiYaz fonksiyonunu çağırıyoruz
          case 7: yediOnlarYaz(); break;//onlar içeriği 7 ise yediYaz fonksiyonunu çağırıyoruz
          case 8: sekizOnlarYaz(); break;//onlar içeriği 8 ise sekizYaz fonksiyonunu çağırıyoruz
          case 9: dokuzOnlarYaz(); break;//onlar içeriği 9 ise dokuzYaz fonksiyonunu çağırıyoruz
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
      delay(100);
  }
  }  
  }
}


//__________________Birler hanesi__________________________________

// Birler hanesi için çalışan fonksiyonlar
void sifirBirlerYaz(){//Birler hanesi için sıfır yazdıran fonksiyon
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D7, LOW);
}

void birBirlerYaz(){//Birler hanesi için bir yazdıran fonksiyon
  digitalWrite(D4,   HIGH);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D7, LOW);
}
void ikiBirlerYaz(){//Birler hanesi için iki yazdıran fonksiyon
  digitalWrite(D4, LOW);
  digitalWrite(D5,   HIGH);
  digitalWrite(D6, LOW);
  digitalWrite(D7, LOW);
}
void ucBirlerYaz(){//Birler hanesi için üç yazdıran fonksiyon
  digitalWrite(D4,   HIGH);
  digitalWrite(D5,   HIGH);
  digitalWrite(D6, LOW);
  digitalWrite(D7, LOW);
}
void dortBirlerYaz(){//Birler hanesi için dört yazdıran fonksiyon
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D6,   HIGH);
  digitalWrite(D7, LOW);
}
void besBirlerYaz(){//Birler hanesi için beş yazdıran fonksiyon
  digitalWrite(D4,   HIGH);
  digitalWrite(D5, LOW);
  digitalWrite(D6,   HIGH);
  digitalWrite(D7, LOW);
}
void altiBirlerYaz(){//Birler hanesi için altı yazdıran fonksiyon
  digitalWrite(D4, LOW);
  digitalWrite(D5,   HIGH);
  digitalWrite(D6,   HIGH);
  digitalWrite(D7, LOW);
}
void yediBirlerYaz(){//Birler hanesi için yedi yazdıran fonksiyon
  digitalWrite(D4,   HIGH);
  digitalWrite(D5,   HIGH);
  digitalWrite(D6,   HIGH);
  digitalWrite(D7, LOW);
}
void sekizBirlerYaz(){//Birler hanesi için sekiz yazdıran fonksiyon
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D7,   HIGH);
}
void dokuzBirlerYaz(){//Birler hanesi için dokuz yazdıran fonksiyon
  digitalWrite(D4,   HIGH);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D7,   HIGH);
}

//___________________ Onlar hanesi_________________________________

// Onlar hanesi için çalışan fonksiyonlar
void sifirOnlarYaz(){ //Onlar hanesi için sıfır yazdıran fonksiyon
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}
void birOnlarYaz(){//Onlar hanesi için bir yazdıran fonksiyon
  digitalWrite(D0,   HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}
void ikiOnlarYaz(){//Onlar hanesi için iki yazdıran fonksiyon
  digitalWrite(D0, LOW);
  digitalWrite(D1,  HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}
void ucOnlarYaz(){//Onlar hanesi için uc yazdıran fonksiyon
  digitalWrite(D0,  HIGH);
  digitalWrite(D1,  HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}
void dortOnlarYaz(){//Onlar hanesi için dört yazdıran fonksiyon
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2,  HIGH);
  digitalWrite(D3, LOW);
}
void besOnlarYaz(){//Onlar hanesi için beş yazdıran fonksiyon
  digitalWrite(D0,  HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2,  HIGH);
  digitalWrite(D3, LOW);
}
void altiOnlarYaz(){//Onlar hanesi için altı yazdıran fonksiyon
  digitalWrite(D0, LOW);
  digitalWrite(D1,  HIGH);
  digitalWrite(D2,  HIGH);
  digitalWrite(D3, LOW);
}
void yediOnlarYaz(){//Onlar hanesi için yedi yazdıran fonksiyon
  digitalWrite(D0,  HIGH);
  digitalWrite(D1,  HIGH);
  digitalWrite(D2,  HIGH);
  digitalWrite(D3, LOW);
}
void sekizOnlarYaz(){//Onlar hanesi için sekiz yazdıran fonksiyon
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3,  HIGH);
}
void dokuzOnlarYaz(){//Onlar hanesi için dokuz yazdıran fonksiyon
  digitalWrite(D0,  HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3,  HIGH);
}

//___________________ Yüzler hanesi_________________________________

// Yüzler hanesi için çalışan fonksiyonlar
void sifirYuzlerYaz(){ //Yüzler hanesi için sıfır yazdıran fonksiyon
  digitalWrite(D8, LOW);
  digitalWrite(D9, LOW);
  digitalWrite(D10, LOW);
  digitalWrite(D11, LOW);
}
void birYuzlerYaz(){//Yüzler hanesi için bir yazdıran fonksiyon
  digitalWrite(D8,   HIGH);
  digitalWrite(D9, LOW);
  digitalWrite(D10, LOW);
  digitalWrite(D11, LOW);
}
void ikiYuzlerYaz(){//Yüzler hanesi için iki yazdıran fonksiyon
  digitalWrite(D8, LOW);
  digitalWrite(D9,  HIGH);
  digitalWrite(D10, LOW);
  digitalWrite(D11, LOW);
}
void ucYuzlerYaz(){//Yüzler hanesi için uc yazdıran fonksiyon
  digitalWrite(D8,  HIGH);
  digitalWrite(D9,  HIGH);
  digitalWrite(D10, LOW);
  digitalWrite(D11, LOW);
}
void dortYuzlerYaz(){//Onlar hanesi için dört yazdıran fonksiyon
  digitalWrite(D8, LOW);
  digitalWrite(D9, LOW);
  digitalWrite(D10,  HIGH);
  digitalWrite(D11, LOW);
}
void besYuzlerYaz(){//Yüzler hanesi için beş yazdıran fonksiyon
  digitalWrite(D8,  HIGH);
  digitalWrite(D9, LOW);
  digitalWrite(D10,  HIGH);
  digitalWrite(D11, LOW);
}
void altiYuzlerYaz(){//Yüzler hanesi için altı yazdıran fonksiyon
  digitalWrite(D8, LOW);
  digitalWrite(D9,  HIGH);
  digitalWrite(D10,  HIGH);
  digitalWrite(D11, LOW);
}
void yediYuzlerYaz(){//Yüzler hanesi için yedi yazdıran fonksiyon
  digitalWrite(D8,  HIGH);
  digitalWrite(D9,  HIGH);
  digitalWrite(D10,  HIGH);
  digitalWrite(D11, LOW);
}
void sekizYuzlerYaz(){//Yüzler hanesi için sekiz yazdıran fonksiyon
  digitalWrite(D8, LOW);
  digitalWrite(D9, LOW);
  digitalWrite(D10, LOW);
  digitalWrite(D11,  HIGH);
}
void dokuzYuzlerYaz(){//Yüzler hanesi için dokuz yazdıran fonksiyon
  digitalWrite(D8,  HIGH);
  digitalWrite(D9, LOW);
  digitalWrite(D10, LOW);
  digitalWrite(D11,  HIGH);
}
