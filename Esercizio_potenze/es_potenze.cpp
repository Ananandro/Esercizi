#include <iostream>
using namespace std;


int powint(int base, int esp){

    int res = 1;
    for(int k=0; k < esp; k++){
        res *= base;
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
cout << "Il risultato e': \t" << powint;

}