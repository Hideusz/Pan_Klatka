#include <iostream>

using namespace std;

class Samochod{
    public:
    string marka, model;
    int rocznik;
    float przyspiesznie, pojemnosc, spalanie;

    void dodaj_samochod(Samochod *tab, int n){
        for(int i = 0; i < n; i++)
        {

        cout << "Podaj marke samochodu ";
        cin >> tab[i].marka;
        cout << "Podaj model samochodu ";
        cin >> tab[i].model;
        cout << "Podaj rocznik samochodu ";
        cin >> tab[i].rocznik;
        cout << "Podaj czas przyspieszenia do 100 ";
        cin >> tab[i].przyspiesznie;
        cout << "Podaj pojemnosc ";
        cin >> tab[i].pojemnosc;
        cout << "Podaj spalanie na 100 ";
        cin >> tab[i].spalanie;
        cout << endl;

        }
    }

    void pokaz_samochod(Samochod *tab,int n){
        for(int i = 0; i < n; i++)
        {
        cout << "Samochod " << tab[i].marka << " " << tab[i].model << " rocznik " << tab[i].rocznik  << endl;
        cout << "Rozpedza sie do 100 w " << tab[i].przyspiesznie << " s ma pojemnosc " << tab[i].pojemnosc << " i spala " << tab[i].spalanie << " l na 100 km";
        cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Podaj ile chcesz podac samochodow: ";
    cin >> n;

    Samochod s1;
    Samochod *tab = new Samochod[n];
    s1.dodaj_samochod(tab,n);
    s1.pokaz_samochod(tab,n);

    delete [] tab;
    return 0;
}
