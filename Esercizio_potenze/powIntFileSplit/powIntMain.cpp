#include <iostream>
#include "powInt.hpp"

using namespace std;


int main(){

int base;
int esp;

cout << "Inserisci base" << endl;
cin >> base;
cout << "Inserisci esponente" << endl;
cin >> esp;
cout << "Il risultato e': \t" << powint(base, esp);

}