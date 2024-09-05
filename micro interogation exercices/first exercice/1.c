#include <stdio.h>
int main()
{
int i,b;
printf("this programe finds if a number is an odd or even while skipinig 4 multipliers\n");
for( i=0;i<=20;i+=2)
{
b=i%6;
if(b!=0)
{
    printf("%d\n",i);
}
}
return 0;
}