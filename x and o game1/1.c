#include <stdio.h>
int main()
{
char board[3][3]={
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
printboard(board);
return 0;
}
void printboard(char board[3][3])
{
    printf("-----------\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
        printf("------------\n");
    }
}
