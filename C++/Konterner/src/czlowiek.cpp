#include "czlowiek.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

czlowiek::czlowiek(string imie, string nazwisko, string numer)
{
    this->imie=imie;
    this->nazwisko=nazwisko;
    this->numer=numer;
}

string czlowiek::wypisz()
{
        cout << "\n\n\nLista osob:\n";
        cout << "Nazwa: " << imie << endl;
        cout << "Autor: " << nazwisko << endl;
        cout << "Numer tel.: " << numer << endl;
}

czlowiek czlowiek::dodawanie()
{
    cout << "\n\n\n|----DODAWANIE_OSOBY_DO_LISTY-----|";
    cout << "\nPodaj imie: ";
    string odp_imie;
    cin >> odp_imie;
    cout << "Nazwisko: ";
    string odp_nazwisko;
    cin >> odp_nazwisko;
    cout << "Numer tel.: ";
    string odp_numer;
    cin >> odp_numer;
    cout << "\n<***ZAKONCZONO_Z_SUKCESEM***>" << endl;
    return czlowiek(odp_imie, odp_nazwisko, odp_numer);
}
