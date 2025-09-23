#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ran(int start,int end){
    
    return rand() % (start - end + 1) + end;
}

void show1(int*,int);

void show2(int*,int);

int main(){
    srand((unsigned)time(NULL));

    int a[5];
    int i;


    for(i = 0; i < 5; i++){
        a[i] = ran(100,0);
    }

    show1(a,5);
    show2(a,5);

    return 0;
}

void show1(int* num,int size){
     int i;

     printf("発生した乱数：");
     for(i = 0; i < size; i++){

        printf("%d ",*num);
        num++;

     }
     printf("\n");
}

void show2(int *num,int size){
    int i;

    printf("2倍にした数：");
    for(i = 0; i < size; i++){
        printf("%d ",*num * 2);
        num++;
    }
        printf("\n");
}