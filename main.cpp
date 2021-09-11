#include "myfunctions.h"
#include <iostream>
#include <clocale>
#include <cmath>



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





    cout << "  (C)Copyright Oğuzhan DUYAR 2021.  " << endl;
    while (4 == 4)
    {




        char secim;


        cout << endl << endl << "******* Programlar ************ " << endl << "a. Toplama Aracı" << endl << "b. Pozitif-Negatif Oranları Hesaplayıcı" << endl << "c. Çarpım Tablosu" << endl << "d. Baklava dilimi çizme aracı" << endl << "e. Harf pramiti araci" << endl << "g. Mersenne hesaplama" << endl << "f. Faktöriyel alma aracı." << endl << "h. Rasgele sayı." << endl << "j. Toplu hesaplama aracı." << endl << endl << "Program seçiniz? (Programı kapatmak için 'q' giriniz.)" << endl;
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
    cout << "Faktöriyelini almak istediğiniz sayiyı giriniz:";
    cin >> fsayi;
    cout << endl << fsayi << " Sayısının Faktöriyeli eşittir:" << factorialr(fsayi) << endl;
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

        else if (secim == 'g' || secim == 'G')
    {
    cout << "Mersenne sayısını hesaplamak için değer giriniz:";
    int gg;
    cin >> gg;
    for (int i = 1; i <= gg; i++)
    {
        cout << ust(2, i)-1 << endl;
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
    else if (secim == 'h' || secim == 'H'){

        int rng;
        srand(time(NULL));
        rng= rand()%6+1;
        cout << "Zar =" << rng << endl;
        rng =rand()%2;
        if (rng == 1)
            cout << "Yazı tura sonucu = TURA." << endl;
        else
            cout << "Yazı tura sonucu = YAZI." << endl;
        rng=rand()%100;
            cout << "0-100 arası rasgele sayı ="<<rng << endl;
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
        else if(secim == 'j' || secim == 'J'){
            int n=0;
            cout << "Kaç sayı hesaplanacağını girin :" ;
            cin >> n;
            int a[n];
            cout << "Hesaplanacak sayıları girin." <<  endl;
            for(int i=0;i<n;i++){
                cin >> a[i];
            }
            // en büyük
            int eb = a[0];
            for(int i=1;i<n;i++){
                if(a[i]>eb){
                    eb = a[i];
                }
            }
            cout << "En büyük sayı: " << eb << endl;
            // en küçük
            int ek=a[0];
            for(int i=1;i<n;i++){
                if(a[i]<ek){
                    ek = a[i];
                }
            }
            cout << "En küçük sayı: " << ek << endl;
            int toplam =0;
            long carpim =1;
            for(int i=0;i<n;i++){
                toplam += a[i];
                carpim *= a[i];
            }
            cout << "Toplamı : "  << toplam << endl;
            cout << "Çarpımı : "  << carpim << endl;
            cout << "Aritmetik ortalaması: "<< (float)toplam/n << endl;
            cout << "Geometrik ortalaması: "<< pow(carpim,(float)1/n) << endl;
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
