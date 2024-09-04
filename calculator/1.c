#include <stdio.h>
int main(){
double c;
    printf("this is a calculator programe\n");
    calc();
    return 0;
}
int calc(){
    double a,b,c;
    char d;
    printf("entre the 1st and 2nd number :");
    scanf("%lf %lf",&a,&b);
    printf("entre the operation(+,-,*,/) :");
    scanf(" %c",&d);
    if(d=='+'){
        c=a+b;
        printf("the result is %.2lf",c);
    }
    else if(d=='-'){
        c=a-b;
        printf("the result is %.2lf",c);
    }
    else if(d=='*'){
        c=a*b;
        printf("the result is %.2lf",c);
    }
    else if(d=='/'){
        c=a/b;
        printf("the result is %.2lf",c);
    }
    return 0;
}