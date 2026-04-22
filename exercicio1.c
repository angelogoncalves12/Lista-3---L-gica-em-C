/* 1. Sistema de desbloqueio de celular

### Contexto

Um celular pode ser desbloqueado por biometria ou senha. Porém, quando o aparelho entra em **modo seguro**, ele fica mais restritivo e exige obrigatoriamente a senha.

### Explicação lógica

O aluno deve perceber que existem **dois cenários principais**:

* **modo seguro ligado**
* **modo seguro desligado**

No primeiro caso, a biometria deixa de importar.
No segundo caso, basta que **uma das duas formas de autenticação** esteja correta.

### Entradas

* `biometria` (`int`) → 1 correta, 0 incorreta
* `senha` (`int`) → 1 correta, 0 incorreta
* `modoSeguro` (`int`) → 1 ativo, 0 inativo

### Regras

* Se `modoSeguro == 1`, desbloqueia apenas se `senha == 1` 
if (modoSeguro == 1 && senha == 1) {
 printf ("Desbloqueado");
}

* Se `modoSeguro == 0`, desbloqueia se `biometria == 1` **ou** `senha == 1`
* Caso contrário, permanece bloqueado
else if (modoSeguro == 0) {
    if (biometria == 1 || senha == 1 ) {
        printf ("Desbloqueado");
    }
    else {

        printf ("Bloqueado");
    }
}
### Saídas esperadas

* `DESBLOQUEADO`
* `BLOQUEADO`

### Código base

#include <stdio.h>
## 1. Sistema de desbloqueio de celular

### Contexto

Um celular pode ser desbloqueado por biometria ou senha. Porém, quando o aparelho entra em **modo seguro**, ele fica mais restritivo e exige obrigatoriamente a senha.

### Explicação lógica

O aluno deve perceber que existem **dois cenários principais**:

* **modo seguro ligado**
* **modo seguro desligado**

No primeiro caso, a biometria deixa de importar.
No segundo caso, basta que **uma das duas formas de autenticação** esteja correta.

### Entradas

* `biometria` (`int`) → 1 correta, 0 incorreta
* `senha` (`int`) → 1 correta, 0 incorreta
* `modoSeguro` (`int`) → 1 ativo, 0 inativo

### Regras

* Se `modoSeguro == 1`, desbloqueia apenas se `senha == 1`
* Se `modoSeguro == 0`, desbloqueia se `biometria == 1` **ou** `senha == 1`
* Caso contrário, permanece bloqueado

### Saídas esperadas

* `DESBLOQUEADO`
* `BLOQUEADO`

### Código base */

#include <stdio.h>

int main() {
    int biometria, senha, modoSeguro;

    printf("Digite a biometria (1/0): ");
    scanf("%d", &biometria);

    printf("Digite a senha (1/0): ");
    scanf("%d", &senha);

    printf("Digite o modo seguro (1/0): ");
    scanf("%d", &modoSeguro);

    if (modoSeguro == 1 && senha == 1) {
        printf ("Desbloqueado\n");
}
    else if (modoSeguro == 0) {
        if (biometria == 1 || senha == 1 ) {
        printf ("Desbloqueado\n");
    }
        else {
        printf ("Bloqueado\n");
    }
}
    else {
        printf ("Bloqueado\n");
    }

    return 0;
}
