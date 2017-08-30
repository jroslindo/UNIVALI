/*2) Assumindo que o endereço de num foi atribuído a um ponteiro pnum, quais das seguintes expressões são verdadeiras?
  a) num = pnum; 	b) num = *pnum; 	c) pnum = *num; 	d) pnum = &num;
*/

#include <stdio.h>

int main() {

    int *pnum, num=5;

    pnum = &num;  //endereço de num foi atribuído a um ponteiro pnum

    printf("Valor de num: %d",num);
    printf("\nEndereço da variável num: %p",&num);
    printf("\nEndereço do ponteiro pnum: %p",pnum);


   return 0;
}

