#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./myfunc/ran.h"

int main(void){
    srand((unsigned)time(NULL));
    
    int ran1;
    int num1;
    int c[10000];
    int i;

    printf("配列の長さを入力してください：");
    scanf("%d",&num1); 

    printf("乱数の大きさを入力してください：");
    scanf("%d",&ran1);

    for(i = 0;i < num1;i++){
        c[i] = ran(ran1,0);
        printf("%d ",c[i]);
    }
    printf("\n\n");

    printf("0以上60未満：");
    for(i = 0;i < num1;i++){
        if(c[i] >= 0 && c[i] < 60){
            printf("%d ",c[i]);
        }
    }
    printf("\n");

        printf("60以上80未満：");
    for(i = 0;i < num1;i++){
        if(c[i] >= 60 && c[i] < 80){
            printf("%d ",c[i]);
        }
    }
    printf("\n");

    printf("80以上：");
    for(i = 0;i < num1;i++){
        if(c[i] >= 80){
            printf("%d ",c[i]);
        }
    }
    printf("\n");




    return 0;
}