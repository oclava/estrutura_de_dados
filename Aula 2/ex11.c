#include <stdio.h>

// Definição da estrutura Horario
typedef struct {
    int hora;
    int minuto;
    int segundo;
} Horario;

int main() {
    // Cria e inicializa uma variável do tipo Horario
    Horario meuHorario = {19, 34, 32}; // exemplo de horário 12:34:56

    // Exibe o horário no formato 99:99:99
    printf("Horário atual: %02d:%02d:%02d\n", meuHorario.hora, meuHorario.minuto, meuHorario.segundo);

    return 0;
}
