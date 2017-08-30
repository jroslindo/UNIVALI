///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4-Declare um vetor de 15 inteiros, leia um valor para cada posição e no final mostre os elementos deste vetor em posição inversa ao que foram atribuídos//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <locale.h>

#define TAM 15

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vet[TAM], i;
    for (i=0; i<TAM; i++){
        printf("Digite um valor: ");
		scanf("%d",&vet[i]);
    }
    printf("\nInversa: ");
    for (i=TAM-1; i>=0; i--)
        printf("%d|",vet[i]);
    return 0;
}

