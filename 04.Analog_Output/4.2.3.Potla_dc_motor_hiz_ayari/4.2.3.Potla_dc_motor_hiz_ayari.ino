/*****************************************************************************
Programın Adı: Potla DC motoru hız ayarı

Programın Amacı:  


Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022
******************************************************************************/
void setup()
{
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  analogWrite(3, map(analogRead(A0), 0, 1023, 0, 255));
  Serial.println(map(analogRead(A0), 0, 1023, 0, 255));
  delay(10); // Delay a little bit to improve simulation performance
}