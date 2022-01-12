#include <iostream>
using namespace std;

class Zarobki {
    double placa;
    string imie, nazwisko;
public:
    void Oblicz(double zaGodzine , int liczbaGodzin) {
        placa = zaGodzine * liczbaGodzin;
        cout << "Wyplata: " << placa << "zl" << endl;
    }

    void Oblicz(double zaGodzine, int liczbaGodzin, int premia){
        placa = zaGodzine * liczbaGodzin + premia;
        cout << "Wyplata: "<< placa << "zl (w tym premia)"<< endl;
    }

    void Oblicz(string zasilek){
        cout << "Wyplata: "<< zasilek << endl;
    }
    void Oblicz(string imie, string nazwisko,double zaGodzine , int liczbaGodzin) {
        placa = zaGodzine * liczbaGodzin;
        cout << imie << " " << nazwisko <<" zarobil: " << placa << "zl" << endl;
    }
};

int main()
{
Zarobki pracownik1;
Zarobki pracownik2;
Zarobki pracownik3;
Zarobki pracownik4;
pracownik1.Oblicz(20.5,30);
pracownik2.Oblicz(20.5, 30, 500);
pracownik3.Oblicz("zasilek");
pracownik4.Oblicz("Jan","Kowalski",20,30);
}
