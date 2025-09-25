#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(){

    char s[16];
    char *p = NULL;

    int len;
    int i;

    p = (char*)malloc(sizeof(char)*17);

    printf("文字列を入力（最大16文字）：");
    scanf("%s",s);

    len = strlen(s);
    p = s;

    for(i = 0; i <= len; i++){
        printf("%c",*(p + len));
        p--;
    }
    printf("\n");

    return 0;
}