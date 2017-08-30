//6 - Utilizando alocação dinâmica e aritmética de ponteiros, faça um programa que solicita ao usuário N valores reais e armazene em uma matriz NxN (onde N é um valor fornecido pelo usuário). O programa deve somar os elementos de cada uma das linhas armazenando o resultado da soma em um vetor. A seguir, deve multiplicar cada elemento da matriz pela soma da sua respectiva linha. Exiba na tela a matriz resultante.

#include <stdio.h>

void preenche(float **mat, int TAM){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            printf("Digite um valor: ");
            scanf("%f",*(mat+i)+j);
        }
    }
}

void atribVet(float **mat, float *vet, int TAM){
    int i,j;
    for (i = 0; i < TAM; i++){
        *(vet+i)=0;
        for (j = 0;j < TAM; j++){
            *(vet+i) += *(*(mat+i)+j);
        }
    }
}

void multVet(float **mat, float *vet, int TAM){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
             *(*(mat+i)+j) *= *(vet+i);
        }
    }
}

void imprime(float **mat, int TAM){
    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            printf("\t%.2f",*(*(mat+i)+j));
        }
        printf("\t\n");
    }
    printf("\n");
}

int main(){
    int TAM, i;
    printf("Tamanho da matriz quadrada (N): ");
    scanf("%d",&TAM);

    float **mat = malloc(TAM * sizeof(float *));
    for (i=0; i<TAM; i++)
        *(mat+i) = malloc(TAM * sizeof(float));

    float *vet;
    vet = malloc(TAM * sizeof(float));

    preenche(mat,TAM);
    imprime(mat,TAM);

    atribVet(mat,vet,TAM);
    multVet(mat,vet,TAM);
    imprime(mat,TAM);

    for (i=0; i<TAM; i++)
       free(*(mat+i));
    free(mat);
    free(vet);


    return 0;
}

