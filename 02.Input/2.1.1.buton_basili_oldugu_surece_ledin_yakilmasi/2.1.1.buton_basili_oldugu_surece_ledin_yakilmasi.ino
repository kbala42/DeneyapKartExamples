/*****************************************************************************
Programın Adı: Buton basılı sürece led yakan program                                                                                                                                                               
Programın Amacı: Dijital girişin nasıl yapıldığını öğrenme

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/choDf9WeAJJ-211buton-basili-oldugu-surece-ledin-yakilmasi/editel

******************************************************************************/

#include "deneyap.h"

//butona basılı oldugu sürece led i yakan program
void setup()
{
  pinMode(D0, OUTPUT);//D0 pini cıkıs olarak atıyoruz
  pinMode(D5,INPUT);//D5 pini giriş olarak atıyoruz
}

void loop()
{
  if(digitalRead(D5)==LOW)//eger D5 pin LOW ise
  {
    digitalWrite(D0,LOW);//D0 pini LOW yap
  }
  else//degilse
  {
    digitalWrite(D0,HIGH);//D0 pini HIGH yap
  }

}
