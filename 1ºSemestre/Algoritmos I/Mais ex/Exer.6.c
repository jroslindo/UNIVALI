//6.	Faça um programa que solicita ao usuário dois valores inteiros e positivos que serão a base e o expoente. O programa deve usar laço de repetição para calcular e escrever o resultado da base elevado ao expoente (potencia).

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int base, exp, pot;

    printf("Digite os valores da base e expoente: ");
    scanf("%d%d",&base,&exp);

    pot = base;
    if (exp == 0)
        pot =1;

    int i;
    for (i=1; i<exp; i++){
        pot = base * pot;
    }
    printf("\n%d",pot);

    return 0;
}

