//Faça um programa que solicita ao usuário um número real e exibe na tela a metade do número digitado

#include <stdio.h>

int main()
{
    float valor_digitado;

    scanf("%f",&valor_digitado);
    valor_digitado = valor_digitado/2;
    printf("%f",valor_digitado);

    return 0;
}

