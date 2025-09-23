#include <stdio.h>
 
int main(){

    int nums[] = {1,2,3,4,5};
    int *p = NULL;
    int i;

    p = nums;

    for(i = 0; i < 5; i++){
        printf("%d ",*(p + 4));
        p--;
    }
    printf("\n");
    return 0;
}