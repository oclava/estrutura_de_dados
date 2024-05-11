#include <stdio.h>
#include <string.h>
// Função para concatenar t ao final de s
void meu_strcat(char *s, const char *t) {
    while (*s) { 
        s++;
    }
    while ((*s++ = *t++)); 
}

int main() {
    char s[256];
    char t[128]; 

    printf("Digite a string base (s): ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("Digite a string para concatenar (t): ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0'; 

    meu_strcat(s, t);
    printf("Resultado da concatenação: %s\n", s); 

    return 0;
}
