//3.	Faça um programa que exiba na tela os números inteiros de 100 até 1.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero;
    for (numero=100; numero>=1; numero--){
        printf("\n%d",numero);
    }

    return 0;
}

