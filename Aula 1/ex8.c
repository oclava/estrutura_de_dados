#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int fib1 = 1, fib2 = 1, fibn;
    
    for (int i = 3; i <= n; i++) {
        fibn = fib1 + fib2; // Calcula o próximo termo da sequência
        fib1 = fib2;       // Atualiza o penúltimo termo
        fib2 = fibn;       // Atualiza o último termo
    }
    
    printf("O %d-ésimo termo da série de Fibonacci é %d.\n", n, fibn);
    
    return 0;
}
