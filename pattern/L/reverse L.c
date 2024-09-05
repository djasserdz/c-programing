#include <stdio.h>
int main()
{
    int a,j,i;
    printf("this programe prints a specefic pattern\n");
    pattern();
    return 0;
}
void pattern()
{
    int a,i,j;
        printf("entre a number :");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=5;j++)
        {
            if( i==a || j==1)
            {
            printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}