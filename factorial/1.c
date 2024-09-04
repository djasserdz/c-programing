#include <stdio.h>
int main()
{
int a,b=1,i;
printf("this programe calculate the factorial of a number\n");
printf("entre a number : ");
scanf("%d",&a);
if(a==0)
{
    printf("the factorial is 0!=1");
}
else{
    for(i=1;i<=a;i++)
    {
        b=b*i;
    }
    printf("the factorial is %d!=%d",a,b);
}
return 0;
}