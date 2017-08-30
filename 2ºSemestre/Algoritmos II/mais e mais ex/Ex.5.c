/*5)O algoritmo abaixo possui alguns problemas. Olhe com aten��o o programa e corrija-o.
Considere que se o usu�rio digitar 2 para a vari�vel v, e 3 para a vari�vel x, os resultados a serem exibidos s�o 2, 3, 5, 2, 2, 2, 2, 2, 2, 2, 8, 8
*/
/*
//Algoritmo Original:

#include <stdio.h>

int main() {

    int *p1, *p2, *p3, v, x;

    printf("V ...: ");
    scanf("%d",&v);
    printf("X ...: ");
    scanf("%d",&x);

    p3 = malloc(sizeof(int)); //malloc(sizeof(int)); //n�o definido tamanho da mem�ria a ser alocada
    p1 = &v;
    p2 = &x;
    *p3 = v + *p2;
    printf("\n\n%d",*p1);
    printf("\n%d",*p2);
    printf("\n%d",*p3);
    free(p3);
    *p3 = p1; //p3 = p1; //atribui��o do endere�o de p1 a p3 e n�o o endere�o de mem�ria de p1 a *p3
    //*p2 = *p1; //adicionada para atribuir o valor de *p1 a *p2 e exibir as sa�das corretas
    printf("\n\n%d",*p1);
    printf("\n%d",*p2);
    printf("\n%d",*p3);
    p3 = p2;
    printf("\n\n%d",*p1);
    printf("\n%d",*p2);
    printf("\n%d",*p3);
    *p3 = 8;
    printf("\n\n%d",*p1);
    printf("\n%d",*p2);
    printf("\n%d",*p3);
    return 0;
}

*/



//Algotirmo Corrigido
#include <stdio.h>

int main() {

    int *p1, *p2, *p3, v, x;

    printf("V ...: ");
    scanf("%d",&v);
    printf("X ...: ");
    scanf("%d",&x);

    p3 = malloc(sizeof(int)); //Linha corrigida: malloc(); //n�o definido tamanho da mem�ria a ser alocada
    p1 = &v;
    p2 = &x;
    *p3 = v + *p2;
    printf("\n\n%d",*p1);
    printf("\n%d",*p2);
    printf("\n%d",*p3);
    free(p3);
    p3 = p1; //Linha corrigida: *p3 = p1 //atribui��o do endere�o de p1 a p3 e n�o o endere�o de mem�ria de p1 a *p3
    *p2 = *p1; //Linha adicionada: Adicionada para atribuir o valor de *p1 a *p2 para exibir as sa�das corretas de acorco com o restante do c�digo
    printf("\n\n%d",*p1);
    printf("\n%d",*p2);
    printf("\n%d",*p3);
    p3 = p2;
    printf("\n\n%d",*p1);
    printf("\n%d",*p2);
    printf("\n%d",*p3);
    *p3 = 8;
    printf("\n\n%d",*p1);
    printf("\n%d",*p2);
    printf("\n%d",*p3);
    return 0;
}



