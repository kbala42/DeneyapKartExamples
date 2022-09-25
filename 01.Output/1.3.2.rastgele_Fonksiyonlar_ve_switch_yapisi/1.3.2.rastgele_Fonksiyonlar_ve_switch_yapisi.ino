/*****************************************************************************
Programın Adı: Rastgele fonksiyonlar ile switch yapsını kullanmak

Programın Amacı: DRastgele üreteceğimiz sayılar üzerinden switch
				 yapısının nasıl kullanıcağını öğrenmek

Yazan: Kamil Bala
       kamilbala42@gmail.com
       tw: @tek_elo   
       Yalova Deneyap Atelyesi / 2022

Devrenin arduino ve tinkercad simülasyon versiyonu:

https://www.tinkercad.com/things/dd3GX8Fs6Ut-132rastgele-fonksiyonlar-ve-switch-yapisi/editel

******************************************************************************/
int zaman=200;
int zamanAra=500;


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

	int rastgeleSayi = random (1,12);// 1 ile 12 arasında rastgele sayı belirliyoruz
  
  	switch (rastgeleSayi) // Rastgele sayı kaçsa ona göre fonksiyonu çağırıyoruz
    {
    	case 1:
      		disardanIceriYakSondur(); 
      		delay(zamanAra);
      		break;

        case 2:
      		disardanIceriYak();// foksiyonunu çağırıyoruz
  			ayniAndaSondur(); 
      		delay(zamanAra);
      		break;

    	case 3:
 			iceridenDisariYakSondur(); 
      		delay(zamanAra);
      		break;

        case 4:
  			iceridenDisariYak();
      		ayniAndaSondur();
      		delay(zamanAra);
      		break;
 
    	case 5:
  			sagdanSolaYak(); 
  			ayniAndaSondur(); 
      		delay(zamanAra);
      		break;

        case 6:
			sagdanSolaYakSondur();  
      		delay(zamanAra);
      		break;

    	case 7:
  			soldanSagaYak(); 
  			ayniAndaSondur();  
      		delay(zamanAra);
      		break;

        case 8:
            soldanSagaYakSondur(); // foksiyonunu çağırıyoruz
            delay(zamanAra);
      		break;

        case 9:
            sagdanSolaYak();// foksiyonunu çağırıyoruz
            soldanSagaSondur();// foksiyonunu çağırıyoruz
            delay(zamanAra);
      		break;
  
        case 10:
      		soldanSagaYak();// foksiyonunu çağırıyoruz
  			sagdanSolaSondur();// foksiyonunu çağırıyoruz
  			delay(zamanAra);
      		break;

        case 11:
            iceridenDisariYak();// foksiyonunu çağırıyoruz
            disardanIceriSondur();// foksiyonunu çağırıyoruz
            delay(zamanAra);
      		break;
  
        case 12:
            disardanIceriYak();// foksiyonunu çağırıyoruz
            iceridenDisariSondur();// foksiyonunu çağırıyoruz
            delay(zamanAra);      		  
      		break;
       
    }

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