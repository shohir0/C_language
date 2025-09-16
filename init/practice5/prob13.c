#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./myfunc/ran.h"

int main(){
    srand((unsigned)time(NULL));

    int ran1;
    int c[10000];

    int num1;
    int num2;
    int i;
    int j;

    printf("乱数の大きさを入力してください：");
    scanf("%d",&ran1);

    printf("列数を入力してください：");
    scanf("%d",&num1);

    printf("行数を入力してください：");
    scanf("%d",&num2);

    for(i = 0;i < num1;i++){
        c[i] = ran(ran1,0);
        printf("%03d ",c[i]);

        for(j = 0;j < num2;j++){
            c[j] = ran(ran1,0);
            printf("%03d ",c[j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}