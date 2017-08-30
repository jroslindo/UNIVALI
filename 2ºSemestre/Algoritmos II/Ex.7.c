//7 - Faça um programa que preenche duas matrizes, uma M (4X6) e outra N (6X4). A seguir o programa deverá criar uma nova matriz que seja o produto matricial de M por N.

#include <stdio.h>

#define MAX 6 //valor maximo para utilização nas funções/procedimentos
#define IND1 4 //valor de indice linhas/coluna
#define IND2 6 //valor de indice linhas/coluna


void preenche(int mat[][MAX],int indi, int indj){
    int i,j;
    for (i = 0; i < indi; i++){
        for (j = 0;j < indj; j++){
            printf("Digite um valor: ");
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nPreenchimento realizado para a matriz\n\n");
}

void prodMat(int M[][MAX], int N[][MAX], int R[][MAX]){ //(alterar para manipular)
    int i,j,k;
    for(i=0; i<IND1; i++){ //linhas da matriz M
        for(j=0; j<IND1; j++){ //colunas da matriz N
            for(k=0; k<IND2; k++){ //índice que deve ser percorrido para caluclar todos os itens
                R[i][j] += M[i][k] * N[k][j];
            }
        }
    }
}

void imprime(int mat[][MAX], int indi, int indj){
    int i,j;
    for (i = 0; i < indi; i++){
        for (j = 0;j < indj; j++){
            printf("\t%d",mat[i][j]);
        }
        printf("\t\n");
    }
    printf("\n");
}

int main()
{
    int M[IND1][MAX], N[IND2][MAX], R[IND1][MAX]={};

    preenche(M,IND1,IND2); //utiliza os índices correspondentes a matriz M (alterar para manipular)
    preenche(N,IND2,IND1); //utiliza os índices correspondentes a matriz N (alterar para manipular)
    imprime(M,IND1,IND2);  //utiliza os índices correspondentes a matriz M (alterar para manipular)
    imprime(N,IND2,IND1);  //utiliza os índices correspondentes a matriz N (alterar para manipular)



    prodMat(M,N,R);
    imprime(R,IND1,IND1); //(alterar para manipular)

    return 0;
}


