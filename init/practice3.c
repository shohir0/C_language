#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    printf("---prob3_1---\n");

    int a;

    printf("整数値を入力してください：");
    scanf("%d",&a);

    if(a>=5){
        printf("aは5以上です\n");
    }
    else{
        printf("aは5未満です。\n");
    }
/*-----------------------------------------------------------*/ 
    printf("---prob3_2---\n");

    int b;

    printf("整数値を入力してください：");
    scanf("%d",&b);

    if(!(b == 1)){
        printf("1ではありません\n");
    }
    else{
        printf("値は1です。\n");
    }

/*-----------------------------------------------------------*/ 
    printf("---prob3_3---\n");

    int c;

    printf("整数値を入力してください：\n");
    scanf("%d",&c);

    if(c < 50){
        printf("cは50未満です。\n");
    }
    else{
        printf("cは50以上です。\n");
    }

 /*-----------------------------------------------------------*/ 
    printf("---prob3_4---\n");

    int d;

    printf("整数値を入力してください：\n");
    scanf("%d",&d);

    if(d <= 10 || d >= 90){
        printf("10以下か、90以上です。\n");
    }
    else{
        printf("それ以外の数値です。\n");
    }

 /*-----------------------------------------------------------*/ 

    printf("---prob3_5---\n");

    int e;

    printf("整数値を入力してください：\n");
    scanf("%d",&e);

    if(20 <= e < 80){
        printf("20以上80未満です。\n");
    }
    else{
        printf("それ以外の数値です。\n");
    }

 /*-----------------------------------------------------------*/ 
    printf("---prob3_6---\n");   

    int n;

    srand((unsigned)time( NULL ));
    n = rand() % 6 + 1;

    printf("数値：%d\n",n);

    if(n >= 3){
        printf("3以上です。\n");
    }
    else{
        ("\n");
    }

 /*-----------------------------------------------------------*/ 
    printf("---prob3_7---\n");

    int m;

    srand((unsigned)time(NULL));
    n = rand() % 9 + 1;
    printf("数値は%dです。\n",n);

    if(m >= 5){
        printf("5以上です。\n");
    }
    else{
        printf("5未満です。\n");
    }


    return 0;
}