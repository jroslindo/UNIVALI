//1 - Utilizando alocação dinâmica, faça um programa que preencha uma matriz de NXN (onde N é um valor fornecido pelo usuário) com o elemento um em todas as posições.

#include <stdio.h>

void imprime(int **mat, int LIN, int COL){
    int i,j;
    for (i = 0; i < LIN; i++){
        for (j = 0;j < COL; j++){
            printf("\t%d",mat[i][j]);
        }
        printf("\t\n");
    }
}

int main()
{
    int LIN, COL, i, j;
    printf("Tamanho da matriz (MxN): ");
    scanf("%d%d",&LIN, &COL);

    int **mat = malloc(LIN * sizeof(int *));
    mat[0] = malloc((LIN * COL) * sizeof(int));
    for (i=1; i<LIN; i++)
        mat[i] = mat[i-1]+COL;

    for (i = 0; i < LIN; i++){
        for (j = 0;j < COL; j++){
            mat[i][j] = 1;
        }
    }

    imprime(mat,LIN,COL);

    free(mat[0]);
    free(mat);

    return 0;
}

