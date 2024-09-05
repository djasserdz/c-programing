#include <stdio.h>
#include <string.h>
int main()
{
    char string[]="hello world";
    string[0]='p';
    printf("%s",string);
    return 0;
}