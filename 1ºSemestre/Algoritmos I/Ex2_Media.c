//Al�m da soma exiba a m�dia dos valores...

#include <stdio.h>

int main()
{
    int valor1, valor2, valor3, soma, media;

    scanf("%d",&valor1);
    scanf("%d",&valor2);
    scanf("%d",&valor3);

    soma = valor1+valor2+valor3;
    media = soma/3;

    printf("%d",media);


    return 0;
}

