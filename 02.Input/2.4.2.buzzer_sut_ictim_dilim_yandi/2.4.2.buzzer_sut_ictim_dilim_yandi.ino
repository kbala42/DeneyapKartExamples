/*****************************************************************************
Programın Adı:Buzzer ile melodi çalma

Programın Amacı: Bir melodinin buzzer'da nasıl çalınabileceğini öğrenmek

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/33kNEahR6Bw-242buzzer-sut-ictim-dilim-yandi/editel

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

 }
void loop() {
  
    for (int Nota = 0; Nota <56; Nota++) 
    {
    int sure = tempo/notasuresi[Nota];
     tone(D8, melodi[Nota],sure);
     delay(sure*1.2);
 // notalar arasinda biraz beklesin. 
 //Eger 1 ile çarparsaniz notalar birbirine bitisik olur
    }
 }
