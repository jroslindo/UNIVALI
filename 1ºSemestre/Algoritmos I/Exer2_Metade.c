//Fa�a um programa que solicita ao usu�rio um n�mero real e exibe na tela a metade do n�mero digitado

#include <stdio.h>

int main()
{
    float valor_digitado;

    scanf("%f",&valor_digitado);
    valor_digitado = valor_digitado/2;
    printf("%f",valor_digitado);

    return 0;
}

