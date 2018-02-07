#include <iostream>
#include "ul_ulamek.h"
    
using namespace std;
    
Ulamek::Ulamek(int l, int m) { 
    licznik = l;
    if (m !=0) mianownik = m;
    else {
        cout << "Minaonwik niemoże być zrem!" << endl;
        exit(1);
    }
}
    
void Ulamek::zapisz(int l, int m) { //definicja metody
    licznik = l;
    if (m !=0) mianownik = m;
    else {
        cout << "Mianonwik niemoże być zrem!" << endl;
        exit(1);
    }
}
    
void Ulamek::wypisz() {
    cout << licznik << "/" << mianownik;
}

int Ulamek::get_l() {
    return licznik;
}

int Ulamek::get_m() {
    return mianownik;
}

void Ulamek::skracaj() {
    // uzyj algorytmnu auklidesa w wersji optymatnej
    ;
}
