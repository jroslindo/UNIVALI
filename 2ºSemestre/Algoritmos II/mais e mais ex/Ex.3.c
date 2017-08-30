/*3) Assumindo que o endereço da variável x foi atribuído a um ponteiro px, escreva uma expressão que não usa x e divida x por 5.. */

#include <stdio.h>
int main() {
   int *px, v = 10;

   px = &v;

   *px /= 5;

   printf("%d",*px);
   printf("\n%d",v);

   return 0;
}


