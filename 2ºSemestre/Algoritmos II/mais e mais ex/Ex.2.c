/*2) Assumindo que o endere�o de num foi atribu�do a um ponteiro pnum, quais das seguintes express�es s�o verdadeiras?
  a) num = pnum; 	b) num = *pnum; 	c) pnum = *num; 	d) pnum = &num;
*/

#include <stdio.h>

int main() {

    int *pnum, num=5;

    pnum = &num;  //endere�o de num foi atribu�do a um ponteiro pnum

    printf("Valor de num: %d",num);
    printf("\nEndere�o da vari�vel num: %p",&num);
    printf("\nEndere�o do ponteiro pnum: %p",pnum);


   return 0;
}

