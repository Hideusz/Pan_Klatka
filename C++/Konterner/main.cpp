#include <iostream>
#include <vector>
#include <algorithm>
#include "czlowiek.h"
using namespace std;



    int main()
    {
        int x = 0;
        vector < czlowiek > osoba;
        cout << "Baza Osob\n1.- Lista osob\n2.- Dodaj osobe\n3.- Wyjscie" << endl;
        char odp;
        do
        {
            cin >> odp;
            switch( odp )
            {
                case '1':
                    for( int i = 0; i < osoba.size(); i++ )
                    {
                            osoba[i].wypisz();
                    }
                    break;

                case '2':
                    osoba.push_back(osoba[x].dodawanie());
                    break;
            }

        }
        while( odp != '3' );
        return 0;
}
