/*****************************************************************************
Programın Adı: Değişken kullanarak istenen değeri vermek

Programın Amacı: Değişken kullanarak 1D5 satırda tekrarladığımız gecikmeyi,
				istenen değerle kolayca değiştirebilme

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/kZ4Qno60xDy-121sekiz-ledi-yakip-sondurme-degisken-kullanimi/editel

******************************************************************************/

int iZaman=500;// gecikmeyi belirleyen Zaman değişkenini tanımlıyoruz

void setup()
{
  //D0. pini çıkış olarak atıyoruz
  pinMode(D0, OUTPUT);
  //D1. pini çıkış olarak atıyoruz  
  pinMode(D1, OUTPUT);
  //D2. pini çıkış olarak atıyoruz  
  pinMode(D2, OUTPUT);
  //D3. pini çıkış olarak atıyoruz  
  pinMode(D3, OUTPUT);
  //D4. pini çıkış olarak atıyoruz  
  pinMode(D4, OUTPUT);
  //D5. pini çıkış olarak atıyoruz  
  pinMode(D5, OUTPUT);    
  //D6. pini çıkış olarak atıyoruz  
  pinMode(D6, OUTPUT);
  //D7. pini çıkış olarak atıyoruz  
  pinMode(D7, OUTPUT);  
}

void loop()
{
  digitalWrite(D0, HIGH);//D0. pini lojik HIGH yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz
  digitalWrite(D0, LOW);//D0. pini lojik LOW yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz
  digitalWrite(D1, HIGH);//D1. pini lojik HIGH yapıyoruz
  delay(iZaman); //300 ms gecikme sağlıyoruz
  digitalWrite(D1, LOW);//D1. pini lojik LOW yapıyoruz
  delay(iZaman); //300 ms gecikme sağlıyoruz
  digitalWrite(D2, HIGH);//D2. pini lojik HIGH yapıyoruz
  delay(iZaman); //300 ms gecikme sağlıyoruz
  digitalWrite(D2, LOW);//D2. pini lojik LOW yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz
  digitalWrite(D3, HIGH);//D3. pini lojik HIGH yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz
  digitalWrite(D3, LOW);//D3. pini lojik LOW yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz
  digitalWrite(D4, HIGH);//D4. pini lojik HIGH yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz
  digitalWrite(D4, LOW);//D4. pini lojik LOW yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz
  digitalWrite(D5, HIGH);//D5. pini lojik HIGH yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz
  digitalWrite(D5, LOW);//D5. pini lojik LOW yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz  
  digitalWrite(D6, HIGH);//D6. pini lojik HIGH yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz
  digitalWrite(D6, LOW);//D6. pini lojik LOW yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz  
  digitalWrite(D7, HIGH);//D7. pini lojik HIGH yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz
  digitalWrite(D7, LOW);//D7. pini lojik LOW yapıyoruz
  delay(iZaman); // 300 ms gecikme sağlıyoruz  
}
