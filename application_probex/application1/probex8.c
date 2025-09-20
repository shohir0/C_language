#include <stdio.h>

int main(){

    char str;

    printf("Input words：");

    while((str = getchar()) != '\n'){

        if(str >= 'a' && str <= 'z'){
            str = str & 0xDF;
        }
        putchar(str);
    }
    printf("\n");

    return 0;
}