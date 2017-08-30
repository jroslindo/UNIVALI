/*
6.	Faça um programa que exiba o maior dentre dois números reais digitados pelo usuário. Caso eles sejam iguais exiba uma mensagem correspondente. Saídas:
•	Pedido ao usuário = "Digite dois números reais:";
•	Caso eles sejam iguais = “Eles são iguais”.
•	Caso sejam diferentes exiba somente o numero desejado.
*/

#include <stdio.h>

int main()
{
    float n1, n2;

    printf("Digite dois números reais: ");
	scanf("%f%f",&n1,&n2);

    if(n1 == n2){
        printf("Eles são iguais");
    }else{
        if(n1 > n2){
            printf("%.2f é maior",n1);
        } else {
            printf("%.2f é maior",n2);
        }
    }
}

