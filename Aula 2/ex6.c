#include <stdio.h>
#include <string.h>

// Função para encontrar a posição da primeira ocorrência de 'c' em 's'
int strpos(char *s, char c) {
    char *ptr = s; 

    while (*ptr != '\0') {
        if (*ptr == c) { 
            return ptr - s; 
        }
        ptr++;
    }

    return -1; // Retorna -1 se 'c' não for encontrado
}

int main() {
    char str[100]; // Array para armazenar a string
    char ch; // Variável para o caractere a ser procurado

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); // Lê a string do usuário
    str[strcspn(str, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite o caractere a ser procurado: ");
    scanf("%c", &ch); // Lê o caractere do usuário

    int pos = strpos(str, ch);

    if (pos == -1) {
        printf("O caractere '%c' não foi encontrado em \"%s\".\n", ch, str);
    } else {
        printf("O caractere '%c' foi encontrado na posição %d de \"%s\".\n", ch, pos, str);
    }

    return 0;
}
