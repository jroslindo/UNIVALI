/*3) Assumindo que o endere�o da vari�vel x foi atribu�do a um ponteiro px, escreva uma express�o que n�o usa x e divida x por 5.. */

#include <stdio.h>
int main() {
   int *px, v = 10;

   px = &v;

   *px /= 5;

   printf("%d",*px);
   printf("\n%d",v);

   return 0;
}


