#include <stdio.h>

int printtbl(char tbl[3][3]) {
    printf("----------\n");
    for (int i = 0; i < 3; i++) {
        printf("| %c | %c | %c |\n", tbl[i][0], tbl[i][1], tbl[i][2]);
        printf("----------\n");
    }
    return 1;
}

int win(char tbl[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if ((tbl[i][0] == player && tbl[i][1] == player && tbl[i][2] == player) ||
            (tbl[0][i] == player && tbl[1][i] == player && tbl[2][i] == player)) {
            printf("Player %c won!\n", player);
            return 1;
        }
    }

    if ((tbl[0][0] == player && tbl[1][1] == player && tbl[2][2] == player) ||
        (tbl[2][0] == player && tbl[1][1] == player && tbl[0][2] == player)) {
        printf("Player %c won!\n", player);
        return 1;
    }

    return 0;
}
int isfull(char tbl[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tbl[i][j] == ' ') {
                printf("It's not full\n");
                return 0;
            }
        }
    }
    printf("It's full\n");
    return 1;
}

int main() {
    char tbl[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int row, colomn;
    char player = 'x';

    printf("Welcome to X and O game\n");

    do {
        printtbl(tbl);

        printf("Player %c, please choose a row and column: ", player);
        scanf("%d %d", &row, &colomn);

        if (row >= 0 && row < 3 && colomn >= 0 && colomn < 3 && tbl[row][colomn] == ' ') {
            tbl[row][colomn] = player;

            if (win(tbl, player)) {
                printtbl(tbl);
                printf("Player %c wins!\n", player);
                break;
            }

            if (isfull(tbl)) {
                printtbl(tbl);
                printf("It's a tie!\n");
                break;
            }

            player = (player == 'x') ? 'o' : 'x';
        } else {
            printf("Invalid move, try again\n");
        }
    } while (1);

    return 0;
}
