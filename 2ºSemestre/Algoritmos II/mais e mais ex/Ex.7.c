/*7) Execute o programa abaixo e informe os valores e o que cada uma das linhas está fazendo.*/

#include <stdio.h>

int main() {
    int i=5, *p, **l;; //declarado variável inteira i, um ponteiro *p e um ponteiro de ponteiros **l
    p = &i; //atribuído o endereço de i ao ponteiro *p
    l = &p; //atribuído o endereço do ponteiro *p ao ponteiro de ponteiros **l
    printf("i .......: %d \n", i); //exibido valor da variável i
    printf("p = &i \n"); //exibida apenas uma mensagem "p = &i"
    printf("&i ......: %x \n", &i); //exibido o endereço de i
    printf("p .......: %x \n", p); //exibido o endereço do ponteiro p
    printf("*p+2 ....: %d \n", *p+2);//Adicionado valor 2 ao valor onde p aponta (i) e exibido
    printf("&p ......: %x \n", &p); //exibido o endereço do ponteiro *p
    printf("*&p .....: %d \n", *&p); //exibida o valor contido no endereço do ponteiro p
    printf("**&p ....: %d \n", **&p); //exibe o ponteiro que aponta para o valor contido no endereço do ponteiro p (i)
    printf("3**p ....: %d \n", 3**p); //exibido o valor contido no endereço onde aponta ponteiro p multiplicado por 3
    printf("**&p+4 ..: %d \n", **&p+4); //exibe o ponteiro que aponta para o valor contido no endereço do ponteiro p (i) somando 4
    printf("l .......: %x \n", l); //exibido o endereço de l (&p)
    printf("*l ......: %x \n", *l); //exibido o endereço de p e i, contido em *l

    return 0;
}


