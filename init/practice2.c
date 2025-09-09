#include <stdio.h>

int main (int argc, char** argv){
    printf("---prob2_1---\n");

    int a;
    int b;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d\n",a,b,a%b);

    printf("---prob2_2---\n");

    int c;
    int d;

    printf("長方形の幅：\n");
    scanf("%d",&c);

    printf("長方形の長さ：\n");
    scanf("%d",&d);


    printf("長方形の長さは、%dm2です。\n",c*d);

    return 0;
}