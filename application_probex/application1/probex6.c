#include <stdio.h>
#include <math.h>
#include "myfunc/rand.h"

int main(){
    srand((unsigned)time(NULL));

    int c[10000];
    int i;
    int num = 0;

    for(i = 0;i < 4;i++){
        num++;

        c[i] = ran(10,-10);
        printf("%dつ目の数値：%2d 絶対値：%2d\n",num,c[i],abs(c[i]));

    }
    printf("\n");

    return 0;
}