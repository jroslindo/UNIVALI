//13.	Faça um algoritmo que leia um conjunto de 20 números inteiros e indique, ao final, qual foi o menor valor digitado.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero, menor;

    int i;
    for(i=1; i <= 20; i++){
        printf("Digite o %do. numero: ",i);
        scanf("%d",&numero);
        if (i == 1)
            menor = numero;

        if (numero < menor)
            menor = numero;
    }
    printf("O menor número digitado foi: %d",menor);

    return 0;
}

