//4.	Fa�a um programa que exiba na tela os n�meros inteiros de 50 at� 200.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero;
    for (numero=50; numero<=200; numero++){
        printf("\n%d",numero);
    }

    return 0;
}

