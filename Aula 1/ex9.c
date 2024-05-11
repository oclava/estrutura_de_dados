#include <stdio.h>

int main() {
    int n, soma = 0, digito;
    
    printf("Digite o número da conta: ");
    scanf("%d", &n);
    
    int conta_temp = n;
    
    while (conta_temp > 0) {
        soma += conta_temp % 10;
        conta_temp /= 10;   
    }
    
    digito = soma % 10;
    printf("Número de conta completo: %06d-%d\n", n, digito);
    
    return 0;
}
