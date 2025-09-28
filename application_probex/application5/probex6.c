#include <stdio.h>

typedef struct{
    int hour;
    int minute;
    int second;
}Time;

void setTime(Time*,int,int,int);

int getDiffMinute(Time*,Time*);

int main(){
    Time start,end;
    int diff;


    setTime(&start,1,10,13);
    setTime(&end,2,20,42);


    diff = getDiffMinute(&start,&end);

     printf("%d:%d:%dと、%d:%d:%dの違いは、%d秒です。\n"
        ,start.hour,start.minute,start.second,end.hour,end.minute,end.second,diff);

    return 0;
}

void setTime(Time* t,int hour,int minute,int second){
    t -> hour = hour;
    t -> minute = minute;
    t -> second = second;
}

int getDiffMinute(Time* start,Time* end){
    int s;
    int e;

    s = start->hour *3600 + start->minute * 60 + start->second;
    e = end->hour * 3600 + end->minute * 60 + end->second;

    return e - s;
}