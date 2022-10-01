/*****************************************************************************
Programın Adı:Buzzer ile basit org yapımı

Programın Amacı: Buzzer ile nasıl basit bir org yapılabileceğini öğrenmek
Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/0L0oa5UJnxG-243buzzer-ile-org-yapimi/editel

******************************************************************************/

#include "deneyap.h"


//Buzzer ile süt içtim dilim yandı şarkısını çaldıran program
#define doo  1000 
// (kalin do)
#define re   1122
#define mi   1260
#define fa   1335
#define sol  1498
#define la   1681
#define si   1887
#define dom  2000 
//  (ince do)

int melodi[] =     {re,mi,fa,sol,fa,sol,sol,sol, fa, sol,sol,sol ,fa, mi, re,mi,fa,sol,fa,sol,sol,sol, fa, sol,sol,sol ,fa, mi,   re, mi ,fa,sol,mi,fa,re,mi,doo,doo,fa,mi,re,re,re, mi ,fa,sol,mi,fa,re,mi,doo,doo,fa,mi,re,re };
int notasuresi[] = {4,  4,  4,  4, 4,  4,4,  3 ,4,4,4,4,4,2,4,  4,  4,  4, 4,  4,4,  3 ,4,4,4,4,4,2       ,4,4,4,4,4,4,4,4,4,4,4,4,2,2,    4,4,4,4,4,4,4,4,4,4,4,4,2,2};
int tempo = 1200;

void setup()
{
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12, D13}; // pinleri bir dizi şeklinde tanımlıyoruz
  
  pinMode(D13, OUTPUT);

  for(int tus=6;tus<13;tus++)
  {
    pinMode(pinler[tus], INPUT);
  }
}

void loop()
{
  
  if (digitalRead(D6) == HIGH) {
    tone(D13, doo, 500); // ton tipi doo 500 milisaniye
  }
  if (digitalRead(D7) == HIGH) {
    tone(D13, re, 500); 
  }
  if (digitalRead(D8) == HIGH) {
    tone(D13, mi, 500); 
  }
  if (digitalRead(D9) == HIGH) {
    tone(D13, fa, 500); 
  }
  if (digitalRead(D10) == HIGH) {
    tone(D13, sol, 500); 
  }  
  if (digitalRead(D11) == HIGH) {
    tone(D13, la, 500); 
  }
  if (digitalRead(D12) == HIGH) {
    tone(D13, si, 500); 
  }  
  delay(10); 
}

