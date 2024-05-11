#include <stdio.h>
#include <ctype.h>
#include <string.h>

void meu_strupr(char *s) {
    while (*s) { // Enquanto *s não for '\0' (fim da string)
        *s = toupper((unsigned char) *s); // Converte o caractere para maiúscula
        s++; // Avança para o próximo caractere
    }
}

int main() {
    char str[100];
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);


    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    meu_strupr(str);
    printf("String em maiúsculas: %s\n", str);

    return 0;
}
