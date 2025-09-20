#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./myfunc/rand.h"

int main(){

    srand((unsigned)time(NULL));

    int i;
    int c[10000];

    for(i = 0;i <5;i++){

        c[i] = ran(10,1);
        printf("%2d ",c[i]);
    }
    printf("\n");

    return 0;
}