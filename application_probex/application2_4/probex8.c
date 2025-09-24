#include <stdio.h>
#include <malloc.h>


int main(){

    char s;

    int i;
    int count = 0;


    printf("文字列の入力：");

    while((s = getchar()) !=('\n')){

        if(!(s == '\n')){
            printf("%c",s);
            count++;
        }
    }
    printf("\n");

    printf("入力された文字列の数：%d\n",count);
    
    return 0;
}