#include <stdio.h>
#include <string.h>

int main(){

    char s[10];
    int len;

    strcpy(s,"ABC");
    printf("s = %s\n",s);

    strcat(s,"DEF");
    printf("s = %s\n",s);

    len = strlen(s);
    printf("文字列の長さ：%d\n",len);

    char s1[256],s2[256];

    printf("s1=");
    scanf("%s",s1);

    printf("s2");
    scanf("%s",s2);

    if(strcmp(s1,s2)==0){
        printf("s1とs2は等しい\n");
    }else{
        printf("s1とs2は等しくない\n");
    }

    char s1[256],s2[256];
    int a =100,b = 200;

    sprintf(s1,"%d",a);
    sprintf(s2,"bの値は%dです。",b);

    puts(s1);
    puts(s2);

    return 0;
}