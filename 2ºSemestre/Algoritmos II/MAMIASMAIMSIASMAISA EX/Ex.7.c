/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//7 - Utilizando alocação dinâmica e aritmética de ponteiros, leia dois vetores A e B com N elementos (onde N é um valor fornecido pelo usuário). Construa um terceiro vetor C, onde cada elemento é a subtração do elemento correspondente de a A com B.////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <locale.h>

void preenche(int *vet, int N){
    int i;
	for(i=0;i<N;i++){
        printf("Digite um valor: ");
		scanf("%d",(vet+i));
	}
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int *a,*b,*c,i,TAM;

    printf("Tamanho: ");
    scanf("%d",&TAM);

    a = malloc(TAM * sizeof(int));
    b = malloc(TAM * sizeof(int));
    c = malloc(TAM * sizeof(int));

    printf("Preencha o vetor A...\n");
    preenche(a,TAM);
    printf("\nAgora, preencha o vetor B...\n");
    preenche(b,TAM);

    printf("Valores resultantes: | ");
    for (i=0; i<TAM; i++){
        *(c+i) = *(a+i)-*(b+i);
        printf("%d | ",*(c+i));
    }

    free(a);
    free(b);
    free(c);

    return 0;
}

