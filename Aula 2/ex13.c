#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 5
#define TAM_NOME 50
#define TAM_TELEFONE 15

typedef struct {
    char nome[TAM_NOME];
    char telefone[TAM_TELEFONE];
} PESSOA;

void preencherAgenda(PESSOA agenda[]) {
    strcpy(agenda[0].nome, "Alice");
    strcpy(agenda[0].telefone, "1234-5678");

    strcpy(agenda[1].nome, "Bob");
    strcpy(agenda[1].telefone, "2345-6789");

    strcpy(agenda[2].nome, "Carol");
    strcpy(agenda[2].telefone, "3456-7890");

    strcpy(agenda[3].nome, "David");
    strcpy(agenda[3].telefone, "4567-8901");

    strcpy(agenda[4].nome, "Eve");
    strcpy(agenda[4].telefone, "5678-9012");
}

char* procurarTelefone(PESSOA agenda[], const char* nome) {
    for (int i = 0; i < MAX_PESSOAS; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            return agenda[i].telefone;
        }
    }
    return NULL; // Retorna NULL se não encontrar a pessoa
}

int main() {
    PESSOA agenda[MAX_PESSOAS];
    char nomeBusca[TAM_NOME];
    char* telefone;

    preencherAgenda(agenda);

    printf("Digite o nome da pessoa para buscar o telefone: ");
    fgets(nomeBusca, TAM_NOME, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

    telefone = procurarTelefone(agenda, nomeBusca);

    if (telefone) {
        printf("O telefone de %s é %s.\n", nomeBusca, telefone);
    } else {
        printf("Pessoa não encontrada na agenda.\n");
    }

    return 0;
}
