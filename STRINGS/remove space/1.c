#include <stdio.h>
#include <strings.h>
int main(){
    char str[]="hello bitch";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' ')
        {
          printf("%c",str[i]);
        }
    }
    return 0;
}