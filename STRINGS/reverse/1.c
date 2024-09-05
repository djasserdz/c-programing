#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "world";
    int length;
    length = strlen(str);
    for(int i=length;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}

