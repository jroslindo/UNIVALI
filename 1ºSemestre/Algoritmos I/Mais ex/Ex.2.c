/*
2.	Fa�a um procedimento que recebe um n�mero inteiro por par�metro e exibe uma mensagem informando se o n�mero � par ou �mpar. Sa�das:
�	Caso verdadeiro = �O n�mero � par�;
�	Caso falso = �O n�mero � �mpar�.
*/

#include <stdio.h>
#include <locale.h>

void leitura(int *numero); //Prot�tipo da fun��o

void verificaPI(int numero); //Prot�tipo da fun��o

int main(){
    setlocale(LC_ALL,"Portuguese");

	int numero;

	leitura(&numero);

	verificaPI(numero);

	return 0;
}

void leitura(int *numero){
    printf("Digite um n�mero inteiro: ");
	scanf("%d",numero);
}

void verificaPI(int numero){
    if(numero % 2 == 0)
        printf("\nO n�mero � par");
	else
        printf("\nO n�mero � �mpar");
}


