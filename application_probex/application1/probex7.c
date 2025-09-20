#include <stdio.h>

int main(){

    char str;
    printf("Input words：");

    while((str = getchar()) !=('\n')){

        if(str >= 'A' && str <= 'Z'){
            str = str | 0x20;
        }
        putchar(str);
    }

    printf("\n");

    return 0;
}