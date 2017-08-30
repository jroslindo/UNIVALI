/*
9.	Faça um programa que solicita ao usuário seu nome e as notas de três provas. Calcule a média aritmética e informe se o aluno foi Aprovado ou Reprovado (o aluno é considerado aprovado com a média igual ou superior a 6). Saídas:
•	Pedido ao usuário = "Digite as notas a seguir:";
•	Caso nota maior que 6 = “Você foi aprovado”;
•	Caso nota menor que 6 = ”Você foi reprovado”
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
        printf("Você foi aprovado");
    } else {
        printf("Você foi reprovado");
    }

	return 0;
}

