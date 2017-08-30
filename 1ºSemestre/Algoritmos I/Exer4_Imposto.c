//Leia o valor do produto e adicione mais 15% de imposto. Escreva o preço final do produto.

#include <stdio.h>

int main()
{
    float val_prod, preco_final, imposto;
    scanf("%f",&val_prod);
    preco_final = val_prod + 15.0 / 100 * val_prod;
    printf("%.2f",preco_final);

    return 0;
}

