/* 3. Sistema de entrega inteligente

### Contexto

Uma loja trabalha com regras diferentes para clientes premium e clientes comuns. Além disso, a chuva pode afetar a forma da entrega.

### Explicação lógica

Primeiro o aluno deve verificar se o cliente é premium.
Se for, existe uma regra especial.
Se não for, entra em outra lógica que combina **distância** e **chuva**.

### Entradas

* `distancia` (`float`)
* `premium` (`int`) → 1 sim, 0 não
* `chuva` (`int`) → 1 sim, 0 não

### Regras

* Se `premium == 1` e `distancia <= 20`, exibir `ENTREGA GRATUITA`
* Caso contrário:

  * se `distancia <= 10` **e** `chuva == 0`, exibir `ENTREGA NORMAL`
  * senão, exibir `ENTREGA COM TAXA`

### Saídas esperadas
  * se 

* `ENTREGA GRATUITA`
* `ENTREGA NORMAL`
* `ENTREGA COM TAXA` */

#include <stdio.h>

int main() {
    float distancia;
    int premium, chuva;

    printf("Digite a distancia da entrega: ");
    scanf("%f", &distancia);

    printf("Cliente premium? (1/0): ");
    scanf("%d", &premium);

    printf("Esta chovendo? (1/0): ");
    scanf("%d", &chuva);

   if (premium == 1 && distancia <= 20){
    printf ("ENTREGA GRATUITA");
     if (distancia <=10 && chuva ==0){
        printf ("ENTREGA NORMAL\n");
     }
     else {
        printf ("ENTREGA COM TAXA");
     }
   }

   else {
    printf ("ENTREGA COM TAXA");
   }

    return 0;
}
