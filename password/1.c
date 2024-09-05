#include <stdio.h>
int main()
{
    int password=1214,a;
    printf("this programe show the mecanism of password unlocking system\n");
    unlock();
       return 0;
}
void unlock()
{
    int a,password=1214;
    printf("entre a password to unlock(password contain 4 numbers) :\n");
       scanf("%d",&a);
       if(a==password)
       {
        printf("login complete");
       }
       else{
        do{
            printf("wrong password\n");
            printf("try again :");
            scanf("%d",&a);
        }while(a!=password);
        printf("login complete");
       } 
}