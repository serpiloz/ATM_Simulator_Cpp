#include<iostream>
using namespace std;
int main(){
	int musteriNo,pin,bakiye=5000;
	int dogruMusteriNo= 4587;
	int dogruPin=9632;
	
	int secim;
	cout << "ATM S�STEM�NE HO� GELD�N�Z:"<<endl;
	cout<<"l�tfen m��teri numaran�z� giriniz:"<<endl;
	cin>> musteriNo;
	cout<<"l�tfen pininizi giriniz:"<<endl;
	cin >>pin;
		if(musteriNo==dogruMusteriNo && pin==dogruPin)
		{
			cout<<"G�R�� BA�ARILI..."<<endl;
			 cout<<"l�tfen girmek istedi�iniz i�lemi se�iniz."<<endl;
			 cout<<"bakiye g�r�nt�lemek i�in 1"<<endl;
			 cout<<"para cekmek i�in 2"<<endl;
			 cout<<"para yat�rmak i�in 3"<<endl;
			 cout << "�ifre de�i�tirmek i�in 4"<<endl;
			 cout<<"c�kmak i�in 5"<<endl;
			 cout<<"se�iminiz..."<<endl;
			 cin >>secim ;
			 
			 
			  if(secim==1)
			 {
			 	cout<<"mevcut bakiyeniz:"<<bakiye<<"tl'dir"<<endl;
			 }
			 else if(secim==2)
			 {
			 	int miktar;
			 	cout<<"�ekmek istedi�iniz miktar� giriniz..."<<endl;
			 	cin >>miktar;
			 	if(miktar<bakiye)
			 	{
			 		bakiye -=miktar;
			 		cout <<"i�lem ba�ar�l�.Yeni bakiyeniz"<<bakiye<<"tl dir.."<<endl;
			 		
				 }
				 else {
				 cout << "bakiye yetersiz..."<<endl;
		        	}
			 }
			 else if (secim==3)
			 {
			 int miktar;
			 cout<<"yat�rmak istedi�iniz miktar� giriniz:"<<endl;
			 cin >>miktar;
			 if(miktar>0)
			 {
			 	
			 bakiye +=miktar;
			 cout << "para transferi ger�ekle�ti kalan bakiyeniz"<<bakiye<<"tl'dir."<<endl;
		}
			 else  {
			       cout << "ge�ersiz tutar."<<endl; 
		     	   }
			 }
			 else if(secim==4)
			 {
              int yeniSifre;
             cout << "Yeni �ifrenizi giriniz: ";
             cin >> yeniSifre;
             dogruPin = yeniSifre;  
            cout << "�ifreniz ba�ar�l� bir �ekilde de�i�tirildi." << endl;
			 }
			 else if(secim==5)
			 {
			 	cout<<"��k�� yap�l�yor..iyi g�nler"<<endl;
			 	
			 }
			 else 
			 cout <<"ge�ersiz se�im"<<endl;
		}
}
