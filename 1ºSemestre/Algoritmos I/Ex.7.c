/*
7.	Fa�a um programa que solicita um n�mero inteiro e exibe uma mensagem indicando se ele � positivo, negativo ou zero. Sa�das:
�	Pedido ao usu�rio = "Digite um n�mero inteiro:";
�	Caso ele seja positivo = �Ele � positivo�;
�	Caso ele seja negativo = �Ele � negativo�;
�	Caso ele seja igual a zero = �Ele � igual a zero�.
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um n�mero inteiro: ");
	scanf("%d",&numero);

    if(numero != 0){
        if(numero > 0){
            printf("Ele � positivo");
        } else {
            printf("Ele � negativo");
        }
    } else {
        printf("Ele � igual a zero");
    }
}

