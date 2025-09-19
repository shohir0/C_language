#include <stdio.h>

int gcd(int,int);
int lcm(int,int);

int main(){

    int a;
    int b;

    int num1,num2;

    printf("1つ目の値を入力してください：");
    scanf("%d",&a);

    printf("2つ目の値を入力してください：");
    scanf("%d",&b);

    num1 = gcd(a,b);
    num2 = lcm(a,b);

    printf("最大公約数は%dです\n",num1);
    printf("最小公倍数は%dです\n",num2);

    return 0;
}

int gcd(int n1,int n2){

    if(n2 == 0){
        return n1;
    }else{
        return gcd(n2 , n1 / n2);
    }


}

int lcm(int n1, int n2){
    return n1 * n2 / gcd(n1,n2);
}