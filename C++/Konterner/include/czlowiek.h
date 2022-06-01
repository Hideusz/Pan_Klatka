#ifndef CZLOWIEK_H
#define CZLOWIEK_H
#include <iostream>
using namespace std;

class czlowiek
    {
    public:
        string imie;
        string nazwisko;
        string numer;
        czlowiek(string, string, string);
        czlowiek dodawanie();
        string wypisz();
    };

#endif // CZLOWIEK_H
