/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3 - Utilizando alocação dinâmica e aritmética de ponteiros, calcule a média das notas de N alunos (onde N é um valor fornecido pelo usuário) de uma disciplina e determine o número de alunos que tiveram nota superior a média calculada./////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int TAM;
	float *v, media=0;

	printf("Tamanho: ");
    scanf("%d",&TAM);

    v = malloc(TAM * sizeof(float));

    int i;
	for(i=0;i<TAM;i++){
        printf("Digite um valor: ");
		scanf("%f",(v+i));
		media = media + *(v+i);
	}

	media = media/TAM;
	printf("\nA média é %.2f",media);
	printf("\n\nAs seguintes notas estão acima da média:\n",media);
	for(i=0;i<TAM;i++){
		if(*(v+i)>media)	{
			printf("-> %.2f\n",*(v+i));
		}
	}
	free(v);
    return 0;
}

