#include <stdio.h>
#include <string.h>


int main(){

    char s1[100],s2[100];
    int i;

    char *p1,*p2;

    int len1,len2;

    printf("文字列1：");
    scanf("%s",s1);

    printf("文字列2：");
    scanf("%s",s2);

    p1 = s1;
    p2 = s2;

    len1 = strlen(s1);
    len2 = strlen(s2);


    if(len1 == len2){ //文字の長さ
        for(i = 0; i < len1; i++){ 
            if(*p1 == *p2){ //１文字ずつの比較
                p1++;
                p2++;
            }else{
                printf("異なるものです\n");
                return 0;
            }
        }
        printf("同じものです");
    }else{
        printf("異なるものです");
    }
    
    printf("\n");
    return 0;
}
