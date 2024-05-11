#include <stdio.h>
#include <string.h>

// Função para remover o caractere na posição p da string s
void strdel(char *s, int p) {
    int len = strlen(s);
    if (p < 0 || p >= len) { 
        return; 
    }

    // Desloca os caracteres após p para a esquerda, sobrescrevendo o caractere em p
    for (int i = p; i < len; i++) {
        s[i] = s[i + 1];
    }
}

int main() {
    char str[100];
    int pos; 

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';

    printf("Digite a posição do caractere a ser removido: ");
    scanf("%d", &pos);

    strdel(str, pos); // Chama a função para remover o caractere na posição especificada
    printf("String após remoção: %s\n", str); 
    return 0;
}
