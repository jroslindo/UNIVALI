/*
4.	Fa�a um procedimento que recebe um n�mero inteiro por par�metro e exibe uma mensagem indicando se ele � positivo, negativo ou zero. Sa�das:
�	Caso ele seja positivo = �Ele � positivo�;
�	Caso ele seja negativo = �Ele � negativo�;
�	Caso ele seja igual a zero = �Ele � igual a zero�.
*/

#include <stdio.h>
#include <locale.h>

void leitura(int *numero){
    printf("Digite um n�mero inteiro: ");
	scanf("%d",numero);
}

void verPositivo(int numero){
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

int main(){
    setlocale(LC_ALL,"Portuguese");

    int numero;

	leitura(&numero);

	verPositivo(numero);

	return 0;
}

