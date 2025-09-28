#include <stdio.h>

typedef struct{
    int id;
    int kokugo;
    int sansu;
    int rika;
    int shakai;
    int eigo;
}student_data;

void setdata(student_data*,int,int,int,int,int,int);

void getavg(student_data*,int);

int main(){
    student_data data[5];

    setdata(&data[0],1001,82,43,53,84,45);
    setdata(&data[1],1002,92,83,88,79,99);
    setdata(&data[2],1003,43,32,53,45,66);
    setdata(&data[3],1004,72,73,71,68,59);
    setdata(&data[4],1005,99,72,82,91,94);


    getavg(data,5);

    
    return 0;
}

void setdata(student_data* tensu,int id,int kokugo,int sansu,int rika,int shakai,int eigo){
    tensu -> id = id;
    tensu -> kokugo = kokugo;
    tensu -> sansu = sansu;
    tensu -> rika = rika;
    tensu -> shakai = shakai;
    tensu -> eigo = eigo;
}

void getavg(student_data* data,int n){
    int i;
    double sum_k=0,sum_s=0,sum_r=0,sum_sh=0,sum_e=0;

    for(i = 0; i < n; i++){
        sum_k += data[i].kokugo;
        sum_s += data[i].sansu;
        sum_r += data[i].rika;
        sum_sh += data[i].shakai;
        sum_e += data[i].eigo;
    }
    printf("国語 平均 = %4.2lf\n",sum_k/5);
    printf("算数 平均 = %4.2lf\n",sum_s/5);
    printf("理科 平均 = %4.2lf\n",sum_r/5);
    printf("社会 平均 = %4.2lf\n",sum_sh/5);
    printf("英語 平均 = %4.2lf\n",sum_e/5);
}