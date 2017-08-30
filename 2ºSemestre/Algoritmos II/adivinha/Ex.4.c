//4 - Utilizando alocação dinâmica e aritmética de ponteiros, faça um programa que preencha uma matriz de NXN (onde N é um valor fornecido pelo usuário) com o elemento um em todas as posições em que o índice de linha tem valor maior que o da coluna.

#include <stdio.h>

void preenche_1(int **mat, int TAM){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            if (i > j)
                *(*(mat+i)+j) = 1;
            else
                *(*(mat+i)+j) = 0;
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

int main()
{
    int TAM, i;
    printf("Tamanho da matriz quadrada (N): ");
    scanf("%d",&TAM);

    int **mat = malloc(TAM * sizeof(int *));
    for (i=0; i<TAM; i++)
        *(mat+i) = malloc(TAM * sizeof(int));

    preenche_1(mat,TAM);

    imprime(mat,TAM);

    for (i=0; i<TAM; i++)
       free(*(mat+i));
    free(mat);

    return 0;
}

