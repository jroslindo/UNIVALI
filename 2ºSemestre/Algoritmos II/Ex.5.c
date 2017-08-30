//5 - Faça um programa que manipula uma matriz quadrada de qualquer tamanho, somando os valores que não estão nem na diagonal principal nem na diagonal secundaria.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

void preenche(int mat[][TAM]){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
                mat[i][j] = rand()%9+1;
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

int soma(int mat[][TAM]){
    int i,j,soma=0;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
                if (i != j && i+j != TAM-1)
                    soma += mat[i][j];
        }
    }
    return soma;
}

int main()
{
    srand(time(NULL));

    int mat[TAM][TAM];

    preenche(mat);
    imprime(mat);

    printf("Soma de valores da matriz: %d\n",soma(mat));

    return 0;
}

