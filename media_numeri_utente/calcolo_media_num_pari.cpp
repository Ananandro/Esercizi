#include <iostream>
using namespace std;

int x, y, z;
int u = 0;
int media;


int main() {

cout << "daghe inserisci un numero: \t";
cin >> x;


while (x != 0){

    y = x % 2;

    if (y == 0){
        z += x;
        u++;
    }

    cout << "inserisci un'altro numero \t";
    cin >> x;
}

media = z / u;

cout << "La media dei numeri pari da te inseriti e': \t" << media;

return 0;

}