//1.	Fa�a um programa que possua uma fun��o que receba um valor inteiro e verifica se o valor � positivo ou negativo. A fun��o deve retornar um se for positivo e zero se for negativo. Deve existir tamb�m um procedimento que fa�a a leitura.

#include <stdio.h>
#include <locale.h>

void leitura(int *numero){
    printf("Digite um n�mero inteiro: ");
	scanf("%d",numero);
}

int verificaPositivo(int numero){
    if(numero >= 0)
        return 1;
    else
        return 0;
}


int main(){
    setlocale(LC_ALL,"Portuguese");

    int numero, positivo;

    leitura(&numero);


    positivo = verificaPositivo(numero);
    if(positivo)
        printf("Ele � positivo");
    else
        printf("Ele � negativo");
}


