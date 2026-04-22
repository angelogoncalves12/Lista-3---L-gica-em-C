/* 9. Sistema de aprovação de corrida

### Contexto

Um aplicativo de mobilidade aceita ou recusa corridas com base na disponibilidade do motorista e na atratividade da corrida.

### Explicação lógica

Primeiro precisa existir motorista disponível.
Só depois disso faz sentido verificar se a corrida vale a pena, usando distância **ou** valor estimado.

### Entradas

* `distancia` (`float`)
* `valor` (`float`)
* `motoristaDisponivel` (`int`) → 1 sim, 0 não

### Regras

* Se `motoristaDisponivel == 1`:

  * se `distancia <= 10` **ou** `valor >= 30`, exibir `CORRIDA ACEITA`
  * senão, exibir `CORRIDA RECUSADA POR BAIXA RENTABILIDADE`
* Caso contrário, exibir `SEM MOTORISTAS DISPONIVEIS` */

#include <stdio.h>

int main() {
    float distancia, valor;
    int motoristaDisponivel;

    printf("Digite a distancia da corrida: ");
    scanf("%f", &distancia);

    printf("Digite o valor estimado: ");
    scanf("%f", &valor);

    printf("Motorista disponivel? (1/0): ");
    scanf("%d", &motoristaDisponivel);

    if (motoristaDisponivel == 1) {
        if (distancia <= 10 || valor >=30) {
            printf ("CORRIDA ACEITA");
        }
        else {
            printf ("CORRIDA RECUSADA POR BAIXA RENTABILIDADE");
    
        }
    }
    else {
        printf ("SEM MOTORISTAS DISPONÍVEL");
    }

    return 0;
}
