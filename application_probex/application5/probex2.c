#include <stdio.h>
#include <string.h>

typedef struct{
    char name[256];
    int id;
    int sex;
    int grade;
}student_data;

void setData(student_data*,char*,int,int,int);
void showData(student_data*);


int main(){
    student_data data[5];

    char name[][256] = {"青木一","遠藤京子","加藤悟","佐々木八重子","田中徹"};
    int id[] = {1001,1002,1003,1004,1005};
    int sex[] = {0,1,0,1,0};
    int grade[] = {1,1,1,1,1};

    int i;

    for(i = 0; i < 5; i++){
        setData(&data[i],name[i],id[i],sex[i],grade[i]);
    }

    for(i = 0; i < 5; i++){
        showData(&data[i]);
        printf("\n");
    }


return 0;
}

void setData(student_data* data,char* name,int id,int sex,int grade){
    int i;

    for(i = 0; i < 5; i++){
        strcpy(data -> name,name);
        data -> id = id;
        data -> sex = sex;
        data -> grade = grade;
    }
}

void showData(student_data* data){
    printf("名前：%s\n性別：%d\n学生番号：%d\n学年：%d\n",data->name,data->sex,data->id,data->grade);
}