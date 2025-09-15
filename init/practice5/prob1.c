#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./myfunc/ran.h"

int main(void){
    srand((unsigned)time(NULL));
    printf("---5_10---\n”乱数の数だけ*を表示する”\n");

    int num1 = 0;
    int ran1 = 0;
    int i,j;
    int c[100000];

    printf("配列の長さを入力してください：");
    scanf("%d",&num1);

    printf("乱数の大きさを入力してください：");
    scanf("%d",&ran1);

    for(i = 0;i < num1;i++){
        c[i] = ran(ran1,0);
        printf("%d ",c[i]);
    }
    printf("\n");

    for(i = 0;i < num1;i++){
        for(j = 0;j < c[i];j++){
            printf("*");
        }
        printf("\n");
    }



    return 0;
}