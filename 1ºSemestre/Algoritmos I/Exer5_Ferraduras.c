//Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.

#include <stdio.h>

int main()
{
    int qtd_cavalos, qtd_ferraduras;
    scanf("%d",&qtd_cavalos);
    qtd_ferraduras = qtd_cavalos * 4;
    printf("%d",qtd_ferraduras);

    return 0;
}

