#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./myfunc/rand.h"

int main(){
    srand((unsigned)time(NULL));

    int c[10000];
    int i;
    int maxmum,minimum;

    for(i = 0;i < 10;i++){

        c[i] = ran(10,1);
        printf("%2d",c[i]);

        if(i == 0 || c[i] > maxmum){
            maxmum = c[i];
        }
        if(i == 0 || c[i] < minimum){
            minimum = c[i];
        }
    }
    printf("\n");

    printf("最大値：%d\n",maxmum);
    printf("最小値：%d\n",minimum);
}