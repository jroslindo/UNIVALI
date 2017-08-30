/*
2) Fa�a um programa que leia um arquivo texto "origem.txt" (crie pelo bloco de notas ou outro editor de texto puro), caracter a caracter:
�	Converta cada caracter lido no arquivo "origem.txt", em seu correspondente mai�sculo e grave em um arquivo "destino.txt".
�	Para converter caracteres em mai�sculo, utilizar a fun��o toupper, que � implementada na biblioteca <ctype.h>
*/

#include <stdio.h>
#include <ctype.h>

int main(){


    char ch, chUpper;
    FILE *arqOri, *arqDest;

    // Abre o arquivo texto de origem, para leitura
    arqOri = fopen("origem.txt","rt");
    if (arqOri == NULL){
        printf("Erro, nao foi possivel abrir o arquivo de Origem.\n");
        return 1;
    }

    // Cria um novo arquivo texto, para grava��o
    arqDest = fopen("destino.txt","wt");
    if (arqDest == NULL){
        printf("Erro, nao foi possivel criar o arquivo de Destino.\n");
        return 1;
    }

    // Le o arquivo de origem
    while ((ch = fgetc(arqOri))!=EOF){
        chUpper = toupper(ch);
        fputc(chUpper,arqDest);
    }

    fclose(arqOri);
    fclose(arqDest);
}

