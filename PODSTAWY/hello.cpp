/*
 * hello.py
 */


#include <iostream>

using namespace std;

#define ROK_TERAZ 2017
#define ROK_CPP 1991

int parzyste (int n)
{
    int i;
    for (i=0; i<=n; i+=2)
        cout << i << " ";
    return i / 2;
}

int main(int argc, char **argv)

{   string tekst;
    int rok_urodzenia;
    int wiek;
    cout << "Jak masz na imie?" << endl;
    cin >> tekst;
    cout << "Witaj " << tekst << "!"<< endl;
    cout << "Ile masz lat?" << endl;
    cin >> wiek;
    cout << "Urodziłes sie w " << ROK_TERAZ-wiek << endl;
    
    rok_urodzenia = ROK_TERAZ-wiek;
    
    if (rok_urodzenia > ROK_CPP) {
        cout << "Jestem starszy!" << endl;
    }
    else if (rok_urodzenia < ROK_CPP) {
        cout << "Jestem młodszy" << endl;
    }
    else if (rok_urodzenia == ROK_CPP) {
        cout << "Mamy tyle samo lat" << endl;
    }
    
    cout << endl;
    
    int n;
    cout << "Podaj liczne naturalna: ";
    cin >> n;
    cout << endl;
    cout << "Ilosc parzystych: " << parzyste(n);
    
	
	return 0;
}

