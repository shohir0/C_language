#include <stdio.h>

int max(int,int);
void show(int);
void line();

int main(){

    int n1 = 4,n2 = 5;
    line();
    show(n1);
    show(n2);
    printf("二つの数のうち、大きいのは、%dです。\n",max(n1,n2));
    line();
    return 0;
}

int max(int a,int b){

    if(a > b){
        return a;
    }

    return b;
}

void show(int n){

    printf("数値:%d\n",n);
    return;
}

void line(){
    printf("***************\n");
}