#include <stdio.h>

// Definição da estrutura para armazenar os detalhes de um vôo
typedef struct {
    char cidadeOrigem[50];
    char cidadeDestino[50];
    char horarioPartida[6];  // HH:MM format
    char horarioChegada[6];
} Voo;

int main() {
    // Criação e inicialização de uma variável do tipo Voo
    Voo meuVoo = {
        "São Paulo",            // cidade de origem
        "Rio de Janeiro",       // cidade de destino
        "09:30",                // horário de partida
        "11:45"                 // horário de chegada
    };

    // Exibição das informações do vôo
    printf("Vôo de %s para %s\n", meuVoo.cidadeOrigem, meuVoo.cidadeDestino);
    printf("Partida às %s, Chegada às %s\n", meuVoo.horarioPartida, meuVoo.horarioChegada);

    return 0;
}
