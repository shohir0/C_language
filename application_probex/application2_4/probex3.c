#include <stdio.h>
#include <malloc.h>

int main(){

    double *a = NULL;
    int i;

    a = (double*)malloc(sizeof(double)*6);

    for(i = 0; i < 6; i++){
        a[i] = 0.1 * i;
    }

    for(i = 0; i < 6; i++){
        printf("%lf ",a[i]);
    }
    printf("\n");

    free(a);

    return 0;
}