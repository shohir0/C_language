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

void getsum(student_data*,int,int*);


int main(){
    int i;
    int sum[5];

    student_data data[5];

    setdata(&data[0],1001,82,43,53,84,45);
    setdata(&data[1],1002,92,83,88,79,99);
    setdata(&data[2],1003,43,32,53,45,66);
    setdata(&data[3],1004,72,73,71,68,59);
    setdata(&data[4],1005,99,72,82,91,94);


    getsum(data,5,sum);

    printf("番号   国語  数学  理科  社会  英語  合計\n");
    for(i = 0; i < 5; i++){
        printf("%d   %d    %d    %d    %d    %d    %d\n",
            data[i].id,data[i].kokugo,
            data[i].sansu,data[i].rika,
            data[i].shakai,data[i].eigo,sum[i]);
    }

    
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

void getsum(student_data* data,int n,int* sum){
    int i;

    for(i = 0; i < 5; i++){
        sum[i]  = data[i].kokugo
                + data[i].sansu
                + data[i].rika
                + data[i].shakai
                + data[i].eigo;
    }
}