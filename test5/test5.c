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

   char s1[4] = {'a','b','c','\0'};
   char s2[] = "HelloWorld.";
   char s3[10];

   printf("文字を入力してください。：");
   scanf("%s",s3);
   printf("s1 = %s\n",s1);
   printf("s2 = %s\n",s2);
   printf("s3 = %s\n",s3);
    
   int a[3][4];
    int m,l;
    //	二次元配列に値を代入
    for(m = 0; m < 3; m++){
        for(l = 0; l < 4; l++){
            a[m][l] = m + l;
        }
    }
    
    //	成分の表示
    for(m = 0; m < 3; m++){
        for(l = 0; l < 4; l++){
            printf("%d ",a[m][l]);
        }
        printf("\n");
    }

    return 0;
}