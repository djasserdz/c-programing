#include <stdio.h>

void display(); 
void display2();
int main() {
    display();
    display2();
    return 0;
}

void display() {
    char table[20];
    int i;
    printf("Enter your word: ");
    scanf("%19s", table);
    for (i = 0; table[i]!='\0'; i++) {
        printf("%c\n", table[i]);
    }
}
void display2(){
    char username[60];
    char password[10];
    printf("entre the username (no space between words) :");
    scanf("%s",username);
    printf("entre your password (no space) :");
    scanf("%s",password);
    printf("your account : %s\t and %s",username,password);
}