#include <stdio.h>
int main()
{
    int a,j,i,k;
    printf("entre a number :");
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=a;j>=1;j--)
        {
            if(i<=j)
            {
                printf("*");
            }
            else{
                printf("");
            }
        }
        printf("\n");
    }
    return 0;
}