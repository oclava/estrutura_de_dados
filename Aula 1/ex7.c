#include <stdio.h>

int main() {

    int n, soma = 0, impar = 1;
    
    printf("Número natural: ");
    scanf("%d", &n);
  
    for(int i = 0; i < n; i++) {
        printf("%d", impar);
        soma += impar;
        if (i < n - 1) {
            printf(" + ");
        }
        impar += 2;  // Incrementa para o próximo número ímpar
    }
    
    printf(" = %d\n", soma);
    
    return 0;
}
