#include <stdio.h>

// Função recursiva para calcular o n-ésimo termo da série de Fibonacci
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;  // Os dois primeiros termos são 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Soma dos dois termos anteriores
    }
}

int main() {
    int n;
    printf("Digite o número n (n >= 3) para obter o n-ésimo termo da série de Fibonacci: ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Por favor, insira um número maior ou igual a 3.\n");
    } else {
        printf("O %d-ésimo termo da série de Fibonacci é %d.\n", n, fibonacci(n));
    }

    return 0;
}
