#include <stdio.h>
#include <string.h>

int main() {
    char player1[10], player2[10];

    printf("Player 1, enter your choice (rock, paper, scissors): ");
    scanf("%s", player1);
    printf("Player 2, enter your choice (rock, paper, scissors): ");
    scanf("%s", player2);

    if (strcmp(player1, player2) == 0) {
        printf("It's a tie!\n");
    } else if ((strcmp(player1, "rock") == 0 && strcmp(player2, "scissors") == 0) ||
               (strcmp(player1, "paper") == 0 && strcmp(player2, "rock") == 0) ||
               (strcmp(player1, "scissors") == 0 && strcmp(player2, "paper") == 0)) {
        printf("Player 1 wins!\n");
    } else {
        printf("Player 2 wins!\n");
    }

    return 0;
}
