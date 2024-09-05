#include <stdio.h>
int main()
{
int i,j,a;
printf("this programe shows the table of mutplication from 1 to 10\n");
for(i=1;i<=10;i++)
{
    for(j=1;j<=10;j++)
    {
        a=j*i;
        printf("%d*%d=%d\n",i,j,a);
    }
    printf("\n");
}
return 0;

}