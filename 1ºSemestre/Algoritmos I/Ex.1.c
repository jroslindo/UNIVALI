/*
1.	Fa�a um programa que solicita ao usu�rio um n�mero inteiro e exibe este na tela. Se o n�mero for negativo, antes de ser exibido, ele deve ser transformado no equivalente positivo.
*/

#include <stdio.h>
int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf("%d",&numero);

	if(numero < 0){
        numero = numero * -1;
	}

    printf("\nResultado: %d",numero);

	return 0;
}

