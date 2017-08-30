//5) Faça uma função recursiva que recebe um vetor preenchido e a quantidade de posições deste vetor, e retorna a soma de todos os elementos do vetor.

#include <stdio.h>

#define TAM 10

int soma(int vet[TAM], int pos) {
    if (pos < 0) {
        return 0;
    }
    return vet[pos] + soma (vet,pos-1);
}

void preenche (int vet[]) {
    int i;
    for (i = 0; i < TAM; i++) {
        printf("Digite o %do. valor: ",i+1);
        scanf("%d",&vet[i]);
    }
}

int main() {
    int vet[TAM], n = TAM-1;
    preenche(vet);
    printf("%d",soma(vet,n));
    return 0;
}

