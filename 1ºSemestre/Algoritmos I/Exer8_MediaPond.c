//O sistema de avalia��o de determinada disciplina, � composto por tr�s provas. A primeira prova tem peso 2, a segunda tem peso 4 e a terceira prova tem peso 6. Fa�a um programa que solicita as notas para o aluno, calcula e exibe a m�dia final deste aluno.

#include <stdio.h>

int main()
{
    float prova1, prova2, prova3, media;
    scanf("%f%f%f",&prova1,&prova2,&prova3);
    media = (prova1 * 2 + prova2 * 4 + prova3 * 6) / 12;
    printf("%.2f",media);

    return 0;
}

