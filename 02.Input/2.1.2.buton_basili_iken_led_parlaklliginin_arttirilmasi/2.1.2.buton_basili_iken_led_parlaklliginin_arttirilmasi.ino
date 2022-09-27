/*****************************************************************************
Programın Adı: Buton basılı sürece ledin parlaklığının değiştirilmesi                                                                                                                                                        

Programın Amacı: Butuna her bastığımızda ledin parlaklığının nasıl
				 arttığını öğrenmek

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/22tZBgXZt1Z-212buton-basili-iken-led-parlakliginin-arttirilmasi/editel

******************************************************************************/

#include "deneyap.h"
#include "analogWrite.h"

int iButon=D5; // D5.pini buton olarak atıyoruz

void setup()
{

  analogWriteChannel(D9);
     
  pinMode(iButon,INPUT);//Buton değişkeni değerine karşılık gelen 
  					   //pini çıkış olarak atıyoruz

}
 
void loop()
{
   
  int iLed=D9;   // D9. pini (pwm) led olarak atıyoruz
  int iParlaklik=0; //parlaklık degeri 0 olarak atıyoruz 
   
  if(digitalRead(iButon)==1)// Buton basılı ise
  {
    
    iParlaklik=iParlaklik+10; // her seferinde 25 arttır
    
    if(iParlaklik >= 255)//  iParlaklik değeri 225 eşit ve fazla ise 
    {
      iParlaklik=0;// Parlaklık değerini sıfırla
    }
     
    analogWrite(iLed,iParlaklik);// ledin bağlı olduğu pine 
    //iParlaklığın o anki değerini yazdır 
    
  }
}
