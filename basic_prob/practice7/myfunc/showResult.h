#include <stdio.h>                     
#include <stdlib.h>
#include <time.h>

int computer = 0;
char results[3][16] = {"グー","チョキ","パー"};

int player;
int computer;

void judge(){

    printf("プレイヤー：%s\n",results[player]);
    printf("コンピューター：%s\n",results[computer]);

    if((player == 0 && computer == 1)
    || (player == 1 && computer == 2)
    || (player == 2 && computer == 0)){
        printf("プレイヤーの勝ち\n");
    }else if((player == 0 && computer == 2)
    || (player == 1 && computer == 0)
    || (player == 2 && computer == 1)){
        printf("コンピューターの勝ち\n");
    }else{
        printf("あいこです\n");
    }

}