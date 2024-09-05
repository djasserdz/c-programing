#include <stdio.h>
int main()
{
int a,b;
printf("entre your number :");
scanf("%d",&a);
b=a%2;
if(b==0)
{
    printf("%d is an even number",a);
}
else
{
    printf("%d is an odd number",a);
}
return 0;

}