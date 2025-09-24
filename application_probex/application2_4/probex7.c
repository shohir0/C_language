#include <stdio.h>
#include <string.h>

int main(){

    char s[100];

    int len;

    printf("文字列の入力：");
    scanf("%s",s);

    len = strlen(s);

    printf("文字列の長さ：%d",len);

    return 0;
}