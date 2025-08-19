#include <locale.h>
#include <stdio.h>
// ヘッダファイルの宣言

int main(int argc, char **argv)
{
    // main関数の定義

    printf("---1日目---\n");
    printf("Hello, world.\n");
    // コンソール画面に表示する関数
    // ;←分の終わりに使う、複数の処理が圧場合処理を区切れる

    printf("123\n456\n789\n");
    printf("シングルクオーテーション: \' ダブルクオーテーション: \"");

    printf("私に名前は%sです。 年齢は%dです。/n", "廣部ちゃん", 21);
    printf("私のイニシャルは%Cです。\n", 'H');
    printf("%1f + %1f = %1f\n", 1.0, 2.0, 1.0 + 2.0);
    /*--------------------------------------------------------------------*/
    printf("---2日目---\n");

    /*演算子を用いた計算*/

    printf("%d + %d = %d\n", 5, 2, 5 + 2);
    printf("%d - %d = %d\n", 5, 2, 5 - 2);
    printf("%d * %d = %d\n", 5, 2, 5 * 2);
    printf("%d / %d = %d\n", 5, 2, 5 / 2);

    int a;                 // 変数の宣言
    int b = 3;             // 初期化と代入を同時に行う　ここは定数？
    unsigned int add, sub; // int以外の変数を宣言
    double avg;            // 小数点を表現できる　floutよりもイイ！

    a = 6;
    add = a + b;
    sub = a - b;
    avg = (a + b) / 2.0; //()は優先順位

    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%dと%dの平均値：%f\n", a, b, avg);

    int i1, i2, j1, j2;
    double d1, d2, e1, e2;

    j1 = 3;
    j2 = 3;

    d1 = 1.23;
    d2 = 1.23;

    i1 = d1;
    i2 = (int)d2;

    e1 = j1;
    e2 = (double)j2;

    printf("d1 = %f d2 = %f\n", d1, d2);
    printf("i1 = %d i2 = %d\n", i1, i2);
    printf("j1 = %d j2 = %d\n", j1, j2);
    printf("e1 = %f e2 = %f\n", e1, e2);

    return 0;
    // プログラムの終了を示す
}
/*わからないこと

・コード内で同じ書式設定に複数の実数を定義できるのか

*/
