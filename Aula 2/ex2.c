#include <stdio.h>

#define NUM_DIAS 7

void exibe_linha(int temperatura) {
    for (int i = 0; i < temperatura; i++) {
        printf("*");
    }
    printf("\n");
}


void histograma(int t[NUM_DIAS]) {
    printf("Histograma de Temperaturas da Semana:\n");
    for (int i = 0; i < NUM_DIAS; i++) {
        printf("Dia %d (%d°C): ", i + 1, t[i]);
        exibe_linha(t[i]);
    }
}

int main() {
    int temperaturas[NUM_DIAS];

    printf("Digite as temperaturas para cada dia da semana:\n");
    for (int i = 0; i < NUM_DIAS; i++) {
        printf("Temperatura no dia %d: ", i + 1);
        scanf("%d", &temperaturas[i]);
    }

    histograma(temperaturas);

    return 0;
}
