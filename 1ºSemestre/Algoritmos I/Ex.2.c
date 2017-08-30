/*
2.	Faça um programa que solicita ao usuário um valor inteiro e exibe uma mensagem informando se o número é par ou ímpar. Saídas:
•	Pedido ao usuário = "Entre com um numero inteiro:";
•	Caso verdadeiro = “O número é par”;
•	Caso falso = “O número é ímpar”.
*/

#include <stdio.h>

int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf("%d",&numero);

	if(numero % 2 == 0){
        printf("\nO número é par");
	}else{
        printf("\nO número é ímpar");
	}

	return 0;
}

