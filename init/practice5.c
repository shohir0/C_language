#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("---5_1---\n");

    int a[6];
    int b;
    int i;

    srand ((unsigned)time(NULL));

    for(i = 0;i < 6;i ++){
         b = rand() % 10 + 1;
        a[i] = b;
        printf("a[%d]=%d",i,b);
        printf(" ");
    }
    printf("\n");

    return 0;
}