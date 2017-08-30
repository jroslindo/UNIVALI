/*
7.	Faça um programa que solicita um número inteiro e exibe uma mensagem indicando se ele é positivo, negativo ou zero. Saídas:
•	Pedido ao usuário = "Digite um número inteiro:";
•	Caso ele seja positivo = “Ele é positivo”;
•	Caso ele seja negativo = “Ele é negativo”;
•	Caso ele seja igual a zero = “Ele é igual a zero”.
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um número inteiro: ");
	scanf("%d",&numero);

    if(numero != 0){
        if(numero > 0){
            printf("Ele é positivo");
        } else {
            printf("Ele é negativo");
        }
    } else {
        printf("Ele é igual a zero");
    }
}

