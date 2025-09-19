#include <locale.h>
#include <stdio.h>

int main(int arg, char **argv)
{

    int a;
    printf("数値を入力してください：");

    scanf("%d", &a);

    if (a > 0)
    {
        printf("入力した値は正の数です。\n");
    }
    else
    {
        printf("入力した値は、正の数ではありません\n");
    }

    int num;
    printf("1から3の数字を入れてね：");

    scanf("%d", &num);

    if (num == 1)
    {
        printf("one\n");
    }
    else if (num == 2)
    {
        printf("two\n");
    }
    else if (num == 3)
    {
        printf("three\n");
    }
    else
    {
        printf("不適切な値です\n");
    }

    int dice;

    printf("さいころの値を入力してね：");
    scanf("%d", &dice);

    if (1 <= dice && dice <= 6)
    {

        if (dice == 1 || dice == 3 || dice == 5)
        {

            printf("半！\n");
        }
        else if (dice == 2 || dice == 4 || dice == 6)
        {

            printf("丁！\n");
        }
    }
    else
    {

        printf("範囲外の数値です\n");
    }

    int i;
    printf("1から3の数を入力してください：");

    scanf("%d", &i);

    switch (i)
    {

    case 1:
        printf("one\n");
        break;

    case 2:
        printf("two");
        break;

    case 3:
        printf("three\n");
        break;

    default:
        printf("不適切な値です\n");
        break;
    }

    return 0;
}