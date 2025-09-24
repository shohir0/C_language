#include <stdio.h>
#include <string.h>

int main(){

    char s1[10];
    char s2[10];
    char s3[10];

    printf("文字列1：");
    scanf("%s",s1);

    printf("文字列2：");
    scanf("%s",s2);

    strcpy(s3,s1);


    printf("統合した結果：%s\n",strcat(s1,s2));
 
    return 0;
}