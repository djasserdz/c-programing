#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("entre a string :");
    scanf("%s",str);
    for(int i=0;i<str[i]!='\0';i++){
        if(str[i]=' '){
            continue;
            printf("%c",str[i]);
        }
    }
    return 0;
}