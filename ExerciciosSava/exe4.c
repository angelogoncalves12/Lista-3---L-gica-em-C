#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
     float nota1, nota2, nota3, media;
     int cont;
     char name [200];
     
     for (cont=0; cont<10; cont++){
         printf ("Digite seu primeiro nome: ");
         scanf (" %s", &name);
         printf ("Insira a primeira nota do(a) %s: ",name);
         scanf ("%f", &nota1);
         printf ("Insira a segunda nota do(a) %s: ",name);
         scanf ("%f", &nota2);
         printf ("Insira a terceira nota do(a) %s: ",name);
         scanf ("%f", &nota3);
         media = (nota1+nota2+nota3) /3;
         if (media>=7 && media<=10) {
             printf ("Aluno Aprovado com Êxito!\n");
         }
         else if (media<7) {
             printf ("Aluno em Recuperação Final!\n");
         }
         else if (media>10 || media<0) {
             printf ("O valor inserido é inválido!\n");
         }
     }
    return 0;
}