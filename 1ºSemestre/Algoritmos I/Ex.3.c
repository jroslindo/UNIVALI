/*
3.	Faça um programa que solicita ao usuário uma letra e verifique se ela é uma vogal ou não exibindo uma mensagem correspondente. Saídas
•	Pedido ao usuário= "Digite uma letra:";
•	Caso verdadeiro = “É uma vogal”;
•	Caso falso = “Não é uma vogal”.
*/

#include <stdio.h>

int main()
{
	char letra;

	printf("Digite uma letra: ");
	scanf("%c",&letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("É uma vogal");
	}else{
        printf("Não é uma vogal");
	}
	return 0;
}

