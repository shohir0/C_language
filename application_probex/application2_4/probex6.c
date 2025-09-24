#include <stdio.h>
#include <malloc.h>

int main(){

    char *p = NULL;

    char s[100];

    p = (char*)malloc(sizeof(char)*12);


    printf("文字列1：");
    scanf("%s",s);

    p = s;

    printf("文字列2：");
    scanf("%s",p + 3);

    printf("%s\n",s);


    return 0;
}