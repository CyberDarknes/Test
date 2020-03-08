#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;
int wybor;

void kalkulator ()
{
    system("cls");
double a, b, dod, od, mn,  dz;
Sleep(5000);
cout << "Witam W Kalkulatorze!" << endl;
 Sleep(5000);
cout << " Wprowadz liczbe: " ;
    cin >> a;
    cout << " Wprowadz druga liczbe: ";
    cin >> b;
    cout << "-------MENU-------" << endl;
    cout << "==================" << endl;
    cout << "1.Dodawanie" << endl;
    cout << "2.Odejmowanie"<< endl;
    cout << "3.Mnozenie"<< endl;
    cout << "4.Dzielenie"<< endl;
    cout << "5.Wroc do startu"<<endl;
    cout << "Wprowadz wybor: ";
    cin >> wybor;

switch (wybor)
    {
    case 1:
        dod = a + b;
        cout << " Wynik Dodawania: "<<dod<<endl;
        break;
    case 2:
        od = a - b;
        cout << " Wynik Odejmowania: "<<od<<endl;
        break;
    case 3:
        mn = a* b;
        cout << " Wynik Mnozenia: "<<mn<<endl;
        break;
    case 4:
        dz = a / b;
        cout << " Wynik Dzielenia: "<<dz<<endl;
        break;
    default: cout<< "Powrot!"<<endl;
    }

}
void mini_gra ()
{
    system("cls");
Sleep(5000);
cout << "Witam W Mini Grze!" << endl;
 Sleep(5000);
    cout << "-------MENU-------" << endl;
    cout << "==================" << endl;
    cout << "1.Graj" << endl;
    cout << "2.Wroc do menu"<< endl;
    cout << "Wprowadz wybor: ";
    cin >> wybor;

switch (wybor)
    {
    case 1:
int liczba_losowa, strzal ;
cout << "Witaj! Pomysla³em sobie liczbê z zakresu 1-100" << endl;
srand(time(NULL));
liczba_losowa = rand()%100+1;

    while(strzal!=liczba_losowa)
    {
    int ile_prob=0; ile_prob>=-1; ile_prob++;
    cout<<"Zgadnij jaka (to Twoja "<<ile_prob<<" proba) : ";
    cin>>strzal ;

      if(strzal==liczba_losowa)
    cout<<"Uudalo sie! Wygrywasz w "<<ile_prob<<" probie" <<endl;

     else if(strzal<liczba_losowa)
    cout<<"To za malo!"<<endl;

    else if(strzal>liczba_losowa)
    cout<<"To za duzo!"<<endl;
    }
            break;


    default: cout<< "Powrot!"<<endl;
    }

}

