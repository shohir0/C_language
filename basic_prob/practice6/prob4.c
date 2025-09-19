#include <stdio.h>

int numjudge(int);

int main(){
    
    int a;
    printf("整数値を入力してください：");
    scanf("%d",&a);

    numjudge(a);

    return 0;
}

int numjudge(int n){
        if(n == 0){
        printf("0です\n");

    }else if(n % 2 == 0) {
        printf("偶数です\n");

    }else{
        printf("奇数です\n");
    }
}