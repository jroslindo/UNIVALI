////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4 - Utilizando alocação dinâmica e aritmética de ponteiros, declare um vetor de N inteiros (onde N é um valor fornecido pelo usuário). Crie uma função para ler um valor para cada posição e no final mostre quantos elementos possuem valor maior, menor e igual ao primeiro elemento do vetor.//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

	int *v,i,TAM;

	printf("Tamanho: ");
    scanf("%d",&TAM);

    v = malloc(TAM * sizeof(int));

	preenche(v,TAM);

	printf("\n");
	for(i=1;i<TAM;i++){
		if(*(v+i)>*v){
			printf("Maior %d\n",*(v+i));
        }else{
			if(*(v+i)==*v) {
				printf("Igual %d\n",*(v+i));
            }else{
				if(*(v+i)<*v) {
					printf("Menor %d\n",*(v+i));
				}
			}
		}
	}
	free(v);

	return 0;
}

