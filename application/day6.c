#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    file = fopen("c:\\test\\sample.text","w");
    if(file == NULL){
        printf("ファイルが開けません。\n");
        exit(1);
    }

    fprintf(file,"HelloWorld\n");
    fprintf(file,"ABCDEF\n");

    fclose(file);

    return 0;
}