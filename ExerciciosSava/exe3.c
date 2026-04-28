#include <stdio.h>
#include <stdlib.h>
int main() {
     float salary, averagesal, sumsal, biggersal;
     int cont;
     biggersal = 0;
     sumsal = 0; //soma dos salários
     
     for (cont=1; cont<=10; cont++) {
        printf ("Enter your salary:\n");
        scanf ("%f", &salary);
        sumsal=sumsal+salary;
         if (salary > biggersal) {
             biggersal = salary;
         }
     }
     averagesal=sumsal/10;
     printf ("The biggest company`s salary is: %.2f \n",biggersal);
     printf ("The average company`s salary is: %.2f \n",averagesal);
    return 0;
}