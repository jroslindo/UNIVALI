//6 - Faça um programa que solicita ao usuário 16 valores reais e armazene em uma matriz 4x4. O programa deve somar os elementos de cada uma das linhas armazenando o resultado da soma em um vetor. A seguir, deve multiplicar cada elemento da matriz pela soma da sua respectiva linha. Exiba na tela a matriz resultante.

#include <stdio.h>

#define TAM 4

void preenche(float mat[][TAM]){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            printf("Digite um valor: ");
            scanf("%f",&mat[i][j]);
        }
    }
}

void atribVet(float mat[][TAM], float vet[]){
    int i,j;
    for (i = 0; i < TAM; i++){
        vet[i]=0;
        for (j = 0;j < TAM; j++){
            vet[i] += mat[i][j];
        }
    }
}

void multVet(float mat[][TAM], float vet[]){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
             mat[i][j] = mat[i][j] * vet[i];
        }
    }
}

void imprime(float mat[][TAM]){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            printf("\t%.2f",mat[i][j]);
        }
        printf("\t\n");
    }
    printf("\n");
}

int main()
{
    float mat[TAM][TAM], vet[TAM];

    preenche(mat);
    imprime(mat);

    atribVet(mat,vet);
    multVet(mat,vet);
    imprime(mat);

    return 0;
}

