//2.	Faça um programa que exiba na tela a tabuada do número 5 no seguinte formato: 5X1=5; 5X2=10; 5X3=15; ... ; 5X10=50.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int operando, calculo;

    for (operando = 1; operando <= 10; operando++){
            calculo = 5 * operando;
            printf("\n5 x %d = %d",operando,calculo);
    }

    return 0;
}

