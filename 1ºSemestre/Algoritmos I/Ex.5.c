/*
5.	Fa�a um programa que solicita ao usu�rio dois n�meros inteiros. O primeiro � o valor das horas e o segundo dos minutos. Verifique se a hora � v�lida e exiba uma mensagem correspondente (considere a hora 24:00 como inv�lida). Sa�das:
�	Pedido para horas = "Entre com um n�mero para as horas: ";
�	Pedido para os minutos = "Entre com um n�mero para os minutos:";
�	Caso verdadeiro = �A hora � v�lida�;
�	Caso falso = �A hora � inv�lida�.
*/

#include <stdio.h>

int main()
{
int horas, minutos;

    printf("Entre com um n�mero para as horas: ");
    scanf("%d",&horas);

    printf("Entre com um n�mero para os minutos: ");
    scanf("%d",&minutos);

    if((horas >= 0 && horas < 24) && (minutos >= 0 && minutos < 60)){
        printf("A hora � v�lida");
    } else {
        printf("A hora � inv�lida�");
    }
    return 0;
}

