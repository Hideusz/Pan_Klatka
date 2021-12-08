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
    Psy pies_Janka;
    pies_Janka.imie = "Azor";
    pies_Janka.rasa = "Buldog";
    pies_Janka.wiek = 10;
    Psy pies_Radzia;
    pies_Radzia.imie = "Pimpek";
    pies_Radzia.rasa = "Kundel";
    pies_Radzia.wiek = 6;
    Psy pies_Kubusia;
    pies_Kubusia.imie = "Jambo";
    pies_Kubusia.rasa= "Mieszaniec";
    pies_Kubusia.wiek = 3;
    Psy pies_Seby;
    pies_Seby.imie= "Doris";
    pies_Seby.rasa= "Owczarek niemiecki";
    pies_Seby.wiek= 5;

    cout << "Pies Janka ma na imie "<< pies_Janka.imie << endl;
    cout << pies_Janka.imie << " jest rasy "<< pies_Janka.rasa << " i ma "<< pies_Janka.wiek << " lat."<< endl;
    cout << endl;
    cout << "Pies Radzia ma na imie "<< pies_Radzia.imie << endl;
    cout << pies_Radzia.imie << " jest rasy "<< pies_Radzia.rasa << " i ma "<< pies_Radzia.wiek << " lat."<< endl;
    cout << endl;
    cout << "Pies Kubusia ma na imie "<< pies_Kubusia.imie << endl;
    cout << pies_Kubusia.imie << " jest rasy "<< pies_Kubusia.rasa << " i ma "<< pies_Kubusia.wiek << " lat."<< endl;
    cout << endl;
    cout << "Pies Seby ma na imie "<< pies_Seby.imie << endl;
    cout << pies_Seby.imie << " jest rasy "<< pies_Seby.rasa << " i ma "<< pies_Seby.wiek << " lat."<< endl;
}
