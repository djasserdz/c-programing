#include <stdio.h>
int main(){
    int minutes;
    printf("entre mionutes : ");
    scanf("%d",&minutes);
    int hour,rminutes;
    calc(minutes,&hour,&rminutes);
    printf("the time is %d hour and %d minutes ",hour,rminutes);
    return 0;
}
void calc(int minutes,int *hour,int *rminutes){
    *hour=minutes/60;
    *rminutes=minutes%60;
}