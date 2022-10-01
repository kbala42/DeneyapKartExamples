/*****************************************************************************
Programın Adı: CD4511 ile 0-99 saydıran program                                                                                                                                                               

Programın Amacı: CD4511 ile 0-99 saydırmayı öğrenme
				 Yukarı sayaç

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/7eSpL5v7nsN-232cd4511-ile-0-99-butonlu-sayac-yapimi/editel

Simülasyonla benzemesi için daha önce ki sayac programından farklı olarak
aynı dijital pinler kullanılmıştır.

******************************************************************************/

#include "deneyap.h"

#include <math.h>

int iSayac=0;

void setup()
{
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12, D13}; // pinleri bir dizi şeklinde tanımlıyoruz

  for(int i =13;i>5;i--)// 13'den 6 kadar saydırma yapıyoruz
  {
    pinMode(pinler[i], OUTPUT);// O anki .Pin değerini çıkış yapıyoruz
  }  
  pinMode(D5,INPUT);//5. pini giriş olarak atıyoruz
  pinMode(D4,INPUT);//4. pini giriş olarak atıyoruz
  Serial.begin(9600);
}
void loop()
{
  if(digitalRead(D5)==LOW)//eger 5 pin LOW ise
  {
    iSayac++;
    saydir();
    delay(300);
  }
}
void saydir(){
  
  int onlar=floor(iSayac/10);
  int birler=iSayac%10;

  Serial.print(iSayac);
  Serial.print("-");
  Serial.print(onlar);
  Serial.print("-");
  Serial.println(birler);
  
        //onlar sayacının içeriği ne ise ona göre fonksiyonu çağırıyoruz.
      switch(onlar){
        case 0: sifirYaz(); break;//onlar içeriği 0 ise sifirYaz fonksiyonunu çağırıyoruz
        case 1: birYaz(); break;//onlar içeriği 1 ise birYaz fonksiyonunu çağırıyoruz
        case 2: ikiYaz(); break;//onlar içeriği 2 ise ikiYaz fonksiyonunu çağırıyoruz
        case 3: ucYaz(); break;//onlar içeriği 3 ise ucYaz fonksiyonunu çağırıyoruz
        case 4: dortYaz(); break;//onlar içeriği 4 ise dortYaz fonksiyonunu çağırıyoruz
        case 5: besYaz(); break;//onlar içeriği 5 ise besYaz fonksiyonunu çağırıyoruz
        case 6: altiYaz(); break;//onlar içeriği 6 ise altiYaz fonksiyonunu çağırıyoruz
        case 7: yediYaz(); break;//onlar içeriği 7 ise yediYaz fonksiyonunu çağırıyoruz
        case 8: sekizYaz(); break;//onlar içeriği 8 ise sekizYaz fonksiyonunu çağırıyoruz
        case 9: dokuzYaz(); break;//onlar içeriği 9 ise dokuzYaz fonksiyonunu çağırıyoruz
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


}
// Onlar hanesi için çalışan fonksiyonlar
void sifirYaz(){ //Onlar hanesi için sıfır yazdıran fonksiyon
  digitalWrite(D13, LOW);
  digitalWrite(D12, LOW);
  digitalWrite(D11, LOW);
  digitalWrite(D10, LOW);
}
void birYaz(){//Onlar hanesi için bir yazdıran fonksiyon
  digitalWrite(D13, 	HIGH);
  digitalWrite(D12, LOW);
  digitalWrite(D11, LOW);
  digitalWrite(D10, LOW);
}
void ikiYaz(){//Onlar hanesi için iki yazdıran fonksiyon
  digitalWrite(D13, LOW);
  digitalWrite(D12, 	HIGH);
  digitalWrite(D11, LOW);
  digitalWrite(D10, LOW);
}
void ucYaz(){//Onlar hanesi için uc yazdıran fonksiyon
  digitalWrite(D13, 	HIGH);
  digitalWrite(D12, 	HIGH);
  digitalWrite(D11, LOW);
  digitalWrite(D10, LOW);
}
void dortYaz(){//Onlar hanesi için dört yazdıran fonksiyon
  digitalWrite(D13, LOW);
  digitalWrite(D12, LOW);
  digitalWrite(D11, 	HIGH);
  digitalWrite(D10, LOW);
}
void besYaz(){//Onlar hanesi için beş yazdıran fonksiyon
  digitalWrite(D13, 	HIGH);
  digitalWrite(D12, LOW);
  digitalWrite(D11, 	HIGH);
  digitalWrite(D10, LOW);
}
void altiYaz(){//Onlar hanesi için altı yazdıran fonksiyon
  digitalWrite(D13, LOW);
  digitalWrite(D12, 	HIGH);
  digitalWrite(D11, 	HIGH);
  digitalWrite(D10, LOW);
}
void yediYaz(){//Onlar hanesi için yedi yazdıran fonksiyon
  digitalWrite(D13, 	HIGH);
  digitalWrite(D12, 	HIGH);
  digitalWrite(D11, 	HIGH);
  digitalWrite(D10, LOW);
}
void sekizYaz(){//Onlar hanesi için sekiz yazdıran fonksiyon
  digitalWrite(D13, LOW);
  digitalWrite(D12, LOW);
  digitalWrite(D11, LOW);
  digitalWrite(D10, 	HIGH);
}
void dokuzYaz(){//Onlar hanesi için dokuz yazdıran fonksiyon
  digitalWrite(D13, 	HIGH);
  digitalWrite(D12, LOW);
  digitalWrite(D11, LOW);
  digitalWrite(D10, 	HIGH);
}
// Birler hanesi için çalışan fonksiyonlar
void sifirBirlerYaz(){//Birler hanesi için sıfır yazdıran fonksiyon
  digitalWrite(D9, LOW);
  digitalWrite(D8, LOW);
  digitalWrite(D7, LOW);
  digitalWrite(D6, LOW);
}

void birBirlerYaz(){//Birler hanesi için bir yazdıran fonksiyon
  digitalWrite(D9, 	HIGH);
  digitalWrite(D8, LOW);
  digitalWrite(D7, LOW);
  digitalWrite(D6, LOW);
}
void ikiBirlerYaz(){//Birler hanesi için iki yazdıran fonksiyon
  digitalWrite(D9, LOW);
  digitalWrite(D8, 	HIGH);
  digitalWrite(D7, LOW);
  digitalWrite(D6, LOW);
}
void ucBirlerYaz(){//Birler hanesi için üç yazdıran fonksiyon
  digitalWrite(D9, 	HIGH);
  digitalWrite(D8, 	HIGH);
  digitalWrite(D7, LOW);
  digitalWrite(D6, LOW);
}
void dortBirlerYaz(){//Birler hanesi için dört yazdıran fonksiyon
  digitalWrite(D9, LOW);
  digitalWrite(D8, LOW);
  digitalWrite(D7, 	HIGH);
  digitalWrite(D6, LOW);
}
void besBirlerYaz(){//Birler hanesi için beş yazdıran fonksiyon
  digitalWrite(D9, 	HIGH);
  digitalWrite(D8, LOW);
  digitalWrite(D7, 	HIGH);
  digitalWrite(D6, LOW);
}
void altiBirlerYaz(){//Birler hanesi için altı yazdıran fonksiyon
  digitalWrite(D9, LOW);
  digitalWrite(D8, 	HIGH);
  digitalWrite(D7, 	HIGH);
  digitalWrite(D6, LOW);
}
void yediBirlerYaz(){//Birler hanesi için yedi yazdıran fonksiyon
  digitalWrite(D9, 	HIGH);
  digitalWrite(D8, 	HIGH);
  digitalWrite(D7, 	HIGH);
  digitalWrite(D6, LOW);
}
void sekizBirlerYaz(){//Birler hanesi için sekiz yazdıran fonksiyon
  digitalWrite(D9, LOW);
  digitalWrite(D8, LOW);
  digitalWrite(D7, LOW);
  digitalWrite(D6, 	HIGH);
}
void dokuzBirlerYaz(){//Birler hanesi için dokuz yazdıran fonksiyon
  digitalWrite(D9, 	HIGH);
  digitalWrite(D8, LOW);
  digitalWrite(D7, LOW);
  digitalWrite(D6, 	HIGH);
}