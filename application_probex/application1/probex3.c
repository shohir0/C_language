#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myfunc/rand.h"

int main(){
    srand((unsigned)time(NULL));
 
    int a[10000];
    int i;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    for(i = 0;i < 5;i++){

        a[i] = ran(100,0);
        printf("c[%d]=%d ",i,a[i]);

        if(a[i] >= 20 && a[i] <= 50){
            num1++;
        }

        if(a[i] > 80){
            num2++;
        }

        if(a[i] >= 0 && a[i] < 10){
            num3++;
        }
    }
        printf("\n");

        printf("20以上50以下の数：%d個\n",num1);
        printf("80より大きい数：%d個\n",num2);
        printf("0以上10未満の数：%d個:\n",num3);

    return 0;
}