/*4) Analise o c�digo abaixo em C, e informe qual das alternativas � falsa.
    int *pti;
    int i = 10;
    pti = &i;
        a) pti armazena o endere�o de i.
        b) *pti � igual a 10.
        c) Ao se executar *pti = 20; i passar� a ter o valor 20.
        d) Ao se alterar o valor de i, *pti ser� modificado.
        e) pti � igual a 10.

*/

#include <stdio.h>
int main() {
    int *pti;
    int i = 10;

    pti = &i; //a) pti armazena o endere�o de i.

    printf("\n%d",*pti); //b) *pti � igual a 10.

    *pti = 20; //c) Ao se executar *pti = 20; i passar� a ter o valor 20.
    printf("\n%d",*pti);

    i=7; //d) Ao se alterar o valor de i, *pti ser� modificado.
    printf("\n%d",*pti);

    i=10; //Retornando i ao valor original
    printf("\n%d",pti); //e) pti � igual a 10. ---------->Errado pti = posi��o da mem�ria onde est� armazenado i<----------

   return 0;
}

