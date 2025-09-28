#include <stdio.h>

typedef struct{
    char tuki[256];
    int j;
    int s;
    int h;
    int k;
    int e;
    int et;
}kakei;


void goukei(kakei*,int,int*);

int main(){
    int i;
    int sum[1000];
    int max;
    int count = 0;


    kakei kakei_data[6];
    char tuki[][256] = {"1月","2月","3月","4月","5月","6月"};//なぜ[]が2つあるの
    int j[] = {86000,86000,86000,86000,86000,86000};
    int s[] = {47000,43000,38600,39500,38600,37500};
    int h[] = {3000,30000,5000,0,28000,3000};
    int k[] = {20000,15000,65000,12000,7000,5000};
    int e[] = {9500,0,500,0,5200,0};
    int et[] = {66000,43000,76000,75000,63500,67000};

    goukei(kakei_data,6,sum);

    printf("各月の出費の合計\n");
    printf("-----------------------\n");

    for(i = 0; i < 6; i++){
        printf("%s %d\n",tuki[i],sum[i]);
    }
    printf("\n");

    max = e[0];
    for(i = 0; i < 6; i++){
        if(max < e[i]){
            max = e[i];
        }
    }

    for(i = 0; i < 6; i++){
        if(max == e[i]){
            break;
        }
        count++;
    }

    printf("医療費の最も多い月：%s\n",tuki[count]);

    max = 0;
    count = 0;

    max = s[0];
    for(i = 0; i < 6; i++){
        if(max < s[i]){
            max = s[i];
        }
    }

    for(i = 0; i < 6; i++){
        if(max == s[i]){
            break;
        }
        count++;
    }

    printf("食費の最も多い月と金額：%s、%d\n",tuki[count],max);

    return 0;
}

void goukei(kakei* kakei_data,int n,int* sum){ //なぜポインタ

    int i;

    for(i = 0; i < n; i++){
        sum[i]  = kakei_data[i].j
                + kakei_data[i].s
                + kakei_data[i].h
                + kakei_data[i].k
                + kakei_data[i].e
                + kakei_data[i].et;
    }

}