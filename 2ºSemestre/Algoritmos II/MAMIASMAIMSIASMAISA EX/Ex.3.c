/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3 - Utilizando aloca��o din�mica e aritm�tica de ponteiros, calcule a m�dia das notas de N alunos (onde N � um valor fornecido pelo usu�rio) de uma disciplina e determine o n�mero de alunos que tiveram nota superior a m�dia calculada./////
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
	printf("\nA m�dia � %.2f",media);
	printf("\n\nAs seguintes notas est�o acima da m�dia:\n",media);
	for(i=0;i<TAM;i++){
		if(*(v+i)>media)	{
			printf("-> %.2f\n",*(v+i));
		}
	}
	free(v);
    return 0;
}

