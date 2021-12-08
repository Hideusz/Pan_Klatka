#include <iostream>

using namespace std;

class Osoba{
public :
    string imie, nazwisko;
    int wiek, ocena;

    void wyswietl(Osoba *tab)
    {
        for(int i = 0; i < 1; i++)
        {
            cout << nazwisko << " " << imie << " otrzymal ocene: " << tab[i].ocena << " z matematyki" <<endl;
        }
    }

    void matma(Osoba *tab)
    {
        for(int i = 0; i < 1; i++)
        {
            cout << "Podaj ocene ucznia: ";
            cin >> tab[i].ocena;
        }
    }
};

int main()
{
    Osoba uczen1;
    Osoba uczen2;
    Osoba *tab = new Osoba[1];
    uczen1.imie = "Artur";
    uczen1.nazwisko = "Klatka";
    uczen2.imie = "Radek";
    uczen2.nazwisko = "Biel";

    uczen1.matma(tab);
    uczen1.wyswietl(tab);
    uczen2.matma(tab);
    uczen2.wyswietl(tab);
    delete [] tab;
    return 0;
}
