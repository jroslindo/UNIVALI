/*
1) Fa�a um programa que solicite ao usu�rio a quantidade de m�dias parciais de uma disciplina:
�	As m�dias devem ter duas casas decimais.
�	Leia a quantidade de m�dias informadas pelo usu�rio.
�	Grave cada uma das m�dias parciais, com duas casas decimais em um arquivo texto com o nome "notas.txt"
�	Caso o programa seja executado v�rias vezes, o arquivo "notas.txt" deve gravar o conte�do digitado em todas as execu��es.
*/

#include <stdio.h>

int main(){

	char url[]="notas.txt";
	float nota,
	      media=0.0;
	int   n, i;

	FILE *arq;

    // Abre o arquivo texto para adicionar linhas ao final
	arq = fopen(url, "at");
	// Verifica se houve erro na abertura do arquivo
	if(arq == NULL){
        // Caso tenha havido um erro, cria um arquivo novo.
        arq = fopen(url, "wt");
        // Se houve erro na cria��o do arquivo
        if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
			return 1;
        }
	}

    printf("Quantas m�dias parciais houve para a disciplina? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        // L� a nota
		printf("Digite a nota da M%d: ", i);
		scanf("%f", &nota);
        // Grava a nota no arquivo
		fprintf(arq, "M%d: %.2f\n", i, nota);
		// Acumula a nota para calcular a m�dia
		media+=nota;
		// Grava a nota digitada da mem�ria para o arquivo
		fflush(arq);
    }

    // Calcula a m�dia final
	media /= n;
	// Grava a m�dia no arquivo
	fprintf(arq, "Media final: %.2f\n\n", media);

    // Fecha o arquivo
	fclose(arq);

	return 0;
}

