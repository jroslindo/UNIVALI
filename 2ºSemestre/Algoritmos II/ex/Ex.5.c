/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//5-Declare um vetor de 10 inteiros, leia um valor para cada posição e no final mostre o calculo do fatorial do maior e do menor.//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <locale.h>

#define TAM 10

int fatorial(int n){
    int i, fat=1;
    for (i=1; i<=n; i++)
        fat*=i;
    return fat;
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vet[TAM],mai,men,fatma,fatme,i;

    for (i=0; i<TAM; i++){
            printf("Digite um número: ");
            scanf("%d",&vet[i]);
    }

    mai=vet[0];
    men=vet[0];
    for (i=1; i<TAM; i++)
            if (vet[i]>mai)
                    mai=vet[i];
    for (i=1; i<TAM; i++)
            if (vet[i]<men)
                    men=vet[i];

    printf("\nFatorial do maior: %d",fatorial(mai));
    printf("\nFatorial do menor: %d",fatorial(men));

    return 0;
}

