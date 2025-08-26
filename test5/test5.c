#include <stdio.h>

int main() {
    double one,tow,three;
    double sum,avg;
    one = 1.2,tow = 3.7,three = 4.1;
    printf("%f %f %f\n",one,tow,three);
    sum = one + tow + three;
    avg = sum /3.0;
    printf("合計値：%f\n",sum);
    printf("平均値：%f\n",avg);

    
    double d[3];
    int i;
    d[0] = 1.2;
    d[1] = 3.7;
    d[2] = 4.1;
    sum = 0.0;
        for(i = 0; i < 3; i++){
        printf("%f",d[i]);
    sum += d[i];
    }   
    printf("\n");
    avg = sum / 3.0;
    printf("合計値：%f\n",sum);
    printf("平均値：%f\n",avg);

    int n[] = {5,4,3,2,1};
    int k ;
    for(k = 0; k < 5; k++){
        printf("n[%d]=%d\n",k,n[k]);
    }
    printf("\n");

   
    

    return 0;
}