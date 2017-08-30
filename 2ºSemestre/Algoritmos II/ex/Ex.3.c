///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3 - Declare um vetor de 5 inteiros, leia um valor para cada posição e no final mostre quantos elementos possuem valor maior, menor e igual ao primeiro elemento do vetor/////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <locale.h>

#define TAM 5

int main(){
    setlocale(LC_ALL,"Portuguese");

	int v[TAM],i;
	for(i=0;i<TAM;i++){
        printf("Digite um valor: ");
		scanf("%d",&v[i]);
	}
	printf("\n");
	for(i=1;i<TAM;i++){
		if(v[i]>v[0]){
			printf("Maior %d\n",v[i]);
        }else{
			if(v[i]==v[0]) {
				printf("Igual %d\n",v[i]);
            }else{
				if(v[i]<v[0]) {
					printf("Menor %d\n",v[i]);
				}
			}
		}
	}
	return 0;
}

