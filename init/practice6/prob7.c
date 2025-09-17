#include <stdio.h>

double circumference(double);
double area(double);

int main(){

    double hankei;
    double ensyuu;
    double menseki;

    printf("円の半径を入力してください：");
    scanf("%lf",&hankei);

    ensyuu = circumference(hankei);
    menseki = area(hankei);

    printf("円の円周は%3.2lfです\n",ensyuu);
    printf("円の面積は%3.2lfです\n",menseki);
    

    return 0;
}

double circumference(double n){

    return n * 2 * 3.14;
}

double area(double n){
    return n * n * 3.14;
} 
