#include <stdio.h>
int main(){
    char str1[10];
    char str2[10];
    printf("entre the first string :");
    scanf("%s",&str1);
    printf("entre the seconde string :");
    scanf("%s",&str2);
    for(int i=0;i<str1[i]!='\0';i++){
        printf("%c",str1[i]);
    }
    for( int j=0;j<str2[j]!='\0';j++){
            printf("%c",str2[j]);
        }
    return 0;
}