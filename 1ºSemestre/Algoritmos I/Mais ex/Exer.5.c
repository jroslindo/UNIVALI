//5.	Faça um programa que exiba na tela a soma dos números inteiros do intervalo [100, 200]. Exemplo: soma = 100 + 101 +102 + ... + 200.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero, soma=0;
    for (numero=100; numero<=200; numero++){
        soma = soma + numero;
    }
    printf("\n%d",soma);

    return 0;
}


