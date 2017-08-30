///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//8 - Utilizando alocação dinâmica e aritmética de ponteiros, leia dois vetores A e B com N e M elementos respectivamente (onde N e M são valores fornecido pelo usuário). Construa um terceiro vetor C, com todos os elemento de A, seguidos de todos os elementos de B.//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <locale.h>

void preenche(int *vet, int N){
    int i;
	for(i=0;i<N;i++){
        printf("Digite um valor: ");
		scanf("%d",(vet+i));
	}
}

void imprime(int *vet, int N){
    int i;
	for(i=0;i<N;i++)
		printf("%d | ",*(vet+i));
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int *a,*b,*c,i,TAM;

    printf("Tamanho: ");
    scanf("%d",&TAM);

    a = malloc(TAM * sizeof(int));
    b = malloc(TAM * sizeof(int));
    c = malloc(TAM*2 * sizeof(int));

    printf("Preencha o vetor A...\n");
    preenche(a,TAM);

    printf("\nAgora, preencha o vetor B...\n");
    preenche(b,TAM);

    for (i=0; i<TAM; i++){
        *(c+i) = *(a+i);
        *(c+i+TAM)=*(b+i);
    }

    printf("\nValores resultantes: | ");
    imprime(c,TAM*2);

    free(a);
    free(b);
    free(c);

    return 0;
}

