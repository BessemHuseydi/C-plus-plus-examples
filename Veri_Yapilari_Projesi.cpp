#include <iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<ctime>

using namespace std;


class Dugum
{
public:

    Dugum(int value)
    {
        this->value = value;
        this->next = 0;
    }
    ~Dugum()
    {

    }

    int value;
    Dugum* next;
};


class Sayi
{
public:
    Sayi()
    {
        ilk = 0;
    }

    ~Sayi()
    {
        Dugum* gec = ilk;
        while (gec != 0)
        {
            Dugum* sil = gec;
            gec = gec->next;
            delete sil;
        }
    }
    void Ekle(int value)
    {
        Dugum* yeni = new Dugum(value);
        if (ilk == 0)
        {
            ilk = yeni;
            return;
        }
        else
        {
            Dugum* gec = ilk;
            while (gec->next != 0)
            {
                gec = gec->next;
            }
            gec->next = yeni;
        }

    }

    int adressSonUcHanesi(int* p) {
        uintptr_t address = reinterpret_cast<uintptr_t>(p);
        //int address = p;
        int lastThreeDigits = address % 1000;
        return lastThreeDigits;
    }

    void BasamaklaraAyir(int sayi) {

        int basamakSayisi = static_cast<int>(log10(sayi)) + 1;


        for (int i = basamakSayisi; i > 0; i--) {

            int basamak = (sayi / static_cast<int>(pow(10, i - 1))) % 10;

            cout << "*" << adressSonUcHanesi(&basamak) << "*" << setw(1) << "-->" << basamak << setw(10);

        }
        cout << endl << endl;
    }
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

    void Yazdir()
    {
        cout << setw(14) << "address" << setw(53) << "son uc hane " << setw(20) << endl;
        cout << setw(12) << "value" << setw(53) << "basamaklar" << setw(20) << endl;
        cout << "----------------------------(1)-------(2)-------(3)-------(4)-------(5)-------(6)-------(7)-------(8)-------" << endl << endl << endl;
        Dugum* gec = ilk;

        while (gec != 0)
        {
           
            cout << setw(10) << gec << setw(35);
            cout << endl << endl;
            cout << setw(10) << gec->value << setw(20);   BasamaklaraAyir(gec->value);
            cout << endl << endl;
           
            gec = gec->next;
        }

    }
private:
    Dugum* ilk;

};

class Basamak
{
public:



    int veri;
    Basamak** sonraki;
};

class SayiListesi
{
    SayiListesi()
    {
        first = 0;

    }

    ~SayiListesi()
    {
        Dugum* gec = first;
        while (gec != 0)
        {
            Dugum* sil = gec;
            gec = gec->next;
            delete sil;
        }
    }


private:
    Dugum* first;
};








int main()
{
    ofstream DosyaYaz;
    DosyaYaz.open("Sayilar.txt");
    DosyaYaz << "85 75142 56635315 42 4 5654 56914 35640 68 100 31000" << endl;
    DosyaYaz.close();

    ifstream dosya("sayilar.txt");
    if (!dosya.is_open()) {
        cerr << "Dosya açılamadı!" << endl;
        return 1;
    }

    int sayilar[12]; // On bir sayıyı saklayacak bir dizi
    for (int i = 1; i < 12; i++)
    {
        dosya >> sayilar[i];
    }

    dosya.close();







}