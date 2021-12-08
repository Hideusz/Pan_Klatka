#include <iostream>
using namespace std;

class Psy
{
public:
    string imie;
    string rasa;
    int wiek;
};

int main (){
    int n = 4;
    Psy *tab = new Psy[n];

    for(int i= 0; i<n; i++)
    {
        cout << "Podaj imie psa ";
        cin >> tab[i].imie;
        cout << "Podaj rase psa " ;
        cin >> tab[i].rasa;
        cout << "Podaj wiek psa ";
        cin >> tab[i].wiek;
        cout << endl;

    }
    for(int i= 0; i<n; i++)
    {
        cout << "Imie "<< tab[i].imie << " rasa " << tab[i].rasa << " wiek " << tab[i].wiek << endl << endl;
    }
    delete [] tab;
}
