#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanceDeDe() {
    srand( time( NULL ) );
    int res = (rand() % 6) + 1;
    return res;
}