#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int ran(int maximum){
    int r;

    r = rand() % maximum + 1;

    return r;
}

int main() {
    int i = 0;
    int b = 0;
    int a[10000];
    int c = 0;

    b = ran(50);
    
    
    for(i = 1;i <= b;i++){
        srand((unsigned)time(NULL));

        a[i] = ran(100);
        printf("%d人目： %d\n",i,a[i]);

        if(a[i] >= 60){
            c++;
        }
    }

    printf("60点を超えた人数は%dです。\n",c);


    return 0;
}