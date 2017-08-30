//Faça um programa que solicita ao usuário dois números inteiros e armazena nas variáveis A e B.
////A seguir (utilizando apenas atribuições entre variáveis) troque os seus conteúdos fazendo com que o valor que está em A passe para B e vice-versa.
////Ao final escreva os valores que ficaram armazenados nas variáveis A e B respectivamente.

#include <stdio.h>

int main()
{
    int var_a, var_b, var_temporaria;
    scanf("%d%d",&var_a,&var_b);
    var_temporaria = var_a;
    var_a = var_b;
    var_b = var_temporaria;
    printf("%d%d",var_a,var_b);

    return 0;
}

