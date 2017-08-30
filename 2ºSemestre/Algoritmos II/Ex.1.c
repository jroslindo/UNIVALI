//1 - Faça um programa que preencha uma matriz de 5X5 com o elemento um em todas as posições.

#include <stdio.h>

#define TAM 5

void imprime(int mat[][TAM]){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            printf("\t%d",mat[i][j]);
        }
        printf("\t\n");
    }
}

int main()
{
    int mat[TAM][TAM];

    int i,j;
    for (i = 0; i < TAM; i++){      //percorre as linhas
        for (j = 0;j < TAM; j++){   //percorre as colunas
            mat[i][j] = 1;
        }
    }

    imprime(mat);

    return 0;
}

