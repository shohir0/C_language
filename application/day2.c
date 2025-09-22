#include <stdio.h>

void show (int,int,int);

void swap(int*,int*);

int main(int argc,char** argv){

    int num1 = 100;
    double num2 = 123.4;

    //printf("aの値は%d、大きさは%dbyte、アドレスは0x%x\n",a,sizeof(int),&a);
    //printf("bの値は%lf、大きさは%dbyte、アドレスは0x%x\n",b,sizeof(double),&b);

    printf("aの値は%d、大きさは%zubyte、アドレスは%p\n",num1,sizeof(int),&num1);
    printf("bの値は%lf、大きさは%zubyte、アドレスは%p\n",num2,sizeof(double),&num2);

    

    int a = 100;
    int b = 200;
    int *p = NULL;

    p = &a;
    show(a,b,*p);

    *p = 300;
    show(a,b,*p);

    p = &b;
    show(a,b,*p);

    *p = 400;
    show(a,b,*p);

    a = 1;
    b = 2;

    printf("a = %d b = %d\n",a,b);
    
    swap(&a,&b);

    printf("a = %d b = %d\n",a,b);

    return 0;
}


void show(int n1,int n2,int n3){
    printf("a = %d b = %d *p = %d\n",n1,n2,n3);
}

void swap(int* num1 ,int* num2){

    int temp = *num1;

    *num1 = *num2;
    *num2 = temp;
}