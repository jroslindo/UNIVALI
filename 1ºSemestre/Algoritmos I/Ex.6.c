/*
6.	Fa�a um programa que exiba o maior dentre dois n�meros reais digitados pelo usu�rio. Caso eles sejam iguais exiba uma mensagem correspondente. Sa�das:
�	Pedido ao usu�rio = "Digite dois n�meros reais:";
�	Caso eles sejam iguais = �Eles s�o iguais�.
�	Caso sejam diferentes exiba somente o numero desejado.
*/

#include <stdio.h>

int main()
{
    float n1, n2;

    printf("Digite dois n�meros reais: ");
	scanf("%f%f",&n1,&n2);

    if(n1 == n2){
        printf("Eles s�o iguais");
    }else{
        if(n1 > n2){
            printf("%.2f � maior",n1);
        } else {
            printf("%.2f � maior",n2);
        }
    }
}

