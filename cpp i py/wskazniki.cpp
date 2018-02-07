/*
 * wskazniki.cpp
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int x = 11; 
    cout << x << endl; // wartość zmiennej
    cout << &x << endl; // adres zmiennej w pamięcie
    cout << * &x << endl; // wattość zmiennej pod adresem
    
    int *px; // deklaracja wzkaźnika do liczby całkowitej
    px = &x; // inicjacja wskaźnika
    cout << px << endl; // adres przypisany do wskaźnika
    cout << *px << endl; // wartość wskazywana przez wskaźnika
    
    int y = 100;
    px = &y;
    cout << px << endl; // adres przypisany do wskaźnika
    cout << *px << endl; // wartość wskazywana przez wskaźnika
         
	return 0;
}

