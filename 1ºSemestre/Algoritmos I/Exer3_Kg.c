//Faça um programa que receba o valor do quilo de um produto e a quantidade de quilos do produto consumida calculando o valor final a ser pago.

#include <stdio.h>

int main()
{
    float val_kg_prod, qtd, val_pg;

    scanf("%f",&val_kg_prod);
    scanf("%f",&qtd);
    val_pg = qtd * val_kg_prod;
    printf("%f",val_pg);

    return 0;
}

