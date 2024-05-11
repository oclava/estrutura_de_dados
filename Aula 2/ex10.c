#include <stdio.h>

int main() {
    char tabuleiro[3][3];

    // Inicialização do tabuleiro com espaços vazios, representados por espaços em branco
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

    // Exibição do tabuleiro inicial
    printf("Tabuleiro inicial para o Jogo da Velha:\n");
    for (int i = 0; i < 3; i++) {
        if (i > 0) {
            printf("---+---+---\n");
        }
        for (int j = 0; j < 3; j++) {
            if (j > 0) {
                printf("|");
            }
            printf(" %c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
