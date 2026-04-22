/* 7. Sistema de energia residencial inteligente

### Contexto

Um sistema doméstico monitora o consumo e gera alertas diferentes dependendo se é horário de pico e se a casa possui energia solar.

### Explicação lógica

O aluno deve separar primeiro:

* horário de pico
* fora do horário de pico

Depois disso, analisar o consumo e a presença de energia solar.

### Entradas

* `consumo` (`float`)
* `horarioPico` (`int`) → 1 sim, 0 não
* `energiaSolar` (`int`) → 1 sim, 0 não

### Regras

* Se `horarioPico == 1`:

  * se `consumo > 300` **e** `energiaSolar == 0`, exibir `ALERTA DE ALTO CONSUMO`
  * senão, exibir `CONSUMO CONTROLADO`
* Se `horarioPico == 0`:

  * se `consumo > 500`, exibir `ALERTA DE CONSUMO`
  * senão, exibir `CONSUMO NORMAL` */

 #include <stdio.h>

int main() {
    float consumo;
    int horarioPico, energiaSolar;

    printf("Digite o consumo atual: ");
    scanf("%f", &consumo);

    printf("Horario de pico? (1/0): ");
    scanf("%d", &horarioPico);

    printf("Possui energia solar? (1/0// implemente a lógica aqui): ");
    scanf("%d", &energiaSolar);

    if (horarioPico == 1) {
        if (consumo > 300 && energiaSolar == 0) {
            printf ("Alerta de ALTO CONSUMO");
        }
        else {
            printf ("CONSUMO CONTROLADO");
        }
    }
    else if (horarioPico == 0) {
        if (consumo > 500){
            printf ("ALERTA DE CONSUMO");
        }
        else {
            printf ("CONSUMO NORMAL");
        }
    }
    else {
        printf ("FORMATO INVÁLIDO");
    }
    return 0;
}