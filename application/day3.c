#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#define SIZE 5

  int createMemory(char**,int);
    void freeMemory(char**);

int main(){

    int ar1[SIZE];
    char ar2[SIZE];
    
    int i;

    int* p1 = NULL;
    char* p2 = NULL;

    for(i = 0; i < SIZE; i++){

        ar1[i] = i;
        ar2[i] = 'A' + i;
    }

    p1 = &ar1[0];
    p2 = &ar2[0];

    for(i = 0; i < SIZE; i++){
        printf("ar1[%d]=%d *(p1+%d)=%d ",i,ar1[i],i,*(p1+i));
        printf("ar2[%d]=%c *(p2+%d)=%c\n",i,ar2[i],i,*(p2+i));
    }
    printf("\n");

    #undef SIZE
    #define SIZE 3

    int *p3 = NULL;
    double *p4 = NULL;

    p3 = (int*)malloc(sizeof(int)*SIZE);
    p4 = (double*)malloc(sizeof(double)*SIZE);

    for(i = 0; i < SIZE; i++){

        p3[i] = i;
        p4[i] = i / 10.0;
    
    }

    for(i = 0; i < SIZE; i++){
        printf("p1[%d]=%d  p2[%d]=%lf\n",i,p3[i],i,p4[i]);
    }

    free(p3);
    free(p4);

    char *s[3] = {"Taro","Hanako","Tom"};
    char **pps = NULL;

    for(i = 0; i < 3; i++){
        printf("%s\n",s[i]);
    }

    pps = s;

    for(i = 0; i < 3; i++){
        printf("%s\n",*pps);
        pps++;
    }

    char *M = NULL;

    createMemory(&M,255);
    strcpy(M,"Hello World\n");
    printf("%s",M);
    freeMemory(&M);

    return 0;
}

int createMemory(char** mem,int size){

    if(*mem == NULL){
        *mem = (char*)malloc(sizeof(char)*size);

        if(*mem == 0){
            return -1;
        }
        return 0;
    }
    return -1;
}

void freeMemory(char** mem){
    if(mem != 0){
        free(*mem);
    }
}
