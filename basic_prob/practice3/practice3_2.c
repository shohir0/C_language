#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    printf("---3_14---\n");

    int a;
    int b;


    srand((unsigned)time(NULL));
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;

    printf("aの数値は%dです。\n",a);
    printf("bの数値は%dです。\n",b);

    if(a > b){
        printf("aのほうが大きいです。\n");
    }
    else{
        printf("bのほうが大きいです。\n");
    }

     /*-----------------------------------------------------------*/
     printf("---3_15---\n");

     int c;

     srand((unsigned)time(NULL));
     c = rand() % 100 + 1;

     printf("数値は%dです。\n",c);

     if(c >= 80){
        printf("優\n");
     }
     else if(70 <= c < 80){
        printf("良\n");
     }
     else if(60 <= c <70){
        printf("可\n");
     }
     else{
        printf("不可\n");
     }

     /*-----------------------------------------------------------*/
     printf("---3_16---\n");

     int d;

     srand((unsigned)time(NULL));
     d = rand() % 100 + 1;

     printf("数値は%dです。\n",d);

     if(d % 2 == 0 && d % 3 == 0){
        printf("dは2と3の倍数です。\n");
     }
     else if(d % 2 == 0){
        printf("dは2に倍数です。\n");
     }
     else if(d % 3 == 0){
        printf("dは3の倍数です。\n");
     }
     else{
        printf("dは2と3のどちらの倍数でもありません。\n");
     }

     /*-----------------------------------------------------------*/
     printf("---3_17---\n");

     int e;

     srand((unsigned)time(NULL));
     e = rand() % 100 + 1;

     printf("数値は%dです。\n",e);
     
     if(e % 2 ==0 && e <= 50){
        printf("50以下の偶数です。\n");
     }
     else if(e % 2 ==0){
        printf("偶数です。\n");
     }
     else if (e <= 50){
        printf("50以下です。\n");
     }

      /*-----------------------------------------------------------*/
      printf("---3_18---\n");

      int f;

      srand((unsigned)time(NULL));
      f = (rand()) % 46 -10;

      printf("摂氏%d度です。\n",f);

      if(f >= 30){
        printf("真夏日です。\n");
      }
      else if(f >= 25 && f <30){
        printf("夏日です。\n");
      }
      else if(f < 0){
        printf("真冬日です。\n");
      }

     /*-----------------------------------------------------------*/
     printf("---3_19---\n");

     int g;

     printf("西暦を入力してください：\n");
     scanf("%d",&g);

     if(g % 4 == 0 && !(g % 100 == 0)){
        printf("閏年です。\n");
     }
     else if(g % 400 == 0){
        printf("閏年です。\n");
     }
     else{
        printf("閏年ではありません\n");
     }





return 0;
}