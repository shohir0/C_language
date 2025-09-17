#include <stdio.h> 

int add(int,int);
int sub(int,int);

int main(){

    int a,b;
    int result1;
    int result2;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    result1 = add(a,b);
    result2 = sub(a,b);

    printf("%d + %d = %d\n",a,b,result1);
    printf("%d - %d = %d\n",a,b,result2);
    
    return 0;
}

int add(int n1,int n2){
    return n1 + n2;
}

int sub(int n3,int n4){
    return n3 - n4;
}