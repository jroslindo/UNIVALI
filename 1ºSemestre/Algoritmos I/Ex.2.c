/*
2.	Fa�a um programa que solicita ao usu�rio um valor inteiro e exibe uma mensagem informando se o n�mero � par ou �mpar. Sa�das:
�	Pedido ao usu�rio = "Entre com um numero inteiro:";
�	Caso verdadeiro = �O n�mero � par�;
�	Caso falso = �O n�mero � �mpar�.
*/

#include <stdio.h>

int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf("%d",&numero);

	if(numero % 2 == 0){
        printf("\nO n�mero � par");
	}else{
        printf("\nO n�mero � �mpar");
	}

	return 0;
}

