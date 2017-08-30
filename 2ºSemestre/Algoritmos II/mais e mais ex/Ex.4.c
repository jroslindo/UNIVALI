/*4) Analise o código abaixo em C, e informe qual das alternativas é falsa.
    int *pti;
    int i = 10;
    pti = &i;
        a) pti armazena o endereço de i.
        b) *pti é igual a 10.
        c) Ao se executar *pti = 20; i passará a ter o valor 20.
        d) Ao se alterar o valor de i, *pti será modificado.
        e) pti é igual a 10.

*/

#include <stdio.h>
int main() {
    int *pti;
    int i = 10;

    pti = &i; //a) pti armazena o endereço de i.

    printf("\n%d",*pti); //b) *pti é igual a 10.

    *pti = 20; //c) Ao se executar *pti = 20; i passará a ter o valor 20.
    printf("\n%d",*pti);

    i=7; //d) Ao se alterar o valor de i, *pti será modificado.
    printf("\n%d",*pti);

    i=10; //Retornando i ao valor original
    printf("\n%d",pti); //e) pti é igual a 10. ---------->Errado pti = posição da memória onde está armazenado i<----------

   return 0;
}

