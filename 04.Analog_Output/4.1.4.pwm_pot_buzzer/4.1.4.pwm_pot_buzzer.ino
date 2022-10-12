/*****************************************************************************
Programın Adı: PWM değişimine göre buzzer tone değişimi 

Programın Amacı: PWM frekansını değiştirdiğimizde 
				 buzzer tone değişimini gözlemek


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/f3iRams98ve-414pwmpotbuzzer/editel
      
******************************************************************************/

#include "deneyap.h"

void setup()
{
  Serial.begin(115200);
}

void loop()
{
	int a = analogRead(0);
  
  	float f = ((float)a / 1023.0 * 4500.0) + 500.0;
  
  	
  	if(f > 500.0) {
      	
  		tone(12, (int)f);      

      	Serial.print(f, 0);
      	Serial.print(" Hz, volum 100%\n");
    }
    
  	else{
      	
      	noTone(12);

      	Serial.print(f, 0);
      	Serial.print(" Hz, volum 0%\n");
    }
        

    delay(100);
}