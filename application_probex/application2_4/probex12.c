#include <stdio.h>
#include <string.h>

int main(){

    char s1[100],s2[100],s3[100];
    int len1,len2,len3;

    int max = 0;

    printf("文字列1：");
    scanf("%s",s1);

    printf("文字列2：");
    scanf("%s",s2);

    printf("文字列3：");
    scanf("%s",s3);

    len1 = strlen(s1);
    len2 = strlen(s2);
    len3 = strlen(s3);

    max = len1;
    if(max < len2){
        max = len2;
    }

    if(max < len3){
        max = len3;
    }
    
    if(max == len1){printf("%s\n",s1);}
    if(max == len2){printf("%s\n",s2);}
    if(max == len3){printf("%s\n",s3);}
    


    return 0;
}