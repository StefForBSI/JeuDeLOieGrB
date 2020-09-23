#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int DiceValue() {
    srand( time( NULL ) );
    int res = (rand() % 6) + 1;
    return res;
}