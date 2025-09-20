#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ran(int start,int end){

    return rand() % (start - end + 1) + end;
}