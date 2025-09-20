#include <stdio.h>
#include <math.h>

double magnitude(double,double,double,double);

int main(){

    double X1,Y1;
    double X2,Y2;
    double ans;

    printf("ベクトルの始点の座標を入力してください:\n");
    
    printf("X：");
    scanf("%lf",&X1);

    printf("Y：");
    scanf("%lf",&Y1);

    printf("ベクトルの終点の座標を入力してください：\n");

    printf("X：");
    scanf("%lf",&X2);

    printf("Y：");
    scanf("%lf",&Y2);

    printf("1つ目のベクトルのX：%2.1lf\n",X1);
    printf("1つ目のベクトルのY：%2.1lf\n",Y1);

    printf("1つ目のベクトルのX：%2.1lf\n",X2);
    printf("1つ目のベクトルのY：%2.1lf\n",Y2);

    ans = magnitude(X1,Y1,X2,Y2);


    printf("(%lf,%lf)と(%lf,%lf)の距離は%lfです\n",X1,Y1,X2,Y2,ans);



    return 0;
}

double magnitude(double n1,double n2,double n3,double n4){

    double compX,compY;

    compX = n3 - n1;
    compY = n4 - n2;

    return sqrt(compX * compX + compY * compY);
}