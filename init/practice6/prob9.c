#include <stdio.h>

int spuare(int,int);

int main(){

    int a,b;

    printf("たての数：");
    scanf("%d",&a);

    printf("よこの数：");
    scanf("%d",&b);

    spuare(a,b);

return 0;
}

int spuare(int n1,int n2){

    int i;
    int j;

    for(i = 0;i < n1;i++){
        
        for(j = 0;j < n2;j++){
            printf("■");    

        }
        printf("\n");
    }
}