
//João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça um algoritmo que calcule e mostre quanto restará do salário do João.

#include <stdio.h>

int main(){

    float salario=1200, C1=200, C2=120, multa=2;
    salario = salario - (C1 + multa / 100 * C1) - (C2 + multa / 100 * C2); //salario = salario - C1 * 1.02 - C2 * 1.02; //873.60
    printf("%.2f",salario);

    return 0;
}

