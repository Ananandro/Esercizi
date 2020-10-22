#include <iostream>
using namespace std;


int powint(int x, int y){

    int res = 1;
    for(int k=0; k < y; k++){
        res *= x;
    }
    return res;
}


int main(){

int base;
int esp;

cout << "Inserisci base" << endl;
cin >> base;
cout << "Inserisci esponente" << endl;
cin >> esp;
cout << "Il risultato e': \t" << powint(base, esp);

}