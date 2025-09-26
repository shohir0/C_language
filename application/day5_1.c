#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[256];
    int age;
};

union data{
    int a;
    double b;
    char c[256];
};

int main(){

    struct student data;

    data.id = 1;
    strcpy(data.name,"山田太郎");
    data.age = 18;

    printf("学生番号：%d 名前：%s 年齢：%d\n",data.id,data.name,data.age);


    union data d[3];
    d[0].a = 1;
    d[1].b = 3.14;
    strcpy(d[2].c,"hirobe");

    printf("%d %3.2lf %s\n",d[0].a,d[1].b,d[2].c);

    return 0;
}