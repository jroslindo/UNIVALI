//Fa�a um programa que solicita ao usu�rio dois n�meros inteiros e armazena nas vari�veis A e B.
////A seguir (utilizando apenas atribui��es entre vari�veis) troque os seus conte�dos fazendo com que o valor que est� em A passe para B e vice-versa.
////Ao final escreva os valores que ficaram armazenados nas vari�veis A e B respectivamente.

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

