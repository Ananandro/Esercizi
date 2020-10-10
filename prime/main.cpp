#include "prime.h"
#include <iostream>

using namespace std;

int main()
{
    int n = 31;

    // cout << "Enter a positive integer: ";
    // cin >> n;

    if (isPrime(n))
        cout << n << " E PRIMOOOOOO";
    else
        cout << n << " NON E PRIMO";
}