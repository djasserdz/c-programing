#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
   char *s1="hello";
   char *s2="world";
   char *s3=concat(s1,s2);
   printf("the concatenaded string is : %s\n",s3);
   return 0;
}
int concat(char *s1,char *s2){
    int lent1=strlen(s1);
    int lent2=strlen(s2);
    char *result=malloc(lent1 +lent2 +1);
    if(result ==NULL){
        printf("error:memory allocation failed");
        return NULL;
    }
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}