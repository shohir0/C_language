#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myfunc/rand.h"

int main(){
    srand((unsigned)time(NULL));

    int a,b;
    int i;

    for(i = 0;i < 6;i++){

        a = ran(10,1);
        b = ran(10,1);
        
        printf("%2d  + %2d = %2d\n",a,b,a+b);
    }
    printf("\n");

    return 0;
}