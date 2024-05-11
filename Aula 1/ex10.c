#include <stdio.h>

int main() {
    int n, i, eh_primo = 1;

    printf("Digite um número: ");
    scanf("%d", &n);
    
    if (n <= 1) {
        eh_primo = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                eh_primo = 0;
                break;
            }
        }
    }
    
    if (eh_primo) {
        printf("%d é um número primo.\n", n);
    } else {
        printf("%d não é um número primo.\n", n);
    }
    
    return 0;
}
