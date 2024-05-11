#include <stdio.h>

int main() {
    int n;

    printf("Digite a ordem da matriz quadrada: ");
    scanf("%d", &n);

    int matriz[n][n]; // Declara a matriz quadrada de ordem n

    // Solicita ao usuário para preencher a matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibe os elementos da diagonal principal
    printf("Elementos da diagonal principal:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}