void stoper()
{
    system("cls");
    Sleep(5000);
cout << "Witam W Stoperze!" << endl;
    Sleep(5000);
    cout << "-------MENU-------" << endl;
    cout << "==================" << endl;
    cout << "1.Start" << endl;
    cout << "2.Wroc do startu"<< endl;
    cout << "Wprowadz wybor: ";
    cin >> wybor;

switch (wybor)
    {
    case 1:
                for(int i=1; i>=-1; i++)
    {
        Sleep(1000);
        system("cls");
        cout << i <<endl;
    }
        break;


    default: cout<< "Powrot!"<<endl;
    }
}
void srednia()
{
    float oceny[11]; float suma=0, srednia;
system("cls");
Sleep(5000);
cout << "Witam W Liczeniu Sredniej!" << endl;
cout << "-------MENU-------" << endl;
cout << "==================" << endl;
cout << "1.Licz srednia 2 liczby " << endl;
cout << "2.Licz srednia 3 liczby " << endl;
cout << "3.Licz srednia 4 liczby " << endl;
cout << "4.Licz srednia 5 liczby " << endl;
cout << "5.Licz srednia 6 liczby " << endl;
cout << "6.Licz srednia 7 liczby " << endl;
cout << "7.Licz srednia 8 liczby " << endl;
cout << "8.Licz srednia 9 liczby " << endl;
cout << "9.Licz srednia 10 liczby " << endl;
cout << "10.Licz srednia 11 liczby " << endl;
cout << "11.Wroc do startu"<<endl;
cout << "Wprowadz wybor: ";
cin >> wybor;
switch (wybor)
    {
    case 1:

for(int i=0; i<2; i++)
   {
   cout<<endl<<"Podaj "<<i+1<<" ocene: ";
   cin>>oceny[i];
   suma = suma + oceny[i];
   }

   srednia = suma /2 ;
cout<<endl<<"srednia = "<<srednia;
        break;
case 2:

for(int i=0; i<3; i++)
   {
   cout<<endl<<"Podaj "<<i+1<<" ocene: ";
   cin>>oceny[i];
   suma = suma + oceny[i];
   }

   srednia = suma /3 ;
cout<<endl<<"srednia = "<<srednia;

        break;
case 3:

for(int i=0; i<4; i++)
   {
   cout<<endl<<"Podaj "<<i+1<<" ocene: ";
   cin>>oceny[i];
   suma = suma + oceny[i];
   }

   srednia = suma /4 ;
cout<<endl<<"srednia = "<<srednia;

        break;
case 4:

for(int i=0; i<5; i++)
   {
   cout<<endl<<"Podaj "<<i+1<<" ocene: ";
   cin>>oceny[i];
   suma = suma + oceny[i];
   }

   srednia = suma /5 ;
cout<<endl<<"srednia = "<<srednia;

        break;
case 5:

for(int i=0; i<6; i++)
   {
   cout<<endl<<"Podaj "<<i+1<<" ocene: ";
   cin>>oceny[i];
   suma = suma + oceny[i];
   }

   srednia = suma /6 ;
cout<<endl<<"srednia = "<<srednia;

        break;
case 6:

for(int i=0; i<7; i++)
   {
   cout<<endl<<"Podaj "<<i+1<<" ocene: ";
   cin>>oceny[i];
   suma = suma + oceny[i];
   }

   srednia = suma /7 ;
cout<<endl<<"srednia = "<<srednia;

        break;
case 7:

for(int i=0; i<8; i++)
   {
   cout<<endl<<"Podaj "<<i+1<<" ocene: ";
   cin>>oceny[i];
   suma = suma + oceny[i];
   }

   srednia = suma /8 ;
cout<<endl<<"srednia = "<<srednia;

        break;
case 8:

for(int i=0; i<9; i++)
   {
   cout<<endl<<"Podaj "<<i+1<<" ocene: ";
   cin>>oceny[i];
   suma = suma + oceny[i];
   }

   srednia = suma /9 ;
cout<<endl<<"srednia = "<<srednia;

        break;
case 9:

for(int i=0; i<10; i++)
   {
   cout<<endl<<"Podaj "<<i+1<<" ocene: ";
   cin>>oceny[i];
   suma = suma + oceny[i];
   }

   srednia = suma /10 ;
cout<<endl<<"srednia = "<<srednia;

        break;
case 10:

for(int i=0; i<11; i++)
   {
   cout<<endl<<"Podaj "<<i+1<<" ocene: ";
   cin>>oceny[i];
   suma = suma + oceny[i];
   }

   srednia = suma /11 ;
cout<<endl<<"srednia = "<<srednia;

        break;

default: cout<< "Powrot!"<<endl;
    }
}


int main()
{

    while(true)
    {
    Sleep(5000);
    system("cls");

    cout << "Witam W MIKRO_OS!" << endl;
    Sleep(5000);
    cout << "-------START-------" << endl;
    cout << "===================" << endl;
    cout << "1.Kalkulator" << endl;
    cout << "2.Mini_Gra"<< endl;
    cout << "3.Stoper"<< endl;
    cout << "4.Liczenie_Sredniej"<< endl;
    cout << "5.Wylacz_MIKRO_OS"<< endl;
    cout << "Wprowadz wybor: ";
    cin >> wybor;


    switch (wybor)
    {
    case 1:
        kalkulator();
        break;
    case 2:
        mini_gra();
        break;

    case 3:
        stoper();
        break;

    case 4:
        srednia();
        break;
    case 5:
        exit(0);
        break;
    default: cout<< "NIE MA TAKIEJ OPCJI W MENU START!!!";
    }
    }
    return 0;
}
