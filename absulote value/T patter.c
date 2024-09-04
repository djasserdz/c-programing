#include <stdio.h>
int main()
{
    int x,y;
    printf("this programe display the absulote value of |x-y|\n");
    printf("entre a value of x :");
    scanf("%d",&x);
    printf("entre a value of y :");
    scanf("%d",&y);
    if(x>y)
    {
        printf("the absolute value of |x-y| = %d-%d",x,y);
    }
    else if(x<y)
    {
        printf("the absolute value of |x-y| = -(%d-%d)",x,y);
    }
return 0;
}