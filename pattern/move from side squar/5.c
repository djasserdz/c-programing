#include <stdio.h>
int main()
{
    int a,i,j;
    printf("this programe prints a specefic pattern\n");
    patter();
    return 0;
}
void patter()
{
    int a,j,i;
    printf("entre a number of lines :");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
        if(j==1)
        {
            printf(" ");
        }
        else{
            printf("*");
        }
        }
        printf("\n");
   }
}