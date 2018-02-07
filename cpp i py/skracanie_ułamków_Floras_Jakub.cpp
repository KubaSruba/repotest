/*
 * ulamek.cpp
 * 
 * 
 *
 * Copyright 2018  <>
 */

#include <iostream>
#include <cstdlib>

using namespace std;

class Ulamek {
private:
	int licznik;
	int mianownik;
	
	int Euklides(int l, int m) {if(m != 0) return Euklides(m, l%m); return l;}
	
public:
	Ulamek()		{};
	Ulamek(int, int);
	~Ulamek()		{};
	
	void zapisz(int, int);
	void wypisz()			{ cout << licznik << "/" << mianownik << endl; }
	void skracaj_It();
	void skracaj_Re();
	
	int get_L()				{ return licznik; }
	int get_M()				{ return mianownik; }
};

Ulamek::Ulamek(int l, int m){
	licznik = l;
	
	if(m != 0)
		mianownik = m;
	else{
		cout << "Mianownik nie moze byc zerem!" << endl;
		exit(1);
	}
}

void Ulamek::zapisz(int l, int m){
	licznik = l;
	if(m != 0)
		mianownik = m;
	else{
		cout << "Mianownik nie moze byc zerem!" << endl;
		exit(1);
	}
}

void Ulamek::skracaj_It(){
	int l = licznik;
	int m = mianownik;
	int p;	
	
	while(m != 0){
		p = m;
		m = l%m;
		l = p;
	}
	
	licznik /= l;
	mianownik /= l;
}

void Ulamek::skracaj_Re(){
	int a = Euklides(licznik, mianownik);
	licznik /= a;
	mianownik /= a;
}

int main() {
	Ulamek t1(4, 10);
	Ulamek t2(10, 25);
	Ulamek t3(12, 18);
	Ulamek t4(5, 70);
    Ulamek t5(6, 6);
	
	t1.wypisz();
	t2.wypisz();
	t3.wypisz();
	t4.wypisz();
    t5.wypisz();
	
	t1.skracaj_It();
	t2.skracaj_It();
	t3.skracaj_It();
	t4.skracaj_It();
	t5.skracaj_It();
	
	cout << endl << "Ulamki skrocone: " << endl;
	
	t1.wypisz();
	t2.wypisz();
	t3.wypisz();
	t4.wypisz();
    t5.wypisz();
    
	return 0;
}
