/*7) Execute o programa abaixo e informe os valores e o que cada uma das linhas est� fazendo.*/

#include <stdio.h>

int main() {
    int i=5, *p, **l;; //declarado vari�vel inteira i, um ponteiro *p e um ponteiro de ponteiros **l
    p = &i; //atribu�do o endere�o de i ao ponteiro *p
    l = &p; //atribu�do o endere�o do ponteiro *p ao ponteiro de ponteiros **l
    printf("i .......: %d \n", i); //exibido valor da vari�vel i
    printf("p = &i \n"); //exibida apenas uma mensagem "p = &i"
    printf("&i ......: %x \n", &i); //exibido o endere�o de i
    printf("p .......: %x \n", p); //exibido o endere�o do ponteiro p
    printf("*p+2 ....: %d \n", *p+2);//Adicionado valor 2 ao valor onde p aponta (i) e exibido
    printf("&p ......: %x \n", &p); //exibido o endere�o do ponteiro *p
    printf("*&p .....: %d \n", *&p); //exibida o valor contido no endere�o do ponteiro p
    printf("**&p ....: %d \n", **&p); //exibe o ponteiro que aponta para o valor contido no endere�o do ponteiro p (i)
    printf("3**p ....: %d \n", 3**p); //exibido o valor contido no endere�o onde aponta ponteiro p multiplicado por 3
    printf("**&p+4 ..: %d \n", **&p+4); //exibe o ponteiro que aponta para o valor contido no endere�o do ponteiro p (i) somando 4
    printf("l .......: %x \n", l); //exibido o endere�o de l (&p)
    printf("*l ......: %x \n", *l); //exibido o endere�o de p e i, contido em *l

    return 0;
}


