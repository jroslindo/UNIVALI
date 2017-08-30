/*5)O algoritmo abaixo possui alguns problemas. Olhe com atenção o programa e corrija-o.
Considere que se o usuário digitar 2 para a variável v, e 3 para a variável x, os resultados a serem exibidos são 2, 3, 5, 2, 2, 2, 2, 2, 2, 2, 8, 8
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

    p3 = malloc(sizeof(int)); //malloc(sizeof(int)); //não definido tamanho da memória a ser alocada
    p1 = &v;
    p2 = &x;
    *p3 = v + *p2;
    printf("\n\n%d",*p1);
    printf("\n%d",*p2);
    printf("\n%d",*p3);
    free(p3);
    *p3 = p1; //p3 = p1; //atribuição do endereço de p1 a p3 e não o endereço de memória de p1 a *p3
    //*p2 = *p1; //adicionada para atribuir o valor de *p1 a *p2 e exibir as saídas corretas
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

    p3 = malloc(sizeof(int)); //Linha corrigida: malloc(); //não definido tamanho da memória a ser alocada
    p1 = &v;
    p2 = &x;
    *p3 = v + *p2;
    printf("\n\n%d",*p1);
    printf("\n%d",*p2);
    printf("\n%d",*p3);
    free(p3);
    p3 = p1; //Linha corrigida: *p3 = p1 //atribuição do endereço de p1 a p3 e não o endereço de memória de p1 a *p3
    *p2 = *p1; //Linha adicionada: Adicionada para atribuir o valor de *p1 a *p2 para exibir as saídas corretas de acorco com o restante do código
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



