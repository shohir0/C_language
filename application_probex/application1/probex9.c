#include <stdio.h>

int main(){

    int n;
    int i;

    printf("Input Number(0~255)：");
    scanf("%d",&n);

    for(i = 0;i < 8;i++){

        if((n & 0x80) == 0){
            printf("0");
        }else{
            printf("1");
        }
        n = n << 1;
    }
    printf("\n");

    

    return 0;
}