#include "myfunctions.h"
#include <iostream>
#include <stdio.h>
#include <locale.h>



#ifdef WIN32
#include <windows.h>
#endif

#ifdef linux

#endif
using namespace std;



int main()
{
    char exit;
    setlocale(LC_ALL, "Turkish");

    //Sistem color
#ifdef WIN32

    setlocale(LC_ALL, "tr-TR");
#endif



    cout << "  (C)Copyright Oğuzhan DUYAR 2021.  " << endl;
    while (4 == 4)
    {




        char secim;


        cout << endl << endl << "******* Programlar ************ " << endl << "a. Toplama Aracı" << endl << "b. Pozitif-Negatif Oranları Hesaplayıcı" << endl << "c. Çarpım Tablosu" << endl << "d. Baklava dilimi çizme aracı" << endl << "e. Harf pramiti araci" << endl << "f. Fonksiyon alma aracı." << endl << "Program seçiniz? (Programı kapatmak için 'q' giriniz.)" << endl;
        cin >> secim;


        if (secim == 'q' || secim == 'Q')
        {
            break;
        }
#ifdef WIN32
        system("cls");
#endif

#ifdef linux
        system("clear");
#endif


        if (secim == 'a' || secim == 'A')
        {
            int tatoplam = 0;
            int tasayi = 0;
            int taokunan = 0;
            while (4 == 4)
            {
                cout << "Sayiları giriniz. ( İşlemi tamamlamak için '-1' giriniz.)" << endl;
                cin >> taokunan;
                if (taokunan == -1)
                {
                    break;
                }
                tatoplam += taokunan;
                tasayi++;
                cout << "Toplam=" << tatoplam << endl << endl;
            }

            cout << "Toplam=" << tatoplam << endl;
            cout << "Girilen sayi=" << tasayi << endl;
            cout << "Aritmetik Ortalama=" << (float)tatoplam / tasayi << endl;
            cout << "Programdan çıkılsınmı? (E/H) :";
            cin >> exit;
            if (exit == 'e' || exit == 'E')
            {
                break;
            }
#ifdef WIN32
            system("cls");
#endif

#ifdef linux
            system("clear");
#endif

        }
        else if (secim == 'b' || secim == 'B') {

            int bn;
            cout << "Lütfen Kaç sayı hesaplayacağınızı giriniz." << endl;
            cin >> bn;
            int besayi = 0, basayi = 0, bssayi = 0;
            cout << "Lütfen sayıları giriniz:" << endl;
            for (int i = 0; i < bn; i++)
            {
                int bg;
                cin >> bg;
                if (bg > 0)
                    basayi++;
                else if (bg < 0)
                    besayi++;
                else
                    bssayi++;



            }
            cout << "Pozitiflerin oranı : " << (float)basayi / bn << endl;
            cout << "Negatiflerin oranı : " << (float)besayi / bn << endl;
            cout << "Sıfırların oranı : " << (float)bssayi / bn << endl;

            cout << endl << "Programdan çıkılsınmı? (E/H) :";
            cin >> exit;
            if (exit == 'e' || exit == 'E')
            {
                break;
            }
#ifdef WIN32
            system("cls");
#endif

#ifdef linux
            system("clear");
#endif
        }

        else if (secim == 'c' || secim == 'C') {
            cout << "--- Çarpım Tablosu ---" << endl;

            for (int i = 1; i < 11; i++)
            {
                for (int j = 1; j < 11; j++)
                {
                    cout << i * j << "--";
                }
                cout << endl;
            }

            cout << endl << "Programdan çıkılsınmı? (E/H) :";
            cin >> exit;
            if (exit == 'e' || exit == 'E')
            {
                break;
            }
#ifdef WIN32
            system("cls");
#endif

#ifdef linux
            system("clear");
#endif




        }
        else if (secim == 'd' || secim == 'D')
        {
            cout << "Baklava diliminin boyutunu giriniz." << endl;

            int dboyut;

            cin >> dboyut;

            for (int i = 0; i < dboyut; i++)
            {

                int dy, db;

                if (i < dboyut / 2)
                {
                    dy = 2 * i + 1;
                }
                else if (i == dboyut)
                {
                    dy = 2 * (i - 1) + 1;
                }
                else
                {
                    dy = 2 * (dboyut - i - 1) + 1;
                }

                db = (dboyut - dy) / 2;
                for (int j = 0; j < db; j++)
                {
                    cout << " ";
                }
                for (int j = 0; j < dy; j++)
                {
                    cout << "*";
                }
                cout << endl;






            }

            cout << endl << "Programdan çıkılsınmı? (E/H) :";
            cin >> exit;
            if (exit == 'e' || exit == 'E')
            {
                break;
            }
#ifdef WIN32
            system("cls");
#endif

#ifdef linux
            system("clear");
#endif


        }
        else if (secim=='e' || secim == 'E')
    {
    cout << "Lütfen bir büyük harf giriniz." << endl;
    char dg;
    cin >> dg;
    
    for (int i = dg-65 ; i < 26; i++)
    {
        for (int j = dg-65; j <= i; j++)
        {
            cout << (char)(j + dg);
        }
        for (int j = i-1; j >=dg-65; j--)
        {
            cout << (char)(j + 65);
        }


        

        cout << endl;



    }

    cout << endl << "Programdan çıkılsınmı? (E/H) :";
    cin >> exit;
    if (exit == 'e' || exit == 'E')
    {
        break;
    }
#ifdef WIN32
    system("cls");
#endif

#ifdef linux
    system("clear");
#endif

        

    }

        else if (secim =='f' || secim == 'F')
    {

    int fsayi;
    cout << "Fonksiyonunu almak istediğiniz sayiyı giriniz:";
    cin >> fsayi;
    cout << endl << fsayi << " Sayısının fonksiyonu eşittir:" << fonksiyon(fsayi) << endl;
    cout << endl << "Programdan çıkılsınmı? (E/H) :";
    cin >> exit;
    if (exit == 'e' || exit == 'E')
    {
        break;
    }
#ifdef WIN32
    system("cls");
#endif

#ifdef linux
    system("clear");
#endif
    }





        // yeni program alanı
        else {
            cout << "(!) Program Bulunamadı..." << endl;
        }



    }



    return 0;
}
