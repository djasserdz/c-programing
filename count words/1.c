#include <stdio.h>
int main()
{
    int word;
char words[1000];
printf("entre your words :");
scanf("%999[\n]",words);
int result=wordscounter(word);
printf("the number is %d",result);
return 0;
}
int wordscounter(const char* elword)
{
    int i;
    int result=1;
    for(i=0;elword[i] !='\0';i++){
        if(elword[i] ==' '){
            result++;
        }
    }
    return result;
}