/*
1) Faça um programa que solicite ao usuário a quantidade de médias parciais de uma disciplina:
•	As médias devem ter duas casas decimais.
•	Leia a quantidade de médias informadas pelo usuário.
•	Grave cada uma das médias parciais, com duas casas decimais em um arquivo texto com o nome "notas.txt"
•	Caso o programa seja executado várias vezes, o arquivo "notas.txt" deve gravar o conteúdo digitado em todas as execuções.
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
        // Se houve erro na criação do arquivo
        if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
			return 1;
        }
	}

    printf("Quantas médias parciais houve para a disciplina? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        // Lê a nota
		printf("Digite a nota da M%d: ", i);
		scanf("%f", &nota);
        // Grava a nota no arquivo
		fprintf(arq, "M%d: %.2f\n", i, nota);
		// Acumula a nota para calcular a média
		media+=nota;
		// Grava a nota digitada da memória para o arquivo
		fflush(arq);
    }

    // Calcula a média final
	media /= n;
	// Grava a média no arquivo
	fprintf(arq, "Media final: %.2f\n\n", media);

    // Fecha o arquivo
	fclose(arq);

	return 0;
}

