//5 - Utilizando alocação dinâmica e aritmética de ponteiros, faça um programa que manipula uma matriz quadrada NxN (onde N é um valor fornecido pelo usuário), somando os valores que não estão nem na diagonal principal nem na diagonal secundaria.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche(int **mat, int TAM){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
                *(*(mat+i)+j) = rand()%9+1;
        }
    }
}

void imprime(int **mat, int TAM){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            printf("\t%d",*(*(mat+i)+j));
        }
        printf("\t\n");
    }
    printf("\n");
}

int soma(int **mat, int TAM){
    int i,j,soma=0;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
                if (i != j && i+j != TAM-1)
                    soma += *(*(mat+i)+j);
        }
    }
    return soma;
}

int main()
{
    srand(time(NULL));

    int TAM, i;
    printf("Tamanho da matriz quadrada (N): ");
    scanf("%d",&TAM);

    int **mat = malloc(TAM * sizeof(int *));
    for (i=0; i<TAM; i++)
        *(mat+i) = malloc(TAM * sizeof(int));

    preenche(mat,TAM);
    imprime(mat,TAM);

    printf("Soma de valores da matriz: %d\n",soma(mat,TAM));

    for (i=0; i<TAM; i++)
       free(*(mat+i));
    free(mat);

    return 0;
}

