#include<iostream>
using namespace std;
int main(){
	int musteriNo,pin,bakiye=5000;
	int dogruMusteriNo= 4587;
	int dogruPin=9632;
	
	int secim;
	cout << "ATM SÝSTEMÝNE HOÞ GELDÝNÝZ:"<<endl;
	cout<<"lütfen müþteri numaranýzý giriniz:"<<endl;
	cin>> musteriNo;
	cout<<"lütfen pininizi giriniz:"<<endl;
	cin >>pin;
		if(musteriNo==dogruMusteriNo && pin==dogruPin)
		{
			cout<<"GÝRÝÞ BAÞARILI..."<<endl;
			 cout<<"lütfen girmek istediðiniz iþlemi seçiniz."<<endl;
			 cout<<"bakiye görüntülemek için 1"<<endl;
			 cout<<"para cekmek için 2"<<endl;
			 cout<<"para yatýrmak için 3"<<endl;
			 cout << "þifre deðiþtirmek için 4"<<endl;
			 cout<<"cýkmak için 5"<<endl;
			 cout<<"seçiminiz..."<<endl;
			 cin >>secim ;
			 
			 
			  if(secim==1)
			 {
			 	cout<<"mevcut bakiyeniz:"<<bakiye<<"tl'dir"<<endl;
			 }
			 else if(secim==2)
			 {
			 	int miktar;
			 	cout<<"çekmek istediðiniz miktarý giriniz..."<<endl;
			 	cin >>miktar;
			 	if(miktar<bakiye)
			 	{
			 		bakiye -=miktar;
			 		cout <<"iþlem baþarýlý.Yeni bakiyeniz"<<bakiye<<"tl dir.."<<endl;
			 		
				 }
				 else {
				 cout << "bakiye yetersiz..."<<endl;
		        	}
			 }
			 else if (secim==3)
			 {
			 int miktar;
			 cout<<"yatýrmak istediðiniz miktarý giriniz:"<<endl;
			 cin >>miktar;
			 if(miktar>0)
			 {
			 	
			 bakiye +=miktar;
			 cout << "para transferi gerçekleþti kalan bakiyeniz"<<bakiye<<"tl'dir."<<endl;
		}
			 else  {
			       cout << "geçersiz tutar."<<endl; 
		     	   }
			 }
			 else if(secim==4)
			 {
              int yeniSifre;
             cout << "Yeni þifrenizi giriniz: ";
             cin >> yeniSifre;
             dogruPin = yeniSifre;  
            cout << "Þifreniz baþarýlý bir þekilde deðiþtirildi." << endl;
			 }
			 else if(secim==5)
			 {
			 	cout<<"çýkýþ yapýlýyor..iyi günler"<<endl;
			 	
			 }
			 else 
			 cout <<"geçersiz seçim"<<endl;
		}
}
