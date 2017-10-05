#!/usr/bin/env python
# -*- coding: utf-8 -*-

ROK_TERAZ = 2017
ROK_PYTHON = 1991

def parzyste (n):
    ile = list(range(0, n+1,2))
    print(ile)
    return len(ile)

def main(args):
    imie = input ("Imię? ")
    wiek = int(input("Wiek?" ))
    rok_urodzenia = ROK_TERAZ - wiek
    print ("Witaj", imie)
    print ("Rok Urodzenia: ", rok_urodzenia)
    if ROK_PYTHON < rok_urodzenia:
        
        print ("Jestem starszy")
    elif ROK_PYTHON > rok_urodzenia:
        print ("Jestem młodszy")
    elif ROK_PYTHON == rok_urodzenia:
        print ("Tyle samo lat")
    
    n = int(input("Podaj liczbe naturalna: "))
    print('Ilość parzystych: ', parzyste(n))
    
  
  
  
  
    
int liczba, i, j, pierwiastek, *tablica;
cout << "Podaj maksimum: ";
cin >> liczba;
 
pierwiastek = (int)sqrt((double)liczba);
tablica = new int[liczba+1];
for (i = 0; i <= liczba; i++)
tablica[i] = i;
 
for (i = 2; i <= pierwiastek; i++)
{
if (tablica[i] != 0)
for (j = 2*i; j <= liczba; j+= i)
tablica[j] = 0;
}
 
cout << "Liczby pierwsze z przedzialu <2," << liczba << "> to:\n";
for (i = 2; i <= liczba; i++)
if (tablica[i] != 0)
cout << tablica[i] << " ";
cout << endl;
  
  
  
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
