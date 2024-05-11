#include <stdio.h>

unsigned long long fat(int n) {
    if (n == 0) {
        return 1;  // Caso base: fatorial de 0 é 1
    } else {
        return n * fat(n - 1);  // Passo recursivo
    }
}

int main() {
    int n;
    printf("Digite um número para calcular seu fatorial: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Fatorial não definido para números negativos.\n");
    } else {
        printf("O fatorial de %d é %llu.\n", n, fat(n));
    }

    return 0;
}
