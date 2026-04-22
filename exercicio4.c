/*4. Verificação de segurança de login bancário

### Contexto

Um sistema bancário não depende apenas de login correto. Ele também analisa se o dispositivo é conhecido e se a tentativa parece suspeita.

### Explicação lógica

A primeira verificação é sempre o login.
Somente se ele estiver correto faz sentido verificar o restante.
Dentro desse cenário, o sistema decide entre liberar ou pedir verificação extra.

### Entradas

* `loginOk` (`int`) → 1 sim, 0 não
* `dispositivoConhecido` (`int`) → 1 sim, 0 não
* `tentativaSuspeita` (`int`) → 1 sim, 0 não

### Regras

* Se `loginOk == 1`:

  * se `dispositivoConhecido == 1` **e** `tentativaSuspeita == 0` → `ACESSO LIBERADO`
  * senão → `VERIFICACAO EXTRA NECESSARIA`
* Caso contrário → `ACESSO NEGADO`*/

#include <stdio.h>

int main() {
    int loginOk, dispositivoConhecido, tentativaSuspeita;

    printf("Login correto? (1/0): ");
    scanf("%d", &loginOk);

    printf("Dispositivo conhecido? (1/0): ");
    scanf("%d", &dispositivoConhecido);

    printf("Tentativa suspeita? (1/0): ");
    scanf("%d", &tentativaSuspeita);

    if (loginOk == 1){
        if (dispositivoConhecido == 1 && tentativaSuspeita == 0) {
            printf ("ACESSO LIBERADO\n");
        }
        else {
            printf ("VERIFICAÇÃO EXTRA NECESSÁRIA\n");
        }
    }
    else {
        printf ("ACESSO NEGADO");
    }

    return 0;
}
