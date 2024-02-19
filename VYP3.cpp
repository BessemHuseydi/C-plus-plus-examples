// Veri_Yapilari_Projesi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<string>
#include<ctime>
#include <fstream>

using namespace std;


/// ///////////////////////////////////////////////////////////////

// Basamak sinifin baslangic kod bilogu
class Basamak
{
public:

	Basamak()
	{
		cout << "yapici metdot calisirdi ... " << endl;

		int Deger = Deger;
		Basamak* sonraki = 0;

		cout << "Basamak degeri   :" << Deger << endl;
		cout << "sonraki dugunum adressi    :" << sonraki << endl;
	}

	~Basamak()
	{
		cout << "yikici fonksiyon calisti ...... " << endl;
	}

private:
	int Deger;
	Basamak* sonraki;
};

/////////////////////////////////////////////////////////////////////////////////////////

// Sayi sinifin baslangic kod bilogu

class sayi
{




};
///////////////////////////////////////////////////
int BasamakSayisiHesapla(long sayi) {
	int basamakSayisi = 0;
	long long temp = sayi;

	if (temp == 0) {
		basamakSayisi = 1;
	}
	else {
		while (temp != 0) {
			temp /= 10;
			basamakSayisi++;
		}
	}

	return basamakSayisi;
}

int main()
{
	ofstream DosyaYaz;
	DosyaYaz.open("Sayilar.txt");
	DosyaYaz << "85 75142 56635315 42 4 5654 56914 35640 68 100 31000" << endl;
	DosyaYaz.close();


	ifstream DosyaOku;
	DosyaOku.open("Sayilar.txt");
	if (!DosyaOku.is_open()) {

		cout << "Dosya acılamadı." << endl;
		return 1;
	}
	int  OkulanSayilar;

	int TamSayi[11];

	while (DosyaOku >> OkulanSayilar)
	{
		//int i = 0;
		//TamSayi[i] = OkulanSayilar;
		//i++;
		cout << OkulanSayilar << endl;


	}

	for (int i = 0; i < 11; i++) {
		DosyaOku >> TamSayi[i];
		cout << TamSayi[i] << endl;
	}
	/*int ii = 1;
	while (ii<12)
	{
		cout << "sayilar dizi olarak kopyalandi ve sayilar sunlardir  :" << TamSayi[ii]<<endl;
		ii++;

	}*/

	/*int diziBoyutu = sizeof(TamSayi) / sizeof(TamSayi[0]);

	for (int i = 0; i < diziBoyutu; i++)
	{
		cout << "Tum sayi : " << TamSayi[i];

		int sonuc = BasamakSayisiHesapla(TamSayi[i]);

		for (int i = 0; i < sonuc; i++)
		{
			cout << sonuc;
		}
	}*/
	DosyaOku.close();

	





 



	/// while dongusu
	while (true)
	{
		//program kontrol menusu
		cout << endl << endl;
		cout << " 1. Tek Basamaklari Basa Al :" << endl;
		cout << " 2. Basamaklari Tersle :" << endl;
		cout << " 3. En Buyuk Cikar :" << endl;
		cout << " 4. Cikis :" << endl;
		cout << endl << endl;
		//kullanicidan sayiyi almak
		int secim;
		cout << " Istediniz islemin numarasini giriniz   :"; cin >> secim;

		cout << endl << endl << endl;

		// yaplan secime gore olacak islemlerin if else ile kontorulu 

		if (secim == 1)
		{
			cout << " Tek Basamaklari Basa Al ....." << endl;
		}
		if (secim == 2)
		{
			cout << " Basamaklari Tersle ....." << endl;
		}
		if (secim == 3)
		{
			cout << " En Buyuk Cikar ....." << endl;

		}
		if (secim == 4)
		{
			cout << " Cikis yapiliyor ....." << endl;
			cout << endl << endl;
			break;
		}
		if (secim >= 5)
		{
			cout << " Girdiniz sayi liste disi lutfen belirli aralikta olan sayilari giriniz  :) " << endl;
			cout << endl << endl << endl;
		}
		else
		{
			cout << endl << endl << endl;
			cout << " Islemler yapiliyor......  :) " << endl;
			cout << endl << endl << endl;
		}


 
	}


  


}

 