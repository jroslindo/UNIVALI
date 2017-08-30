//3 - Utilizando alocação dinâmica e aritmética de ponteiros, faça um programa que solicita ao usuário N*M valores reais e armazene em uma matriz NXM (onde N e M são valores fornecidos pelo usuário). A seguir troque todos os elementos da matriz que sejam maiores do que 100 pelo valor zero. Exiba a matriz original e alterada.

#include <stdio.h>

void preenche(float **mat, int LIN, int COL){
    int i,j;
    for (i = 0; i < LIN; i++){
        for (j = 0;j < COL; j++){
            printf("Digite um valor: ");
            scanf("%f",*(mat+i)+j);
        }
    }
}

void imprime(float **mat, int LIN, int COL){
    int i,j;
    for (i = 0; i < LIN; i++){
        for (j = 0;j < COL; j++){
            printf("\t%.1f",*(*(mat+i)+j));
        }
        printf("\t\n");
    }
    printf("\n");
}

void troca100(float **mat, int LIN, int COL){
    int i,j;
    for (i = 0; i < LIN; i++){
        for (j = 0;j < COL; j++){
            if (*(*(mat+i)+j) > 100)
                *(*(mat+i)+j) = 0;
        }
    }
}


int main()
{
    int LIN, COL, i, j;
    printf("Tamanho da matriz (MxN): ");
    scanf("%d%d",&LIN, &COL);

    float **mat = malloc(LIN * sizeof(float *));
    *mat = malloc((LIN * COL) * sizeof(float));
    for (i=1; i<LIN; i++)
        *(mat+i) = *(mat+i-1)+COL;

    preenche(mat,LIN,COL);

    imprime(mat,LIN,COL);

    troca100(mat,LIN,COL);

    imprime(mat,LIN,COL);

    free(*mat);
    free(mat);

    return 0;
}


