//2 - Utilizando aloca��o din�mica e aritm�tica de ponteiros, fa�a um programa que preencha uma matriz de NXN (onde N � um valor fornecido pelo usu�rio) com o elemento um em todas as posi��es em que o �ndice de linha tem valor igual ao da coluna.

#include <stdio.h>

void imprime(int **mat, int TAM){
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
    int TAM, i, j;
    printf("Tamanho da matriz quadrada (N): ");
    scanf("%d",&TAM);

    int **mat = malloc(TAM * sizeof(int *));
    for (i=0; i<TAM; i++)
        mat[i] = malloc(TAM * sizeof(int));

    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            if (i != j)
                mat[i][j] = 0;
            else
                mat[i][j] = 1;
        }
    }

    imprime(mat,TAM);

    for (i=0; i<TAM; i++)
       free(mat[i]);
    free(mat);

    return 0;
}

