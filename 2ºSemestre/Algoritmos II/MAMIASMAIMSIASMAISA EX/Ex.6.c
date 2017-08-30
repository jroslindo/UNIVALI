///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//6 - Utilizando alocação dinâmica e aritmética de ponteiros, declare um vetor de N inteiros (onde N é um valor fornecido pelo usuário), leia um valor para cada posição e no final mostre o calculo do fatorial do maior e do menor.//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <locale.h>

void preenche(int *vet, int N){
    int i;
	for(i=0;i<N;i++){
        printf("Digite um valor: ");
		scanf("%d",(vet+i));
	}
}

int fatorial(int n){
    int i, fat=1;
    for (i=1; i<=n; i++)
        fat*=i;
    return fat;
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int *vet,TAM,mai,men,fatma,fatme,i;

    printf("Tamanho: ");
    scanf("%d",&TAM);

    vet = malloc(TAM * sizeof(int));

	preenche(vet,TAM);

    mai=*vet;
    men=*vet;
    for (i=1; i<TAM; i++)
            if (*(vet+i)>mai)
                    mai=*(vet+i);
    for (i=1; i<TAM; i++)
            if (*(vet+i)<men)
                    men=*(vet+i);

    fatorial(men);

    printf("\nFatorial do maior: %d",fatorial(mai));
    printf("\nFatorial do menor: %d",fatorial(men));

    free(vet);

    return 0;
}

