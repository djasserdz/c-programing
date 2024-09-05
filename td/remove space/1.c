#include <stdio.h>
void delete_space();
int main(){

    delete_space();
    return 0;
}
void delete_space(){
    char table[100]="hello bitvch mother fuccked";
    for(int i=0;table[i]!='\0';i++){
        if(table[i]!=' '){
            printf("%c",table[i]);
        }
    }
}