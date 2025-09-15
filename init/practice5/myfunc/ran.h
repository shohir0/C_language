#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ran(int maximum,int minimum){
    int r = 0;

    r = rand() %  (maximum - minimum + 1) + minimum;

    return r;
}