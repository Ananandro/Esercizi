/*
    The program reads N numbers defined from
    the user and prints their sum
*/


#include <iostream>
#define N 10

using namespace std;


int main(){

    int  number[N];

    cout << "insert " << N << " numbers" << endl;

    int sum = 0;

    for (int i=0; i<N; i++){

        cin >> number[i];
        sum += number[i];
    }

    cout << "sum of numbers: " << sum << endl;

}