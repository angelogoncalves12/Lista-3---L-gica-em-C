/* 5. Sistema de recomendação de filme

### Contexto

Uma plataforma de streaming quer recomendar filmes com base em idade, gênero preferido e se a pessoa está sozinha ou acompanhada.

### Explicação lógica

A idade é a primeira grande divisão da lógica.
Para menores de idade, o sistema bloqueia terror.
Para maiores de idade, o gênero e a companhia alteram a forma da recomendação.

### Entradas

* `idade` (`int`)
* `genero` (`int`) → 1 ação, 2 comédia, 3 terror
* `acompanhado` (`int`) → 1 sim, 0 não

### Regras

* Se `idade < 18` e `genero == 3`, exibir `TERROR NAO RECOMENDADO`
* Se `idade < 18` e `genero != 3`, exibir `RECOMENDAR NORMALMENTE`
* Se `idade >= 18`:

  * se `genero == 3` **e** `acompanhado == 0`, exibir `RECOMENDAR COM AVISO`
  * senão, exibir `RECOMENDAR NORMALMENTE` */

#include <stdio.h>

int main() {
    int idade, genero, acompanhado;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o genero preferido (1-acao, 2-comedia, 3-terror): ");
    scanf("%d", &genero);

    printf("Esta acompanhado? (1/0): ");
    scanf("%d", &acompanhado);

    if (idade < 18 && genero == 3) {
        printf ("TERROR NÃO RECOMENDADO");
    }
    else if (idade < 18 && genero != 3) {
        printf ("RECOMENDAR NORMALMENTE");
    }
    else if (idade >= 18) {
        if (genero == 3 && acompanhado == 0) {
            printf ("RECOMENDAR COM AVISO");
        }
        else {
            printf ("RECOMENDAR NORMALMENTE");
        }
    }
    else {
        printf ("Tente Novamente");
    }
    return 0;
}
