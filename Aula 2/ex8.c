#include <stdio.h>
#include <string.h> // Para usar strlen

#define MAX_SIZE 101 // Define o tamanho máximo da string

// Função para inserir um caractere c na posição p da string s
void strins(char *s, char c, int p) {
    int len = strlen(s); // Obtém o comprimento atual da string
    if (p > len) { // Se p é maior que o comprimento da string
        p = len; // Ajusta p para ser o fim da string
    }

    // Verifica se há espaço para inserir outro caractere
    if (len + 1 >= MAX_SIZE) {
        printf("Não há espaço suficiente na string para inserir outro caractere.\n");
        return;
    }

    // Desloca os caracteres para a direita para abrir espaço
    for (int i = len; i >= p; i--) {
        s[i + 1] = s[i];
    }

    // Insere o novo caractere
    s[p] = c;
}

int main() {
    char str[MAX_SIZE] = "";
    char ch; 
    int pos;

    printf("Digite uma string (máximo 100 caracteres): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Digite o caractere a ser inserido: ");
    scanf("%c", &ch);

    printf("Digite a posição para inserir o caractere: ");
    scanf("%d", &pos); 

    strins(str, ch, pos); // Chama a função para inserir o caractere

    printf("String após inserção: %s\n", str);

    return 0;
}
