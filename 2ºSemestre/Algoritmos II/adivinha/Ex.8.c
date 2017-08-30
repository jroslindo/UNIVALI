//8 - Utilizando alocação dinâmica, faça um programa que preenche uma matriz de NXN (onde N é um valor fornecido pelo usuário) com números reais. O programa deve exibir qual a posição (linha e coluna) do elemento minimax, ou seja, o menor valor que esteja na linha em que se encontra o maior valor da matriz.

#include <stdio.h>


void preenche(float **mat, int TAM){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            printf("Digite um valor: ");
            scanf("%f",&mat[i][j]);
        }
    }
}

void imprime(float **mat, int TAM){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            printf("\t%.2f",mat[i][j]);
        }
        printf("\t\n");
    }
    printf("\n");
}

void minimax(float **mat, int TAM, int *indi, int *indj){
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
    int indi=0, indj=0, TAM, i;

    printf("Tamanho da matriz quadrada (N): ");
    scanf("%d",&TAM);

    float **mat = malloc(TAM * sizeof(float *));
    for (i=0; i<TAM; i++)
        mat[i] = malloc(TAM * sizeof(float));

    preenche(mat,TAM);

    imprime(mat,TAM);

    minimax(mat,TAM,&indi,&indj);

    printf("Valor minimax: %.2f",mat[indi][indj]);


    return 0;
}



