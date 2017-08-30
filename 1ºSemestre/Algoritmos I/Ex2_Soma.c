//Escreva um programa que receba 3 valores digitados pelo usuário e exiba a soma destes valores

#include <stdio.h>

int main()
{
    int valor1, valor2, valor3, soma;

    scanf("%d",&valor1);
    scanf("%d",&valor2);
    scanf("%d",&valor3);

    soma = valor1+valor2+valor3;

    printf("%d",soma);

    return 0;
}

