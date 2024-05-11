#include <stdio.h>

unsigned long long fat(int n) {
    unsigned long long fatorial = 1;
    for (int i = 2; i <= n; i++) { // Começa de 2, já que 1 não altera o produto
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int n;
    printf("Digite um número para calcular seu fatorial: ");
    scanf("%d", &n);
    
    printf("O fatorial de %d é %llu.\n", n, fat(n));


    return 0;
}
