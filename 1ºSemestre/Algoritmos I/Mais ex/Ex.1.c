//1.	Faça um programa que possua uma função que receba um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar um se for positivo e zero se for negativo. Deve existir também um procedimento que faça a leitura.

#include <stdio.h>
#include <locale.h>

void leitura(int *numero){
    printf("Digite um número inteiro: ");
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
        printf("Ele é positivo");
    else
        printf("Ele é negativo");
}


