//9.	Fa�a uma func�o que recebe um n�mero inteiro por par�metro, calcule e retorne o fatorial deste n�mero.

#include <stdio.h>
#include <locale.h>

void leitura(int *numero){
    printf("Digite um n�mero inteiro: ");
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

    printf("O fatorial do n�mero digitado � %d",fatorial(numero));

    return 0;
}

