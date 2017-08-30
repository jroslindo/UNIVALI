//11.	Faça um programa que solicita ao usuário o valor de N e calcule o valor de S na série S = 1/1 + 1/2 + 1/3 + ... + 1/N. Ao fim exiba o número real resultante da série.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int N;
    float S=0;

    printf("Digite um valor para N: ");
    scanf("%d",&N);

    int i;
    for(i=1; i <= N; i++){ //inicia em 1 para calcular a série corretamente
        S = S + 1.0/i;
    }
    printf("\n%.2f",S);

    return 0;
}

