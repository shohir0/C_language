#include <stdio.h>
#include "./myfunc/calculation_1.h"

int main(){

    int n1,n2;
    int r1,r2;

    printf("n1=");
    scanf("%d",&n1);

    printf("n2=");
    scanf("%d",&n2);

    r1 = div(n1,n2);

    r2 = mod(n1,n2);

    printf("%d / %d = %d 余り %d\n",n1,n2,r1,r2);

    return 0;
}