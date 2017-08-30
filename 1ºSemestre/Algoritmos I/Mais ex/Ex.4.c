/*
4.	Faça um procedimento que recebe um número inteiro por parâmetro e exibe uma mensagem indicando se ele é positivo, negativo ou zero. Saídas:
•	Caso ele seja positivo = “Ele é positivo”;
•	Caso ele seja negativo = “Ele é negativo”;
•	Caso ele seja igual a zero = “Ele é igual a zero”.
*/

#include <stdio.h>
#include <locale.h>

void leitura(int *numero){
    printf("Digite um número inteiro: ");
	scanf("%d",numero);
}

void verPositivo(int numero){
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

int main(){
    setlocale(LC_ALL,"Portuguese");

    int numero;

	leitura(&numero);

	verPositivo(numero);

	return 0;
}

