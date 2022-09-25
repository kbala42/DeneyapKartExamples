/*****************************************************************************
Programın Adı: Kullanıcı tanımlı fonksiyonlar

Programın Amacı: Daha önce kullandığımız programları kullanıcı
				 tanımlı fonksiyonlar içinde kullanmak. Böylece
                 fonksiyon kullanımının programlamaya ne kadar 
                 esneklik kazandırdığını göreceğiz

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/4nuzdfuWXex-131fonksiyonlar/editel

******************************************************************************/

int zaman=300;
int zamanAra=1000;

void setup() {
  
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz

  for(int i=7; i>=0; i--)
  {
  	pinMode(pinler[i],OUTPUT);
  }

}

void loop() 
{
  int pinler[] = {D0, D1, D2, D3, D4, D5, D6, D7}; // pinleri bir dizi şeklinde tanımlıyoruz

  disardanIceriYakSondur(); // foksiyonunu çağırıyoruz
  
  delay(zamanAra);
  
  disardanIceriYak();// foksiyonunu çağırıyoruz
  ayniAndaSondur();
  
  delay(zamanAra);
  
  iceridenDisariYakSondur();// foksiyonunu çağırıyoruz
  
  delay(zamanAra);
  
  iceridenDisariYak();// foksiyonunu çağırıyoruz
  ayniAndaSondur();// foksiyonunu çağırıyoruz
  
  delay(zamanAra);
  
  sagdanSolaYak();// foksiyonunu çağırıyoruz
  ayniAndaSondur();// foksiyonunu çağırıyoruz
  
  zamanAra=500;
  
  sagdanSolaYakSondur(); // foksiyonunu çağırıyoruz
  
  zamanAra=500;
  
  soldanSagaYak();// foksiyonunu çağırıyoruz
  ayniAndaSondur();// foksiyonunu çağırıyoruz
  
  delay(zamanAra);
  
  soldanSagaYakSondur(); // foksiyonunu çağırıyoruz
  
  delay(zamanAra);
  
  sagdanSolaYak();// foksiyonunu çağırıyoruz
  soldanSagaSondur();// foksiyonunu çağırıyoruz
  
  delay(zamanAra);
  
  soldanSagaYak();// foksiyonunu çağırıyoruz
  sagdanSolaSondur();// foksiyonunu çağırıyoruz
  
  delay(zamanAra);
  
  iceridenDisariYak();// foksiyonunu çağırıyoruz
  disardanIceriSondur();// foksiyonunu çağırıyoruz
  
  delay(zamanAra);
  
  disardanIceriYak();// foksiyonunu çağırıyoruz
  iceridenDisariSondur();// foksiyonunu çağırıyoruz
  
  delay(zamanAra);
}


void disardanIceriYakSondur()// dönüşsüz fonksiyon tanımı yapıyoruz
{  
  int j=7;
  for(int i=0; i<4;i++)
  {
    
    digitalWrite(i, HIGH);
    digitalWrite(j, HIGH);
    delay(zaman);
    digitalWrite(i, LOW);
    digitalWrite(j, LOW);
    j--;
  }
  delay(zaman);
  
}

void disardanIceriYak()// dönüşsüz fonksiyon tanımı yapıyoruz
{
  int j=7;
  for(int i=0; i<4;i++)
  {
    
    digitalWrite(i, HIGH);
    digitalWrite(j, HIGH);
    delay(zaman);
    j--;
  }
}

void ayniAndaYak()// dönüşsüz fonksiyon tanımı yapıyoruz
{
  for(int i=7; i>=0; i--)
  {
  	digitalWrite(i,HIGH);
  }
  delay(zaman);
}

void ayniAndaSondur()// dönüşsüz fonksiyon tanımı yapıyoruz
{
  for(int i=7; i>=0; i--)
  {
  	digitalWrite(i,LOW);
  }
  delay(zaman);
}

void iceridenDisariYakSondur()// dönüşsüz fonksiyon tanımı yapıyoruz
{
  int j=4;
  for(int i=3; i>=0;i--)
  {
    
    digitalWrite(i, HIGH);
    digitalWrite(j, HIGH);
    delay(zaman);
    digitalWrite(i, LOW);
    digitalWrite(j, LOW);
    j++;
  }
}

void iceridenDisariYak()// dönüşsüz fonksiyon tanımı yapıyoruz
{
  int j=4;
  for(int i=3; i>=0;i--)
  {
    
    digitalWrite(i, HIGH);
    digitalWrite(j, HIGH);
    delay(zaman);
    j++;
  }
}


void sagdanSolaYak()// dönüşsüz fonksiyon tanımı yapıyoruz                                                                 
{
  for(int i=7; i>=0; i--)
  {
    
    digitalWrite(i, HIGH);
    delay(zaman);
  }
}

void sagdanSolaYakSondur() // dönüşsüz fonksiyon tanımı yapıyoruz                                                                
{
  for(int i=7; i>=0; i--)
  {    
    digitalWrite(i, HIGH);
    delay(zaman);
    digitalWrite(i, LOW);
    delay(zaman);
  }
}

void soldanSagaYak() // dönüşsüz fonksiyon tanımı yapıyoruz                                                                
{
  for(int i=0; i<8; i++)
  {
    
    digitalWrite(i, HIGH);
    delay(zaman);
  }
}


void soldanSagaYakSondur() // dönüşsüz fonksiyon tanımı yapıyoruz                                                                
{
  for(int i=0; i<8; i++)
  {    
    digitalWrite(i, HIGH);
    delay(zaman);
    digitalWrite(i, LOW);
    delay(zaman);
  }
}

void soldanSagaSondur()// dönüşsüz fonksiyon tanımı yapıyoruz                                                                 
{
  for(int i=0; i<8; i++)
  {
    
    digitalWrite(i, LOW);
    delay(zaman);
  }
}

void sagdanSolaSondur()// dönüşsüz fonksiyon tanımı yapıyoruz                                                                 
{
  for(int i=7; i>=0;i--)
  {
    
    digitalWrite(i, LOW);
    delay(zaman);
  }
}

void disardanIceriSondur()// dönüşsüz fonksiyon tanımı yapıyoruz
{
  int j=7;
  for(int i=0; i<4; i++)
  {
    
    digitalWrite(i, LOW);
    digitalWrite(j, LOW);
    delay(zaman);
    j--;
  }
}

void iceridenDisariSondur()// dönüşsüz fonksiyon tanımı yapıyoruz
{
  int j=4;
  for(int i=3; i>=0; i--)
  {
    
    digitalWrite(i, LOW);
    digitalWrite(j, LOW);
    delay(zaman);
    j++;
  }
}