/* 2. Controle de acesso a laboratório

### Contexto

Um laboratório universitário possui regras diferentes para **professores** e **alunos**. Professores podem entrar a qualquer hora. Alunos só entram no horário regular, salvo quando possuem autorização especial.

### Explicação lógica

O aluno deve primeiro identificar **quem está tentando entrar**.
Depois disso, no caso do aluno, precisa verificar **horário** e possivelmente **autorização**.

### Entradas

* `tipoUsuario` (`int`) → 1 aluno, 2 professor
* `horario` (`int`) → valor entre 0 e 23
* `autorizacao` (`int`) → 1 sim, 0 não

### Regras

* Se `tipoUsuario == 2`, entrada permitida
* Se `tipoUsuario == 1`:

  * entre 8 e 18 → entrada permitida
  * fora desse horário → só entra se `autorizacao == 1`
* Caso contrário, entrada negada

### Saídas esperadas

* `ENTRADA PERMITIDA`
* `ENTRADA NEGADA`

### Código base */

#include <stdio.h>

int main() {
    int tipoUsuario, horario, autorizacao;

    printf("Digite o tipo de usuario (1-aluno, 2-professor): ");
    scanf("%d", &tipoUsuario);

    printf("Digite o horario atual: ");
    scanf("%d", &horario);

    printf("Digite a autorizacao especial (1/0): ");
    scanf("%d", &autorizacao);

    if (tipoUsuario == 2) {
        printf ("Entrada Permitida\n");
    }
    else if (tipoUsuario == 1) {
        if (horario >= 8 && horario <=18) {
            printf ("Entrada Permitida\n");
        }
        else if (autorizacao == 1) {
            printf ("Entrada Permitida\n");
        }
        else {
            printf ("Entrada Negada\n");
        }
    }
    else {
        printf ("Entrada Negada\n");
    }

    return 0;
}
