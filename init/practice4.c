#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){

    printf("---4_1---\n");

    int a;
    int i = 0;

    srand((unsigned)time(NULL));
    a = rand() % 10 + 1;

    printf("数：%d",a);

    for(i = 1;i <= a;i ++){
        printf("*");
    }

    printf("\n");

     /*-----------------------------------------------------------*/

     printf("---4_2---\n");

     int b;
     i = 1;

     b = rand() % 10 + 1;

     printf("数：%d",b);

     while(i <= b){
        printf("*");
        i ++;
     }

     printf("\n");

     /*-----------------------------------------------------------*/

     printf("---4_3---\n");

     int c;
     i = 1;

     c = rand() % 10 + 1;

     printf("数値：%d\n",c);

     do{
        printf("*");
        i ++;
     }while(i <= c);

     printf("\n");

    /*-----------------------------------------------------------*/
    printf("---4_4---\n");

    int d = 0;

    while(d <= 3){
      printf("a = %d\n",d);
      d ++;
    }

    printf("\n");

    /*-----------------------------------------------------------*/
    printf("---4_5---\n");

    int e;

    for(e = 0;e <=3;e ++){
      printf("a = %d\n",e);
    }
    printf("\n");

    /*-----------------------------------------------------------*/
    printf("---4_6---\n");

    int f = 3;

    while(f >= 0){
      printf("a = %d\n",f);
      f --;
    }
    printf("\n");




return 0;
}