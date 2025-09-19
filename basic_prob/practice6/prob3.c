#include <stdio.h>

double triangle(double,double);

int main(){

    double teihen,takasa;
    double menseki;

    printf("底辺=");
    scanf("%lf",&teihen);

    printf("高さ=");
    scanf("%lf",&takasa);

    menseki = triangle(teihen,takasa);

    printf("三角形の面積は%lfです。\n",menseki);

    return 0;
}

double triangle(double n1,double n2){
    return n1 * n2 / 2;
}