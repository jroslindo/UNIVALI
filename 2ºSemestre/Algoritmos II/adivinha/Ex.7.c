//7 - Utilizando alocação dinâmica, faça um programa que preenche duas matrizes, uma M (L1XC1) e outra N (L2XC2) (onde L1, C1,L2 e C2 são valores fornecidos pelo usuário). A seguir o programa deverá criar uma nova matriz R que seja o produto matricial de M por N (faça a consistência)

#include <stdio.h>

void preenche(int **mat,int indi, int indj){
    int i,j;
    for (i = 0; i < indi; i++){
        for (j = 0;j < indj; j++){
            printf("Digite um valor: ");
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nPreenchimento realizado para a matriz\n\n");
}

void prodMat(int **M, int **N, int **R, int indi, int indj, int indk){
    int i,j,k;
    for(i=0; i<indi; i++){ //linhas da matriz M
        for(j=0; j<indj; j++){ //colunas da matriz N.
            R[i][j]=0;
            for(k=0; k<indk; k++){ //índice que deve ser percorrido para caluclar todos os itens
                R[i][j] += M[i][k] * N[k][j];
            }
        }
    }
}

void imprime(int **mat, int indi, int indj){
    int i,j;
    for (i = 0; i < indi; i++){
        for (j = 0;j < indj; j++){
            printf("\t%d",mat[i][j]);
        }
        printf("\t\n");
    }
    printf("\n");
}

int main(){
    int LM1, CM1, LM2, CM2, ind1,i;

    printf("Tamanho da matriz 1 (L1xC1): ");
    scanf("%d%d",&LM1,&CM1);

    printf("Tamanho da matriz 2 (L2xC2): ");
    scanf("%d%d",&LM2,&CM2);

  if (CM1 == LM2){
    int **M = malloc(LM1 * sizeof(int *));
    for (i=0; i<LM1; i++)
        *(M+i) = malloc(CM1 * sizeof(int));

    int **N = malloc(LM2 * sizeof(int *));
    for (i=0; i<LM2; i++)
        *(N+i) = malloc(CM2 * sizeof(int));

    int **R = malloc(LM1 * sizeof(int *));
    for (i=0; i<LM1; i++)
        *(R+i) = malloc(CM2 * sizeof(int));

    preenche(M,LM1,CM1);
    preenche(N,LM2,CM2);
    imprime(M,LM1,CM1);
    imprime(N,LM2,CM2);

    prodMat(M,N,R,LM1,CM2,LM2); //Pode receber tanto CM1 quanto LM2
    imprime(R,LM1,CM2);
  }else{
    printf("O produto matricial não pode ser realizado");
  }

    return 0;
}



