//1.	Fa�a um programa que exiba 30 vezes na tela a mensagem �N�o vou colar na prova�.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int i;
    for (i=1; i<=30; i++){
        printf("\nN�o vou colar na prova");
    }

    return 0;
}

