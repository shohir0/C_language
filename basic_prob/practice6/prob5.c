#include <stdio.h>

int max(int,int);


int main(){

    int a,b;
    int result;

    printf("1つ目の値を入力してください：");
    scanf("%d",&a);
    
    printf("2つ目の値を入力してください：");
    scanf("%d",&b);

    max(a,b);

    return 0;
}

int max(int n1,int n2){

    int result;

    if(n1 > n2){
        result = n1;
    }else{
        result = n2;
    }

    printf("%dと%dのうち、大きい値は%dです\n",n1,n2,result);
}