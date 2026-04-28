#include <stdio.h>
#include <stdlib.h>

int main() {
    double num, maior;
    int cont;
    maior = 0;
    for (cont=0; cont<20; cont++) {
        printf ("Digite um número: ");
        scanf ("%lf",&num);
        if (num > maior){
        maior = num;    
        }    
    }
    printf ("O maior número apresentado foi: %.2lf",maior);
    return 0;
}