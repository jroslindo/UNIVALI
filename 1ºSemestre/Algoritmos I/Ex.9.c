/*
9.	Fa�a um programa que solicita ao usu�rio seu nome e as notas de tr�s provas. Calcule a m�dia aritm�tica e informe se o aluno foi Aprovado ou Reprovado (o aluno � considerado aprovado com a m�dia igual ou superior a 6). Sa�das:
�	Pedido ao usu�rio = "Digite as notas a seguir:";
�	Caso nota maior que 6 = �Voc� foi aprovado�;
�	Caso nota menor que 6 = �Voc� foi reprovado�
*/

#include <stdio.h>

int main()
{
    char nome[30];
    float n1, n2, n3, media;

    printf("Digite o seu nome e a nota de 3 provas: ");
    scanf("%s%f%f%f",&nome,&n1,&n2,&n3);

    media = (n1 + n2 + n3) / 3;

    if(media >= 6){
        printf("Voc� foi aprovado");
    } else {
        printf("Voc� foi reprovado");
    }

	return 0;
}

