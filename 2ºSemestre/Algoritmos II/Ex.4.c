//4 - Faça um programa que preencha uma matriz de 5X5 com o elemento um em todas as posições em que o índice de linha tem valor maior que o da coluna.

#include <stdio.h>

#define TAM 5



void preenche(int mat[][TAM]){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            if (i > j)
                mat[i][j] = 1;
        }
    }
}

void imprime(int mat[][TAM]){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            printf("\t%d",mat[i][j]);
        }
        printf("\t\n");
    }
    printf("\n");
}

int main()
{
    int mat[TAM][TAM]={};

    preenche(mat);

    imprime(mat);

    return 0;
}

