//2 - Fa�a um programa que preencha uma matriz de 5X5 com o elemento um em todas as posi��es em que o �ndice de linha tem valor igual ao da coluna.

#include <stdio.h>

#define TAM 5

void imprime(int mat[TAM][TAM]){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            printf("|%d",mat[i][j]);
        }
        printf("|\n");
    }
}

int main()
{
    int mat[TAM][TAM]={};

    int i,j;
    for (i = 0; i < TAM; i++){
            mat[i][i] = 1;
    }

    imprime(mat);

    return 0;
}

