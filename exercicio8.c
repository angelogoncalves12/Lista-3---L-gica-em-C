/* 8. Classificação de atendimento em restaurante

### Contexto

Um restaurante precisa decidir rapidamente qual será o tipo de atendimento com base em reserva, tamanho do grupo e horário.

### Explicação lógica

A reserva tem prioridade máxima.
Sem reserva, o aluno precisa avaliar se o horário é de pico.
Se for pico, o tamanho do grupo define o tempo de espera.

### Entradas

* `pessoas` (`int`)
* `reserva` (`int`) → 1 sim, 0 não
* `horario` (`int`)

### Regras

* Se `reserva == 1`, exibir `ATENDIMENTO IMEDIATO`
* Caso contrário:

  * se `(horario >= 12 && horario <= 14) || (horario >= 19 && horario <= 21)`:

    * se `pessoas <= 4`, exibir `ESPERA CURTA`
    * senão, exibir `ESPERA LONGA`
  * fora desses horários, exibir `ATENDIMENTO IMEDIATO` */

#include <stdio.h>

int main() {
    int pessoas, reserva, horario;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &pessoas);

    printf("Tem reserva? (1/0): ");
    scanf("%d", &reserva);

    printf("Digite o horario atual: ");
    scanf("%d", &horario);

    if (reserva == 1){
        printf ("ATENDIMENTO IMEDIATO");
    }
    else if ((horario >= 12 && horario <= 14) || (horario >= 19 && horario <= 21)){
        if (pessoas <= 4) {
            printf ("ESPERA CURTA");
        }
        else {
            printf ("ESPERA LONGA");
        }
    }
    else {
        printf ("ATENDIMENTO IMEDIATO");
    }

    return 0;
}