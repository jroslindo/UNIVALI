//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//1 - Utilizando alocação dinâmica, declare um vetor de N inteiros (onde N é um valor fornecido pelo usuário), leia um valor para cada posição e no final mostre a média, o menor e o maior valor contidos no vetor.//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int mai=0,men=0,i,TAM;
    float tmed=0,med =0;

    printf("Tamanho: ");
    scanf("%d",&TAM);

    int *vet;
    vet = malloc(TAM * sizeof(int));

    for (i=0; i<TAM; i++){
        printf("Digite um valor: ");
        scanf("%d",&vet[i]);
    }
    mai=vet[0];
    men=vet[0];
    for (i=0; i<TAM; i++){
        tmed+=vet[i];
            if (vet[i] > mai)
                mai=vet[i];
            else
                if (vet[i] < men)
                    men=vet[i];
    }
    med = tmed/TAM;
    free(vet);
    printf("\nA média é %.2f, o menor é %d e o maior é %d",med,men,mai);


    return 0;
}

