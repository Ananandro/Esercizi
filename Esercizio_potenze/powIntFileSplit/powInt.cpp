#include "powInt.hpp"


int powint(int x, int y){

    int res = 1;
    for(int k=0; k < y; k++){
        res *= x;
    }
    return res;
}