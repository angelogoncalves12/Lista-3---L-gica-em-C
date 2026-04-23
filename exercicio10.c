/* 10. Sistema de alerta de servidor

### Contexto

Uma central de monitoramento precisa classificar o estado de um servidor com base no uso de CPU, uso de memória e existência de erro crítico.

### Explicação lógica

Erro crítico tem prioridade absoluta.
Se não houver erro crítico, a classificação depende da combinação entre CPU e memória.

### Entradas

* `cpu` (`float`)
* `memoria` (`float`)
* `erroCritico` (`int`) → 1 sim, 0 não

### Regras

* Se `erroCritico == 1`, exibir `ALERTA MAXIMO`
* Caso contrário:

  * se `cpu > 80` **e** `memoria > 80`, exibir `ALERTA ALTO`
  * senão se `cpu > 80` **ou** `memoria > 80`, exibir `ALERTA MEDIO`
  * senão, exibir `FUNCIONAMENTO NORMAL` */ 
  #include <stdio.h>

int main() {
    float cpu, memoria;
    int erroCritico;

    printf("Digite o uso de CPU: ");
    scanf("%f", &cpu);

    printf("Digite o uso de memoria: ");
    scanf("%f", &memoria);

    printf("Ha erro critico? (1/0): ");
    scanf("%d", &erroCritico);

    if (erroCritico == 1) {
        printf ("ALERTA MÁXIMO\n");
    }
    
    if (cpu > 80 && memoria > 80) {
        printf ("ALERTA ALTO\n");
    }
    else if (cpu > 80 || memoria > 80) {
        printf ("ALERTA MÉDIO\n");
    }
    else {
        printf ("FUNCIONAMENTO NORMAL\n");
    }

    return 0;
}
