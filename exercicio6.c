/* 6. Validação de cupom de desconto

### Contexto

Uma loja virtual só aceita cupom se ele for válido, se o cliente ainda não tiver usado esse benefício e se a compra atingir um valor mínimo.

### Explicação lógica

O aluno deve perceber que a lógica tem **camadas**:

* primeiro: código válido?
* depois: cliente já usou?
* depois: valor mínimo foi atingido?

### Entradas

* `codigoValido` (`int`) → 1 sim, 0 não
* `valorCompra` (`float`)
* `jaUsouCupom` (`int`) → 1 sim, 0 não

### Regras

* Se `codigoValido == 1`:

  * se `jaUsouCupom == 0` **e** `valorCompra >= 100`, exibir `DESCONTO APLICADO`
  * senão, exibir `CUPOM INVALIDO PARA USO`
* Caso contrário, exibir `CUPOM INVALIDO` */

#include <stdio.h>

int main() {
    int codigoValido, jaUsouCupom;
    float valorCompra;

    printf("Codigo valido? (1/0): ");
    scanf("%d", &codigoValido);

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    printf("Ja usou cupom? (1/0): ");
    scanf("%d", &jaUsouCupom);

    if (codigoValido == 1) {
        if (jaUsouCupom == 0 && valorCompra >=100){
            printf ("DESCONTO APLICADO\n");
        }
        else {
            printf ("CUPOM INVÁLIDO PARA USO\n");
        }
    }
    else {
        printf ("CUPOM INVÁLIDO\n");
    }

    return 0;
}