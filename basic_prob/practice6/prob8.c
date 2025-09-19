#include <stdio.h>

int get_absolute(int);

int main(){

    int a;

    printf("値を入力してください：");
    scanf("%d",&a);

    get_absolute(a);

    return 0;
}

int get_absolute(int n){


    if(n > 0){
        printf("%d\n",n);

    }else if(n < 0){
        printf("%d\n", n * -1);

    }else{
        printf("0以外の値を入力してください\n");
    }
}