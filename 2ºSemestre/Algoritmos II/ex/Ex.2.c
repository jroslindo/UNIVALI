//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2 - Calcule a m�dia das notas de 10 alunos de uma disciplina e determine o n�mero de alunos que tiveram nota superior a m�dia calculada/////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <locale.h>

#define TAM 10

int main(){
    setlocale(LC_ALL,"Portuguese");
	float v[TAM],media=0;
	int i,c=0;
	for(i=0;i<TAM;i++){
        printf("Digite um valor: ");
		scanf("%f",&v[i]);
		media=media+v[i];
	}
	media=media/TAM;
	printf("\nA m�dia � %.2f",media);
	printf("\n\nAs seguintes notas est�o acima da m�dia:\n",media);
	for(i=0;i<TAM;i++){
		if(v[i]>media)	{
		    c++;
			printf("-> %.2f\n",v[i]);
		}
	}
	printf("Qtd: %d",c);
    return 0;
}

