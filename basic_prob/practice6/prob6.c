#include <stdio.h>

int stars(int,int);

int main(){

    int n,i;

    printf("表示する回数を入力してください：");
    scanf("%d",&n);

    stars(n,0);

    return 0;
}

int stars(int a,int i){

    if(a > 0){
        for(i = 0;i < a;i++){
            printf("★ ");
        }
        printf("\n");
    }else{
        printf("0より大きい数を入力してください\n");
    }
}