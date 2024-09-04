#include <stdio.h>
#include <math.h>
int main()
{
double a,b,c,delta,x1,x2;
printf("this programe calculate thesolution for 2nd grade equation\n");
printf("entre your a  :\n");
scanf("%lf",&a);
printf("entre your b  :\n");
scanf("%lf",&b);
printf("entre your c  :\n");
scanf("%lf",&c);
delta=b*b-4*a*c;
if(delta<0)
{
    printf("there is no solution in R");
}
else if(delta==0)
{
    x1=-b/(2*a);
    printf("%lf is the only solution",x1);
}
else if(delta>0)
{
     x1=(-b+pow(delta,0.5))/(2*a);
     x2=(-b-1*pow(delta,0.5))/(2*a);
     printf("%.2lf and %.2lf are the solutions",x1,x2);
}
return 0;
}