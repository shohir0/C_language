#include <stdio.h>

int ans;

void init(int num){

    ans = num;

}

void add(int num){

    ans += num;
    
}

void sub(int num){

    ans -= num;

}

void showName(){

    printf("現在の値：%d\n",ans);
}