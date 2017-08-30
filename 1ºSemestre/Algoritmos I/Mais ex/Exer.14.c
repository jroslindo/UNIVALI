//14.	Faça um programa que solicita o peso de 25 pessoas e exibe qual o maior peso e qual o menor peso dentre os digitados.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    float numero, maior, menor;

    int i;
    for(i=1; i <= 25; i++){ //número de pessoas
        printf("Digite o %do. peso: ",i);
        scanf("%f",&numero);
        if (i==1){
            maior = numero;
            menor = numero;
        }
        if (numero > maior)
            maior = numero;
        if (numero < menor)
            menor = numero;
    }
    printf("\nO maior peso digitado foi: %.2f",maior);
    printf("\nO menor peso digitado foi: %.2f",menor);

    return 0;
}

