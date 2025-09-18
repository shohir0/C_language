#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./myfunc/randLib.h"

int main(){
    srand((unsigned)time(NULL));

    int i,num;
    int n1,n2;
    int c[10000];
    int count;

    printf("乱数を表示させる回数を入力してください：");
    scanf("%d",&num);

    printf("乱数の範囲を指定してください\n");

    printf("最大値：");
    scanf("%d",&n1);

    printf("最小値：");
    scanf("%d",&n2);



    for(i = 0;i < num;i++){

        c[i] = getRand(n1,n2);
        printf("%3d ",c[i]);
        count++;

        if(count % 3 == 0){
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
