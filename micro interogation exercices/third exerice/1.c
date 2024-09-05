#include <stdio.h>
int main()
{
int a=0,n,i;
printf("entre a number :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("%d\n",i);
    a=a+i;
}
printf("the result is %d",a);
return 0;
}