//3.	Fa�a um programa que exiba na tela os n�meros inteiros de 100 at� 1.

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

