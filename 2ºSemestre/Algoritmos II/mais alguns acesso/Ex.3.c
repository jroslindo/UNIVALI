/*
3) Faça um programa que permita ao usuário digitar 10 números inteiros:
•	Grave cada um dos números digitados em um arquivo BINÁRIO chamado "inteiros.dat"
•	O arquivo deve conter apenas os números digitados na última execução do programa.
•	Leia o arquivo com acesso SEQUENCIAL para localizar o maior e o menor valor.
•	Leia o arquivo com acesso DIRETO para localizar e imprimir o maior valor.
•	Leia o arquivo com acesso DIRETO para localizar e imprimir o menor valor.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){


    FILE *arqDados;

    int i,
        nroDigitado,
        auxMaior = 0,
        auxMenor = 999;

    long posMaior, posMenor;

    // Cria arquivo binário
    arqDados = fopen ("inteiros.dat", "w+b"); // IMPORTANTE, ATENTAR AO "+", para permitir a leitura

    if (arqDados == NULL) {
       printf ("Houve um erro ao criar o arquivo.\n");
    }
    else {
        // Lê 10 inteiros
        for (i = 1; i <= 10; i++){
            printf("Digite o %do. numero inteiro: ", i);
            scanf("%d", &nroDigitado);
            fwrite(&nroDigitado, sizeof(int), 1, arqDados);
        }
    }

    // Grava os dados da memória para o arquivo
    fflush(arqDados);

    // Volta ao início do arquivo
    rewind(arqDados);

    // Navegação Sequencial para localizar o maior e o menor número digitado
    while ((fread(&nroDigitado, sizeof(int), 1, arqDados)) > 0){
        // Pega o maior numero
        if (nroDigitado >= auxMaior){
            auxMaior = nroDigitado;
            posMaior = ftell(arqDados) - sizeof(int);
        }

        if (nroDigitado <= auxMenor){
            auxMenor = nroDigitado;
            posMenor = ftell(arqDados) - sizeof(int);
        }

            printf("Maior Valor %d; Menor Valor %d; \n", auxMaior, auxMenor);

    }

    // Acesso Direto para mostar o registro com o maior inteiro
    fseek(arqDados, posMaior, SEEK_SET);
    // Lê o número Gravado
    fread(&nroDigitado, sizeof(int), 1, arqDados);
    printf("\n==== Maior Valor ====\n");
    // Mostra o maior número digitado
    printf("Maior valor digitado: %d\n", nroDigitado);

    // Acesso Direto para mostar o registro com o menor inteiro
    fseek(arqDados, posMenor, SEEK_SET);
    // Lê o número Gravado
    fread(&nroDigitado, sizeof(int), 1, arqDados);
    printf("\n==== Menor Valor ====\n");
    // Mostra o menor número digitado
    printf("Menor valor digitado: %d\n", nroDigitado);

	fclose(arqDados);

    return 0;
 }

