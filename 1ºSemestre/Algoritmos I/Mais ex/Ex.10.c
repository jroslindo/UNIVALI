//10.	Faça uma função/procedimento que solicita o peso de 25 pessoas e atribui o maior e o menor peso dentre os digitados. Exiba o maior e o menor peso no programa principal.

#include <stdio.h>

void peso(float numero, float *maior, float *menor){
    int i;
    for(i=1; i <= 25; i++){ //número de pessoas
        printf("Digite o %do. peso: ",i);
        scanf("%f",&numero);
        if (i==1){
            *maior = numero;
            *menor = numero;
        }
        if (numero > *maior)
            *maior = numero;
        if (numero < *menor)
            *menor = numero;
    }
}

int main() {
    float numero, maior, menor;

    peso(numero, &maior, &menor);
    printf("\nO maior peso digitado foi: %.2f",maior);
    printf("\nO menor peso digitado foi: %.2f",menor);

    return 0;
}

