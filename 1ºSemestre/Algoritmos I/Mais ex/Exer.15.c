//15.	Fa�a um programa que solicita 20 valores inteiros e exiba quantos s�o pares e quantos s�o �mpares.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero, par=0, impar=0;

    int i;
    for(i=1; i <= 20; i++){ //n�mero de valores
        printf("Digite o %do. numero: ",i);
        scanf("%d",&numero);
        if (numero % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }
    printf("\nO total de n�meros pares foi de: %d",par);
    printf("\nO total de n�meros �mpares foi de: %d",impar);

    return 0;
}

