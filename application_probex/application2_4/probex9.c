#include <stdio.h>
#include <string.h>

int main(){
    char s1[100],s2[100];

    printf("文字列1：");
    scanf("%s",s1);

    printf("文字列2：");
    scanf("%s",s2);

    if(strcmp(s1,s2)==0){
        printf("同じものです\n");
    }else{
        printf("異なるものです\n");
    }

    return 0;
}