//5.	Fa�a um procedimento que exiba na tela a tabuada do n�mero n passado por par�metro. Sa�da: Exemplo para n=5 -> 5X1=5; 5X2=10; 5X3=15; ... ; 5X10=50.

#include <stdio.h>
#include <locale.h>

void leitura(int *n){
    printf("Digite um n�mero inteiro: ");
	scanf("%d",n);
}

void tabuada(int n){
    int operando, calculo;

    for (operando = 1; operando <= 10; operando++){
            calculo = n * operando;
            printf("\n%d x %d = %d",n,operando,calculo);
    }
}

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero;

	leitura(&numero);

	tabuada(numero);

	return 0;
}


