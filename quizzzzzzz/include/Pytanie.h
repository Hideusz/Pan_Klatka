#ifndef PYTANIE_H
#define PYTANIE_H
#include <iostream>
using namespace std;

class Pytanie
{
    public:
       string trescPytania;
       string a,b,c;
       string poprawna;
       string odpowiedz;
       int punkty,nrPytania;

       void wczytajPytanie();
       void zadajPytanie();
       void sprawdz();
};

#endif // PYTANIE_H
