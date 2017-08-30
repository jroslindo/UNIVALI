/*
2.	Faça um procedimento que recebe um número inteiro por parâmetro e exibe uma mensagem informando se o número é par ou ímpar. Saídas:
•	Caso verdadeiro = “O número é par”;
•	Caso falso = “O número é ímpar”.
*/

#include <stdio.h>
#include <locale.h>

void leitura(int *numero); //Protótipo da função

void verificaPI(int numero); //Protótipo da função

int main(){
    setlocale(LC_ALL,"Portuguese");

	int numero;

	leitura(&numero);

	verificaPI(numero);

	return 0;
}

void leitura(int *numero){
    printf("Digite um número inteiro: ");
	scanf("%d",numero);
}

void verificaPI(int numero){
    if(numero % 2 == 0)
        printf("\nO número é par");
	else
        printf("\nO número é ímpar");
}


