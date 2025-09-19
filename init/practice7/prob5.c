#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./myfunc/logic.h"
#include "./myfunc/showResult.h"

int main(){
    init();
    
    int num;

    printf("じゃんけんゲーム\n");
    printf("0:グー、1:チョキ、2:パー\n");

    while(1){
        printf("あなたの手は？：");
        scanf("%d",&num);

        if(num < 0 || num > 2){
            printf("終了します\n");
            break;
        }else{
            setPlayer(num);
            setComputer();
            judge();
            break;
        }
    }

    return 0;
}