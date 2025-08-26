#include <locale.h>
#include <stdio.h>


int main(int argc, char **argv){
 setlocale(LC_ALL, "");

int i,j;
	for(i = 1; i<= 2; i++){
		for(j = 1; j <= 3; j++){
			printf("%d+%d=%d  ",i,j,i+j);   // 繰り返される処理
		}
		printf("\n");
	}

    int k = 0;
    while(k <= 5){
        printf("%d",k);
        k++;
    }
    printf("\n");

    int l = 0;
    do{
        printf("%d",l);
        l++;
    }while(l <= 5);
        printf("\n");

        int num;
         printf("負の値でループから抜けます。");
         while(1){
            printf("数値を入力してね");
            scanf("%d",&num);
            if(num < 0){
                break;
            }   
         }
         printf("終了\n");

         int m;
         for(m = 0; m <= 5; m++){
            if(m == 3){
                continue;
            }
            printf("%d",m);
         }

     return 0;
}
