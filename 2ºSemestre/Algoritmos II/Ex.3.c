//3 - Faça um programa que solicita ao usuário 25 valores reais e armazene em uma matriz 5x5. A seguir troque todos os elementos da matriz que sejam maiores do que 100 pelo valor zero. Exiba a matriz original e alterada.

#include <stdio.h>

#define TAM 3


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
            printf("\t%.1f",mat[i][j]);
        }
        printf("\t\n");
    }
    printf("\n");
}

void troca100(float mat[][TAM]){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            if (mat[i][j] > 100)
                mat[i][j] = 0;
        }
    }
}


int main()
{
    float mat[TAM][TAM];

    preenche(mat);

    imprime(mat);

    troca100(mat);

    imprime(mat);

    return 0;
}


