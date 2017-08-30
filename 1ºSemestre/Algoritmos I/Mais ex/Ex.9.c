//9.	Faça uma funcão que recebe um número inteiro por parâmetro, calcule e retorne o fatorial deste número.

#include <stdio.h>
#include <locale.h>

void leitura(int *numero){
    printf("Digite um número inteiro: ");
	scanf("%d",numero);
}

int fatorial(int numero){
    int fatorial;
    for(fatorial=1; numero > 1; numero--){
        fatorial *= numero;
    }
    return fatorial;
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    int numero;

    leitura(&numero);

    printf("O fatorial do número digitado é %d",fatorial(numero));

    return 0;
}

