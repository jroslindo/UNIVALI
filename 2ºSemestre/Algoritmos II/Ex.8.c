//8 - Faça um programa que preenche uma matriz de 4X4 com números reais. O programa deve exibir qual a posição (linha e coluna) do elemento minimax, ou seja, o menor valor que esteja na linha em que se encontra o maior valor da matriz.

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

void minimax(float mat[][TAM], int *indi, int *indj){
    int i,j;
    float aux;

    aux = mat[0][0];
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            if (aux < mat[i][j]){
                aux = mat[i][j];
                *indi = i;
            }
        }
    }
    for (i = 0; i < TAM; i++){
         if (aux > mat[*indi][i]){
                aux = mat[*indi][i];
                *indj = i;
        }
    }

}

int main()
{
    int indi=0, indj=0;
    float mat[TAM][TAM];

    preenche(mat);

    imprime(mat);

    minimax(mat,&indi,&indj);

    printf("Valor minimax: mat[%d][%d] %.2f",indi+1,indj+1,mat[indi][indj]);


    return 0;
}



