//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//1 - Declare um vetor de 10 inteiros, leia um valor para cada posição e no final mostre a média, o menor e o maior valor contidos no vetor.//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include <stdio.h>
#include <locale.h>

#define TAM 10

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vet[TAM],mai,men,i;
    float tmed=0,med=0;

    for (i=0; i<TAM; i++){
        printf("Digite um valor: ");
        scanf("%d",&vet[i]);
    }
    mai=vet[0];
    men=vet[0];
    tmed=vet[0];
    for (i=1; i<TAM; i++){
            tmed+=vet[i];
            if (vet[i] > mai)
                mai=vet[i];
            else
                if (vet[i] < men)
                    men=vet[i];
    }
    med = tmed/TAM;
    printf("\nA média é %.2f, o menor é %d e o maior é %d",med,men,mai);


    return 0;
}
*/

