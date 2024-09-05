#include <stdio.h>
#include <string.h>
int main(){
    char word[20];
    int c=0;
    printf("entre a string :");
    scanf("%s",&word);
    for(int i=0;i<word[i]!='\0';i++){
        c=c+1;
    }
    printf("the length is %d",c);
    return 0;
}