#include "myfunctions.h"
#include <iostream>
#include <clocale>
#include <cmath>
#include <fstream>


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


        cout << endl << endl << "******* Programlar ************ " << endl << "a. Toplama Aracı" << endl << "b. Pozitif-Negatif Oranları Hesaplayıcı" << endl << "c. Çarpım Tablosu" << endl << "d. Baklava dilimi çizme aracı" << endl << "e. Harf pramiti araci" << endl << "g. Mersenne hesaplama" << endl << "f. Faktöriyel alma aracı." << endl << "h. Rasgele sayı." << endl << "j. Toplu hesaplama aracı." << endl << "k. Transpose işlemi" << endl << "l. Pointer örnekleri" << endl << "m. String örnekleri" << endl << "n. Dosya işlemleri " << endl << endl << "Program seçiniz? (Programı kapatmak için 'q' giriniz.)" << endl;
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
        else if (secim =='k'||secim=='K'){
            cout << "----Transpose Alma----" << endl;
            int a[3][3]={1,2,3,4,5,6,7,8,9};

            for(int i =0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout << " "<< a[i][j];
                }
                cout << endl;
            }
            cout << "----Transpose işlemi----" << endl;
            // transpose alma burada yapılıyor
            for (int i=0;i<3;i++){
                for (int j = i+1;j<3;j++){
                    int g= a[j][i];
                    a[j][i] = a[i][j];
                    a[i][j]=g;
                    //swap
                }
            }
            // transpose bastırma
            for (int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout << " " << a[i][j];
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
        else if(secim=='l'||secim=='L'){

            cout << "gostericiler - pointers" << endl;

            int a= 10;
            int *pp; //pp'nin gösterdiği yerdeki değer
            pp= &a; //pp, a'nı adresini gösteriyor

            cout << "a: " << a << endl; //a'nın değeri
            cout << "pp: " << pp << endl; //p'nin adresi (fakat a'yı işaret edecektir)
            cout << "*pp: " << *pp << endl; //p'nin işaret ettiği yerdeki değer
            cout << "&a: " << &a << endl; //a'nın adresi
            cout << "&pp: " << &pp << endl; //p'nin kendi adresi

            cout << "dizilerin gostericiler ile kullanilmasi" << endl;

            int z[3]={1,4,8};

            int *p;
            p=&z[0]; //ya da p=z;

            cout << z[2] << endl; // z dizisinin 2.elemanını(3'ü) bastırıyoruz

            cout << p[2] << endl;
            /*aslında p bir diziye sahip değilken
             * z'yi işaret ettiği için
             * z'nin 2.elemanını basıyor
             * */

            p[1]=6; //p dolayısıyla z dizini işaret ettiği için, onun 1.elemanını 8 olarak güncelleyecektir

            cout << z[1] << endl;

            cout << "dinamik hafiza yontemi - malloc" << endl;

            int *P= (int*)malloc(sizeof(int)*3);
            P[2]=3;
            cout << P[2] << endl;

            int *q= (int*)malloc(sizeof(int)*3);
            *q= 50;
            f(q);

            cout << *q << endl;

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
        else if(secim == 'm' || secim =='M'){

            cout << "saat donusumleri" << endl;

            cout << "lutfen 12'lik sistemde bir saat giriniz" << endl;

            char s[11]; //boyutunu belirtiyoruz
            cin >> s; //kullanıcıdan alıyoruz

            if (s[8]=='P') { //8.karaktere denk geldiği için
                char x[3]; //girilen verilerin ilk üç değerini alıyoruz (değiştirebilmek için)
                x[0]=s[0];
                x[1]=s[1];
                x[2]= '\0'; //bir dizgi olduğu için son karakteri end of string omalı

                /*eğer aşağıdaki saat hesaplamasını yapmak
                 * istemiyorsanız atoi kodunu kullanabilirisiniz kolay yolu olarak
                int saat=0;
                saat += (x[0]-48) *10;
                saat += x[1]-48;
                */

                int saat= atoi(x); // karakter dizisini alıp integer değere çeviriyor
                saat += 12;

                s[0]=(char)48 + saat/10;
                s[1]=(char)48 + saat%10;


                s[8]='\0'; // P ve geri kalan karakterler basılmayacaktır

                cout << "yeni saat: " << s << endl;
            }
            else { //geriye kalan tek durum else olduğu için else yapısını kullandık

                s[8]='\0'; // A ve geri kalan karakterler basılmayacaktır
                cout << "yeni saat: " << s << endl;
            }

            cout << "palindrome" << endl;
            cout << "lutfen bir kelime giriniz.." << endl;

            char c[100]; //100 karakterlik bir boyut ayırdık
            cin >> c;

            char *p,*q;
            p=c; //dizginin en başından başlaması için
            q=c; /* dizginin en sonundan başlaması için bir
     * while döngüsü atayacağız ve end of string kodunu
     * görene kadar ilerlemesini isteyeceğiz.
     * Böylece q işaretçisi kelimenin en sonundan başlamış olacaktır */

            while(*q!='\0') { //q'nun gösterdiği yerdeki değere bakmamız gerektiği için işaretçi kullanıyoruz
                q++;
            }
            q--; //en son eleman \0 olduğu için bir geri gelmesini sağlıyoruz

            bool palindrome=true; //ilk başta tüm kelimeleri palindrome kabul ediyoruz

            while (q>p) { //p ve q birbirine eşit olmadığı zaman (ortada karşılaşmadıklarında)

                if(*p!=*q) { //işaretçi olmalarının sebebi, oradaki değerleri karşılaştırmak istememiz
                    palindrome=false; //eğer bir tane bile farklı eleman bulursak false döndürüyoruz
                }
                p++; //diğer harflere geçmeleri için
                q--;
            }
            //sonuçları ekrana yansıtmak için
            if (palindrome)
                cout << "girilen kelime bir palindrome'dur" << endl;
            else
                cout << "girilen kelime bir palindrome degildir" << endl;


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


        else if (secim == 'n' || secim == 'N' ){


            //dosyayı yazma kismi
            ofstream dosya;
            dosya.open ("deneme.txt");

            if(dosya.is_open()){ //dosyanın açılabilirliğini kontrol ediyor.
                dosya << "yazilim /n";
                dosya.close();
            }
            else {

                cout << "dosya acilmiyor" << endl;
            }

            //dosyayı okuma kısmı
            string satir;

            ifstream dosya2 ("deneme.txt");
            if (dosya2.is_open()) {

                while (getline(dosya2, satir)) { //fstream kaynaklı bir koddur.

                    cout << satir << endl;
                }
                dosya2.close();
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



        // yeni program alanı
        else {
            cout << "(!) Program Bulunamadı..." << endl;
        }



    }




    return 0;
}
