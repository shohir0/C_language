#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ran(int maximum,int minimum){
    int r = 0;
    r = rand() %  (maximum - minimum + 1) + minimum;

    return r;
}

int main(){

    printf("---5_1---\n");

    int a[6];
    int i;
    
    srand((unsigned)time(NULL));
    int r = ran(10,0);


    for(i = 0;i < 6;i ++){

        a[i] = ran(10,0);
        printf("a[%d]=%d",i,a[i]);
        printf(" ");
    }
    printf("\n");

    /*-----------------------------------------------------------*/
    printf("---5_2---\n");
    
    double d[5] = {1.2,-1.3,5.2,4.8};

    for(i = 0;i < 4;i++){
        printf("d[%d]=%2.1f",i,d[i]);
        printf(" ");
    }
    printf("\n");

    /*-----------------------------------------------------------*/
    printf("---5_3---\n”乱数を偶数と奇数に分ける”\n");

    int b = 0;
    int c[100000];

    printf("乱数の大きさを入力してください：");
    scanf("%d",&b);

    for(i = 0;i < b;i++){
        int data = ran(b,0);

        printf("%d",data);
        printf(" ");

        c[i] = data;
    }
    printf("\n");
    printf("\n");

    printf("奇数：");
    for(i = 0;i < b;i++){
        if(!(c[i] % 2 == 0)){
            printf("%d",c[i]);
            printf(" ");
        }
    }
    printf("\n");

    printf("偶数：");
    for(i = 0;i < b;i++){
        if(c[i] % 2 == 0){
            printf("%d",c[i]);
            printf(" ");
        }
    }
    printf("\n");
    /*-----------------------------------------------------------*/
    printf("---5_4---\n”乱数を5以上と未満に分ける”\n");

    c[1000];
    b = 0;

    printf("乱数の大きさを入力してください：");
    scanf("%d",&b);

    for(i = 0;i < b;i++){
        c[i] = ran(b,0);
        printf("%d",c[i]);
        printf(" ");
    }
    printf("\n");
    printf("\n");

    printf("5以上の数：");
    for(i = 0;i < b;i++){
        if(c[i] >= 5){
            printf("%d ",c[i]);
        }
    }
    printf("\n");

    printf("5未満の数：");
    for(i = 0;i < b;i++){
        if(c[i] < 5){
            printf("%d ",c[i]);
        }
    }
    printf("\n");

    /*-----------------------------------------------------------*/
    printf("---5_5---\n”乱数を3の倍数とそれ以外に分ける”\n");

    c[1000];
    b = 0;

    printf("乱数の大きさを入力してください：");
    scanf("%d",&b);

    for(i = 0;i < b;i++){
        c[i] = ran(b,0);
        printf("%d",c[i]);
        printf(" ");
    }
    printf("\n");
    printf("\n");

    printf("3の倍数：");
    for(i = 0;i < b;i++){
        if(c[i] % 3 == 0){
            printf("%d ",c[i]);
        }
    }
    printf("\n");

    printf("3の倍数以外の数：");
    for(i = 0;i < b;i++){
        if(!(c[i] % 3 == 0)){
            printf("%d ",c[i]);
        }
    }
    printf("\n");

    /*-----------------------------------------------------------*/
    printf("---5_6---\n”乱数の最大値と最小値を求める”\n");

    int maxValue;
    int minValue;
    b = 0;
    c[1000];

    printf("乱数の大きさを入力してください：");
    scanf("%d",&b);

    for(i = 0;i < b;i++){
        c[i] = ran(b,0);
        printf("%d ",c[i]);

        if(i == 0 || c[i] > maxValue){
            maxValue = c[i];
        }
        if(i == 0 || c[i] < minValue){
            minValue = c[i];
        }
    }

    printf("\n");
    printf("\n");

    printf("最大値：%d\n",maxValue);
    printf("最小値：%d\n",minValue);

    /*-----------------------------------------------------------*/
    printf("---5_7---\n”乱数の合計、平均、平均より大きい数と小さい数”\n");

    int sum = 0;
    int avg = 0;

    int num1 = 0;
    c[num1];

    printf("配列の長さを入力してください：");
    scanf("%d",&num1);

    for(i = 0;i < num1;i++){
        c[i] = ran(num1 - 1,0);
        printf("%d ",c[i]);

        sum += c[i];
    }

    avg = sum / num1;

    printf("\n\n");

    printf("合計値：%d\n",sum);
    printf("平均値：%d\n\n",avg);

    printf("平均より大きい数：");
    for(i = 0;i < num1;i++){
        if(c[i] > avg){
            printf("%d ",c[i]);
        }
    }
    printf("\n");

    printf("平均より小さい数：");
    for(i = 0;i < num1;i++){
        if(c[i] < avg){
            printf("%d ",c[i]);
        }
    }
    printf("\n");

    /*-----------------------------------------------------------*/
    printf("---5_8---\n”乱数と0の比較”\n");

    int ran1;
    int ran2;

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    num1 = 0;

    printf("乱数の最小値と最大値を入力してください。\n");

    printf("最小値：");
    scanf("%d",&ran2);

    printf("\n");

    printf("最大値：");
    scanf("%d",&ran1);

    printf("配列の長さを入力してください：");
    scanf("%d",&num1);

    for(i = 0;i < num1;i++){
        c[i] = ran(ran1,ran2);
        printf("%d ",c[i]);

        if(c[i] > 0){
            count1++;
        }
        if(c[i] < 0){
            count2++;
        }
        if(c[i] == 0){
            count3++;
        }
    }
    printf("\n\n");

    printf("0より大きい数：%d個\n",count1);
    printf("0より大きい数：%d個\n",count2);
    printf("0の数：%d個\n",count3);


    return 0;
}