#include <stdio.h>

#define TAMANHO 5

int main() {
    int numeros[TAMANHO];
    
    printf("Digite cinco números:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros na ordem inversa:\n");
    for (int i = TAMANHO - 1; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
