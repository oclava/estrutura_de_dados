#include <stdio.h>

int minha_strlen(const char *s) {
    int contador = 0; // Inicializa o contador de caracteres
    while (*s != '\0') { // Enquanto não chegar ao fim da string
        contador++; // Incrementa o contador
        s++; // Move o ponteiro para o próximo caractere
    }
    return contador; // Retorna o número de caracteres, sem incluir o '\0'
}

int main() {
    char str[100]; // Declara um array de caracteres para a string
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[minha_strlen(str) - 1] = '\0';
    
    printf("O comprimento da string é: %d\n", minha_strlen(str));
    return 0;
}
