/*
 * stos_tab.cpp

 * 
 */



#include <iostream>

using namespace std;

void push(int stos[], int &sp, int dane) {
    cout << dane << " ";
    stos[sp] = dane;
    sp++;
}

int pop(int stos[], int &sp) {
    sp--;
    return stos[sp];
}

int main(int argc, char **argv)
{
    int *stack;
    int sr;
    int sp = 0;
    
    cout << "Podaj rozmiar: "; cin >> sr;
    stack = new int[sr];
    
    srand(time(NULL));
    for (int i=0; i < sr; i++) {
        push(stack, sp, rand()%100+1);    
    }   
    push(stack, sp, 44);
    push(stack, sp, 44);
    push(stack, sp, 44);
    
    cout << endl;
	
    for (int i=0; i < sr + 3; i++) {
        cout << pop(stack, sp) << " ";
    }
    
	return 0;
}

