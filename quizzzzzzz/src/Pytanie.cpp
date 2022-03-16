#include "Pytanie.h"
#include <iostream>
#include <fstream>
using namespace std;

void Pytanie::wczytajPytanie(){
    fstream plik;
    plik.open("quiz.txt",ios::in);

    plik.close();
}

void Pytanie::zadajPytanie(){

}

void Pytanie::sprawdz(){

}
